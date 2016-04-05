#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a)
	{
	    case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    printf("%c is a Vowel",a);
	    break;
	    default:
	    printf("%c is a Consonant",a);
	}
	return 0;
}
