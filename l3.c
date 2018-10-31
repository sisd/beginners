#include <stdio.h>
#include<string.h>
int main(){
	int t;
	
	scanf("%d",&t);
	while(t--){
		int a,b,l,count[120] = {0};
		char w1[100][8],w2[100][8];
		scanf("%d %d",&a,&b);

				for (int i = 0; i < a; ++i)
				{
					scanf("%s",w1[i]);
				}
				//for (int i = 0; i < a; ++i)
				//{
				//	/* code */printf("%s\n",w1[i]);
				//}
				for (int i = 0; i < b; ++i)
				{
					scanf("%d",&l);
					for (int j = 0; j < l; ++j)
					{
						scanf("%s",w2[j]);
					}
					for (int m= 0; m < a; ++m)
					{											
					for (int j = 0; j < l; ++j)
					{
						if(strcmp(w1[m],w2[j])==0){
							count[m]=2;
						break;
						}

					}
					}
				}
			
			for (int i = 0; i < a; ++i)
			{
				if(count[i]==2){

					printf("YES ");
				}else printf("NO ");
			}
printf("\n");
	}		
}
