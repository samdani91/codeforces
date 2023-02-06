#include<stdio.h>
#include<string.h>

int main()
{
	int n,count=0;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	int size=strlen(s);
	for (int i = 0; i < strlen(s); ++i)
	{
		
		if(i+2!=size)
		{
			if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
			{
				
				count++;

			}
		}

	}

	 printf("%d",count);

}