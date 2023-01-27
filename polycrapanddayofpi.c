#include<stdio.h>
#include<string.h>

int main()
{
	int t,count;
	scanf("%d",&t);
	while(t--){
		count=0;
		char str[31];
		char str2[31]="314159265358979323846264338327";
		scanf("%s",str);
		int size=strlen(str);
		if(str[0]!='3') printf("0\n");
		else{
			for(int i=0;i<size;i++){
				if(str[i]==str2[i]) count++;
				else break;
			}
			printf("%d\n",count);
		}
	}
}