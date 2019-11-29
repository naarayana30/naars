#include<stdio.h>
void main()
{
	double arr[10];
	int i;int  sum = 0;
	double avg = 0.0;
	printf("\n Program to calculate max.min.and average of upto 10 floating point numbers:\n");
	printf("\n Enter 10 numbers and 0.0 to stop:")
	scanf("%f", &arr[0]);
	int max = min = arr[0];
		for (i = 1;i < 10;i++)
	{
			if (arr[0] == 0.0)
				break;
			scanf("%f", &arr[i]);
			if (arr[i] == 0.0)
				break;
		sum += arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	avg = sum / i;
	printf("\nMaximum Number is:%f", max);
	print("\nMinimum Number is:%f", min);
	printf("\nAverage of %d", i, "the numbers is:%f", avg);
}