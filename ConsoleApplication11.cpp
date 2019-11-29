#include<iostream>
#include<stdio.h>
#include<string.h>
double calculateArea(double height, double width)
{
	return(height * width);


}
double calculatePaint(double area, int numCoats, double m2perlitre)
{
	double d;
	d = (area * numCoats) / m2perlitre;
	return d;
}
void main()
{
	char walls;
#
	double sum = 0.0;
	double doors;
	double area1;
	double area2;
	double sum1 = 0.0;
	char windows = 0;
	double area3;
	double m2Perlitre;
	double height;double width;
	int numcoats;
	double sum2 = 0.0;
	double doors1;
	do
	{
		printf("\nEnter wall height<m>:");
		scanf_s("%lf", &height);
		printf("\nEnter wall width<m>:");
		scanf_s("%lf", &width);
		printf("\nMore walls?<y/n>:");
		scanf_s(" %c", &walls);
		sum += calculateArea(height, width);

	} while (walls == 'y');
	printf("\nTotal wall area=%lf", sum);
	printf("\n\nHow many doors are there in the room?<count a double door as 2>:");
	scanf_s("%lf", &doors);
	for (int i = 0;i < doors;i++)
	{
		printf("\nEnter wall height<m>:");
		scanf_s("%lf", &height);
		printf("\nEnter wall width<m>:");
		scanf_s("%lf", &width);
		sum2 += calculateArea(height, width);
	}
	printf("\nHow many double doors are there:");
	scanf_s("%lf", &doors1);
	for (int i = 0;i < doors1;i++)
	{

		printf("\nEnter wall height<m>:");
		scanf_s("%lf", &height);
		printf("\nEnter wall width<m>:");
		scanf_s("%lf", &width);
		sum2 += 2*calculateArea(height, width);
	}
	area2 = sum - sum2;
	printf("\nTotal wall area minus doors:%lf", area2);
	printf("\n\nAre there any windows in the room?<y,n>?");
	scanf_s(" %c", &windows);
	while (windows == 'y')
	{
		printf("\nEnter window height:");
		scanf_s("%lf", &height);
		printf("\nEnter window width:");
		scanf_s("%lf", &width);
		printf("\nAny more windows<y/n>?");
		scanf_s(" %c", &windows);
		sum1 += calculateArea(width, height);

	}
	area3 = sum - sum1;


	printf("\nTotal wall area minus windows:%lf", area3);
	printf("\n\nWhat is the average m2 per litre of your paint:");
	scanf_s("%lf", &m2Perlitre);
	printf("\n How many coats do you want:");
	scanf_s("%d", &numcoats);
	double area5 = calculatePaint(area3, numcoats, m2Perlitre);
	int area6 = int(area5);
	printf("\nYou will need %lf litres of paint and and %d litres to the nearest 10", area5,area6);
}




