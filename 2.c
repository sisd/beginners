#include<stdio.h>
int a[1200];

int main()

{
	int t;
	int n,len,x;

	scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		scanf("%d",&n);
		a[0]=1; 
		len=1; 

		int carry = 0; 
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<len;j++)
			{
				x = a[j]*i+carry; 
				a[j]=x%10; 
				carry = x/10; 
			}
			while(carry>0) 
			{ 
				a[len]=carry%10;
				carry/=10;
				len++;
			}
		}
		for(int i=len-1;i>=0;i--) 
			printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
