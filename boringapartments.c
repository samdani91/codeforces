#include<stdio.h>
#include<string.h>

int main()
{
	
	int n,i,t,store,count;
	int str[40];
	int arr[40]={1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&n);
		for(i=0;i<40;i++){
			str[i]=arr[i];
			if(n==arr[i]) {
				store=i;
				break;
			}
		}
		for(int i=0;i<=store;i++){
			if(str[i]>=1&&str[i]<=9) count=count+1;
			else if(str[i]>=10&&str[i]<=99) count=count+2;
			else if(str[i]>=100&&str[i]<=999) count+=3;
			else if(str[i]>=1000&&str[i]<=10000) count+=4;
		}
	printf("%d\n",count );

	}


}