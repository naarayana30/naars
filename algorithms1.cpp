#include<iostream>
#define d 0.85
void main()
{
	int i;
	int ca = 2;
	int cb = 1;
	int cc = 2;
	int cd = 2;
	float pa = 1.0;
	float pb = 1.0;
	float pc = 1.0;
	float pd = 1.0;
	printf("\n		PA		PB		PC		PD")
		for (i = 1;i < 10;i++)
		{
			printf("\n%d", i);
			printf(" Iteration:");
			pa += 0.15 + d * ((pd / cd));
			pb += 0.15 + d * ((pc / cc) + (pa / ca) + (pd / cd));
			pc += 0.15 + d * ((pb / cb) + (pd / cd));
			pd += 0.15 + d * ((pa / ca) + (pc / cc));
			printf("/t%f", pa);
			printf("/t%f", pb);
			printf("/t%f", pc);
			printf("/t%f", pd);
			printf("\n");
		}
}


}