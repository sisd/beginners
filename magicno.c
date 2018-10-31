#include<stdio.h>
int main()
{
	long long int n,copy;
        int curr=0,dig,c=0,flag=0;
	scanf("%lld",&n);
	int a[n];
	copy=n;
	while(copy>0)
	{
		dig=copy%10;
		a[c]=dig;
	        c++;copy/=10;
	}
	for(int i=c-1;i>=0;i--)
	{
		printf("%d",a[i]);
		if(a[c-1]!=1) {printf("NO\n");return 0;}
		if(a[i]!=1 && a[i]!=4) {printf("NO\n");return 0;}
//		if(curr!=0) {printf("NO\n");break;}
		if(a[i]==1) curr=0;
		else if(a[i]==4) curr=0;
		else curr=1;
//		printf("dig:%d ",curr);
	}
	if(curr==0) printf("YES\n");
	else printf("NO\n");

}
			
