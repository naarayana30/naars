#include<iostream>
#include<string.h>
void main()
{
	char str[21] ="laXPETyhVT6ZOo7l15up";
	char str2[21] ="WdU3ahyXeciXQEZqxMSp";
	char str3[21]="FkaR2HlppY1zcOmc40zK" ;
	int i, j, k;
	int num=0, up=0, low = 0;
	
	printf("\nSTRING#0");
		printf("\nORIGINAL STRINGS IS:%s", str);
		for (j = 0;j < 20;j++)
		{
			if (int(str[j]) >= 65 && int(str[j]) <= 90)
			{
				str[j] = str[j] + 32;
				up++;
			}
			else if (int(str[j]) >= 97 && int(str[j]) <= 122)
			{
				str[j] = str[j] - 32;
				low++;
			}
			else if (int(str[j]) >= 48 && int(str[j]) <= 57)
			{
				str[j] = '*';
				num++;
			}
		}
		printf("\nNEW STRING IS:%s", str);
		printf("\nnumbers to astericks =%d", num);
		printf("\nuppercase to lowercase=%d", up);
		printf("\nlowercase to uppercase=%d", low);
		num = 0;low = 0;up = 0;


		printf("\nSTRING#1");
		printf("\nORIGINAL STRINGS IS:%s",str2);
		for (i = 0;i < 20;i++)
		{
			if (int(str2 [i]) >= 65 && int(str2[i]) <= 90)
			{
				str2[i] = str2[i] + 32;
				up++;
			}
			else if (int(str2[i]) >= 97 && int(str2[i]) <= 122)
			{
				str2[i] = str2[i] - 32;
				low++;
			}
			else if (int(str2[i]) >= 48 && int(str2[i]) <= 57)
			{
				str2[i] = '*';
				num++;
			}
		}
		printf("\nNEW STRING IS:%s", str2);
		printf("\nnumbers to astericks =%d", num);
		printf("\nuppercase to lowercase=%d", up);
		printf("\nlowercase to uppercase=%d", low);
		num = 0;low = 0;up = 0;


		printf("\nSTRING#2");
		printf("\nORIGINAL STRINGS IS:%s", str3);
		for (k = 0;k < 20;k++)
		{
			if (int(str3[k]) >= 65 && int(str3[k]) <= 90)
			{
				str3[k] = str3[k] + 32;
				up++;
			}
			else if (int(str3[k]) >= 97 && int(str3[k]) <= 122)
			{
				str3[k] = str3[k] - 32;
				low++;
			}
			else if (int(str3[k]) >= 48 && int(str3[k]) <= 57)
			{
				str3[k] = '*';
				num++;
			}
		}
		printf("\nNEW STRING IS:%s", str3);
		printf("\nnumbers to astericks =%d", num);
		printf("\nuppercase to lowercase=%d", up);
		printf("\nlowercase to uppercase=%d", low);
		num = 0;low = 0;up = 0;
	

}