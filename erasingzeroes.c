#include<stdio.h>
#include<string.h>

int main()
{

	int t,count,flag,f,l;
	char s[101];
	scanf("%d",&t);
	while(t--)
	{	
		count=0,flag=0;
		scanf("%s",s);
		int size=strlen(s);
		for (int i = 0; i < strlen(s); ++i)
		{
			if(s[i]=='1'){
				f=i;
				flag=1;
				break;
			}
		}
		if(flag==1){
			for (int i = size-1; i>=0; i--)
			{
				if(s[i]=='1'){
					l=i;
					break;
				}
			}

			for (int i = f+1; i <l ; ++i)
			{
				if(s[i]=='0') count++;
			}
		}
		printf("%d\n",count);
	}


	return 0;
}