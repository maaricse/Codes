#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	printf("%d is a Zero",a);
	else if(a%2==0)
	printf("%d is a Even Number",a);
	else
	printf("%d is a Odd Number",a);
	return 0;
}
