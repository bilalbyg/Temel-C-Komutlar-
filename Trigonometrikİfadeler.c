#include<stdio.h>
#include<math.h>
#define pi 3.141592
int main()
{
	double aci,radyan,tan,cot,sec,cosec;
	printf("Aci giriniz : ");
	scanf("%lf",&aci);
	radyan = aci*pi/180;
	tan = sin(radyan)/cos(radyan);
	cot = cos(radyan)/sin(radyan);
	sec = 1.0/cos(radyan);
	cosec = 1.0/sin(radyan);
	printf("Cos : %f \nSin : %f\n",cos(radyan),sin(radyan));
	printf("Tan : %f \nCot : %f\n",tan,cot);
	printf("Sec : %f \nCosec : %f",sec,cosec);
}
