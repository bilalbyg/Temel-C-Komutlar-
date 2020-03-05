#include<stdio.h>
#include<string.h>
int main()
{
	char ilkmetin[100];
	char ikincimetin[100];
	printf("Bir metin giriniz.\n");
	gets(ilkmetin);
	printf("Bir metin giriniz.\n");
	gets(ikincimetin);
	int durum;
	durum = strcmp(ilkmetin,ikincimetin);
	if(durum == 0)
	{
		printf("Ýki metin ayni.");
	}
	else
	{
		printf("Ýki metin farkli.");
	}
}
