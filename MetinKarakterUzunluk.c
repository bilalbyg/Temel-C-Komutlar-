#include<stdio.h>
#include<string.h>
int main()
{
	int uzunluk;
	char metin[100];
	printf("Bir metin giriniz.\n");
	gets(metin);
	uzunluk = strlen(metin);
	printf("Metin uzunlugu : %d",uzunluk);
	return 0;
}
