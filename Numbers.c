#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
	printf("%d is a Zero",a);
	else if(a<0)
	printf("%d is a Negative Number",a);
	else
	printf("%d is a positive Number",a);
	return 0;
}
