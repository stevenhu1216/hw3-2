#include<stdio.h>
#include<stdlib.h>
int f(int a,int b);

int main(void)
{
	int a, b;
	printf("�п�J��Ӽ�:");
	scanf_s("%d %d", &a, &b);

	printf("�̤p�����Ƭ�:%d\n", f(a,b));

	system("pause");
	return 0;
}
int f(int a,int b)
{
	int c, lcm;
	if (a > b)
	{
		c = a % b;
		lcm = c * a / c * b / c;
	}
	else 
	{
		c = b % a;
		lcm = c * a / c * b / c;
	}
	return lcm;
}