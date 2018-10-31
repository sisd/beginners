#include<stdio.h>
long long int max(long long int a,long long int b)
{
	long long int m;
	(a>=b)?(m=a):(m=b);
	return m;
}
long long int min(long long int a,long long int b)
{
	long long int m;
	(a<=b)?(m=a):(m=b);
	return m;
}

int main()
{
	int H;
	scanf("%d",&H);
	long long int n,m,t;
	while(H--)
	{

		scanf("%lld %lld %lld",&n,&m,&t);
		long long int ans=0,max1=0,c,d,j=0,count1,count2,p[2001],q[2001],a1[2001],f1[2001],a2[2001],f2[2001];
		for(int k=0;k<2001;k++) {a1[k]=0;a2[k]=0;f1[k]=0;f2[k]=0;}
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&p[i]);
			(i==0)?(c=p[0]):(c=p[i-1]);
			if(i!=0)
			{
				if(p[i]==c) f1[j]++;
				else { ++j;a1[j]=p[i];f1[j]++;}
			}
			else  { a1[0]=c;f1[0]=1; }
		}
	 	
                count1=j;j=0;
//		printf("count1:%lld\n",count1);
//		for(int i=0;i<=count1;i++) printf("a1:%lld f1:%lld ",a1[i],f1[i]);
//		printf("\n");
		
		for(int i=0;i<m;i++)
		{
			scanf("%lld",&q[i]);
			(i==0)?(d=q[0]):(d=q[i-1]);
			if(i!=0)
			{
				if(q[i]==d) f2[j]++;
				else { ++j;a2[j]=q[i];f2[j]++;}
			}
			else  { a2[0]=d;f2[0]=1; }
		}
		count2=j;
//		printf("count2:%lld\n",count2);
//		for(int i=0;i<=count2;i++) printf("a2:%lld f2:%lld ",a2[i],f2[i]);
//		printf("\n");	

		for(int i=0;i<=count1;i++)
			{
				
				for(int j=0;j<=count2;j++)
				{
					if(a1[i]==a2[j]) { max1=min(f1[i],f2[j]);ans=max(max1,ans);}
				}
			}
		printf("%lld\n",ans*t);		


	}
}



