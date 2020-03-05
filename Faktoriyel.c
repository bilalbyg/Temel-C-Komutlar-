#include<stdio.h>
int main()
{
	int i,carpim = 1,n;
	printf("Faktoriyeli alinacak sayiyi giriniz.\n");
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		carpim = carpim * i;
	}
	printf("For ile !\n");
	printf("Faktoriyel : %d\n",carpim);
	printf("\n");
	i = 1;
	carpim = 1;
	while(i <= n)
	{
		carpim = carpim * i;
		i++;
	}
	printf("While ile !\n");
	printf("Faktoriyel : %d",carpim);
}
