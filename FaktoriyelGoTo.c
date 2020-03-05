#include<stdio.h>
int main()
{
	int n,i = 0;
	long int carpim = 1;
	printf("Faktoriyeli alinacak sayiyi giriniz : ");
	scanf("%d",&n);
	e : i++;
	carpim = carpim * i;
	if(i == n)
	{
		printf("Sonuc : %d",carpim);
	}
	else
	{
		goto e;
	}
}
