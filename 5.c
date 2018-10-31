#include<stdio.h>

long long int mul(long long int a,long long int b,long long int m)
{
	long long int r=a%m,ans=0;
	while(b>0)
	{
		if(b%2==1) ans=(ans+r)%m;
		r=(r+r)%m;
		b=b/2;
	}
	return ans;
}
int main()
{

	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int mod,N,ans=1;
		scanf("%lld %lld",&N,&mod);
		while(N--)
		{
			long long int n,m,n1,m1,A,B,A1,B1,temp_ans=1;
			scanf("%lld %lld",&n,&m);
			A1=n+1;B1=m+1;n1=n;m1=m;	
			(n%2==0)?(n1=n1/2):(A1=A1/2);
			
			(m%2==0)?(m1=m1/2):(B1=B1/2);
			
			A=mul(n1,A1,mod);
			B=mul(m1,B1,mod);
			
			temp_ans=mul(A,B,mod);
			ans=mul(ans,temp_ans,mod);
//			printf("%lld %lld\n",temp_ans,ans);
		}

		printf("%lld\n",ans);
	}

}
