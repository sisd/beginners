#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char s[101];
	scanf("%s",s);

	int n;
	n=strlen(s);
	
	for(int i=0;i<n;i++)
	{
		char a;
		a=tolower(s[i]);
		
		if(a!='y'&& a!='a' &&  a!='e' && a!='i' && a!='o' && a!='u') 
		{
			printf(".");
			printf("%c",a);
			
		}
	}
	return 0;
}
