#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static char a[] = "ETIANMSURWDKGOHVFiLlPJBXCYZQov54e3you2arebest16forever7now8s90";
void DD(int j,int k)
{
	k > 1 ? DD(j/2, --k) : 0;
	putchar(j%2 ? '-' : '.');
}
char main()
{	
	char i, n, j, k, *str; 
	for(;i = 0,n = 1;)
	{
		str = (char*)malloc(sizeof(char));
		while((str[i++] = getchar())!='\n')
		{
			str = (char*)realloc(str,++n*sizeof(char));
			str[i-1] -= 96 < str[i-1] && str[i-1] < 123 ? 32 : 0;
		}
		for(i = -1; i++ < n-1;)
		{
			for(j = -1; a[j] != str[i] && j++ < 62;);
			for(k = 1; pow(2,k) <= j; j -= pow(2,k++));
			k<6 ? DD(j,k) , printf("  ") : 0;
		}
		free(str);printf("%c",10);
	}
}
