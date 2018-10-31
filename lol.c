#include<stdio.h>
#include<string.h>

int main (){
	int t;
	scanf("%d",&t);

	while(t--){
		int co1=0,co2=0,co3=0,c[5]={0},d[5]={0};
		char a[120]={'\0'};
		scanf("%s",a);

		for(int i = 0; i < strlen(a); i++)
		{
			if ('a'<=a[i]&&'z'>=a[i])
			 {
				co1++;
				if(co1>2){
					c[1]=i;
				}else if(co1>1){
					d[1]=i;
				}
			}   else
				if ('A'<=a[i]&&'Z'>=a[i]) {
					co2++; 
					if(co2>2){
						c[2]=i;
					}else if(co2>1){
						d[2]=i;
					}
				}
					else
				if(a[i]>=48 && a[i]< 57){
					co3++; 
					if(co3>2){
						c[3]=i;
					}else if(co3>1){
						d[3]=i;
					}
				//	printf("%d\n",c[3]); 
				}	
                  //  printf("%s i %d 1 %d 2 %d  3%d\n",a,i,co1,co2,co3); 
		}
//printf("%d\n",co3);
		if(co3==0)
		{
			//printf("third\n");
			while(co1>1&&co3==0){
				if(d[1]&&co3==0){
					a[d[1]]='3';
					d[1]=0;
					co3++;
				} else if(c[1]&&co3==0){
					a[c[1]]='1';
					c[1]=0;
					co3++;
				}else break;
			}
			while(co2>1&&co3==0){
				//  else 
				if (d[2]) {
					a[d[2]]='2';
					d[2]=0;
					co3++;
				}else

					if (c[2]&&co3==0) {
						a[c[2]]='4';
						c[2]=0;
						co3++;
					} else break;
			}              
		}
    // printf("2 %d 1 %d 3 %d coddition %d\n",co2,co1,co3,co3>1 && d[3] );
		if(co2==0)
		{
		//	printf("second");
			while(co1>1&&co2==0){
				if(d[1]&&co2==0){
					a[d[1]]='A';
					d[1]=0;
					co2++;
				} else if(c[1]&&co2==0){
					a[c[1]]='B';
					c[1]=0;
					co2++;
				}else break;
			}
			while(co3>1 && co2==0){
				//  else 
				if (d[3]&&co2==0) {
					a[d[3]]='C';
					d[3]=0;
					co2++;
				}else

					if (c[3]&&co2==0) {
						a[c[3]]='D';
						c[3]=0;
						co2++;
					} else break;
			}
        //    printf("1%s\n",a);              
		}
	//printf("%s\n",a);
		if(co1==0)
		{
	//			printf("%d\n",d[3]);
	//			printf("first\n");
			while(co3>1&&co1==0){
				if(d[3]&&co1==0){
					a[d[3]]='a';
					d[3]=0;
					co1++;
				} else if(c[3]&&co1==0){
					a[c[3]]='b';
					c[3]=0;
					co1++;
				}else break;
			}
			
			while(co2>1&&co1==0){
				//else 
				if (d[2]&&co1==0) {
					a[d[2]]='d';
					d[2]=0;
					co1++;
				}else
					if (c[2]&&co1==0) {
						a[c[2]]='e';
						c[2]=0; 
						co1++;
					}else break; 
			} //   printf("%s\n",a);          
		}
		
        printf("%s\n",a);    
	} 
	return 0;
}
