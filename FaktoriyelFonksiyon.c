#include<stdio.h>
void faktoriyel(int n)
{
	int carpim = 1,x;
	for(x = 1;x <= n;x++)
	{
		carpim = carpim * x;
	}
	printf("Faktoriyel : %d",carpim);
}
int main()
{
	int a;
	printf("a sayisini giriniz : \n");
	scanf("%d",&a);
	faktoriyel(a);
	return 0;
}
