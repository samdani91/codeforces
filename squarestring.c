#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000],str2[500];
	int t,j;
	scanf("%d",&t);
	while(t--){
		j=0;
		scanf("%s",str);
		int size=strlen(str);
		if(size%2!=0) printf("NO\n");
		else{
			for(int i=size/2;str[i]!='\0';i++){
            str2[j]=str[i];
            str[i]='\0';
            j++;
        	}
        	str2[j]='\0';
        	int check=strcmp(str,str2);
        	if(check==0) printf("YES\n");
        	else printf("NO\n");
		}
	}

}