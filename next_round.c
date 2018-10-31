#include<stdio.h>

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a=arr[k-1];
//	printf("%d",a);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=a && arr[i]>0) 
		{
			count++;
		//	printf("%d",arr[i]);
		}
		else break;
	}
	printf("%d",count);
}
