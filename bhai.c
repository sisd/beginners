#include<stdio.h>
int main()
{
	int n,x=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char s[5];
		scanf("%s",s);
		if(s[1]=='+' || s[3]=='+') x++;
		else x--;
	}
	printf("%d",x);
}
	
