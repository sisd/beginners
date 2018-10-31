#include<stdio.h>
int main()
{
	int x,n,c=0,count=0;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for(int i=0;i<n;i++)
	{
		(i==0)?(x=s[0]):(x=s[i-1]);
		if(s[i]==x && i!=0) c++;
		else {count+=c;c=0;}
//		printf("%d c:%d ",count,c);
		
	}
	if(c>0) count+=c;
	printf("%d",count);
}	
	
