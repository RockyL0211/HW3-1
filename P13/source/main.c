﻿#include <stdio.h>
#include <stdlib.h>
double Power(double, int);
int main(void)
{
	int k;
	double Ans;
	printf("計算3.5的K次方?請請入K=");
	scanf_s("%d", &k);
	Ans = Power(3.5, k);
	printf("3.5的次方%d=%f\n", k, Ans);
	system("pause");
	return 0;
}
double Power(double X, int n)
{
	double PowerXn = 1;
	for (int i = 1; i < n; i++)
		PowerXn = PowerXn * X;
	return PowerXn;
}