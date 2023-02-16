#include<stdio.h>

int main()
{

	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char str[n+1],str2[n];
		scanf("%s",str);
		int count1=0,k=0;

		for(int i=0;i<n;i++){
		  if(i==0){
		  	if(str[i]=='1') count1++;
		  }else{
		  	if(str[i]=='1'){
		  		count1++;
		  		if(count1%2==0) {
		  			str2[k]='-';
		  			k++;
		  		}else{
		  			str2[k]='+';
		  			k++;
		  		}
		  	}else{
		  		str2[k]='+';
		  		k++;
		  	}
		  }

		}
		str2[k]='\0';
		printf("%s\n",str2);
	}

	return 0;
}