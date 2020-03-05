#include<stdio.h>
int kareal(int x);
int kupal(int y);
int main()
{
	int a = 5;
	int b = 4;
	printf("%d\n",kareal(a));
	printf("%d\n",kupal(b));
}
int kareal(int x)
{
	int kare;
	kare = x*x;
	return kare;
}
int kupal(int y)
{
	int kup;
	kup = y*y*y;
	return kup;
}
