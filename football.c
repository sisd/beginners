#include<stdio.h>
int main()
{
	int n,count=0,x;
	char s[101];
	scanf("%s",s);
	n=sizeof(s)/sizeof(s[0]);
//	printf("%d %s\n",n,s);
	for(int i=0;i<n;i++)
	{
		(i==0)?(x=s[0]):(x=s[i-1]);
		if (count==6) {printf("YES\n");return 0;}
		if(x==s[i] && i!=0 && (x=='0' || x=='1'))
			count++;
		else count=0;
	}
	printf("NO\n");
}
