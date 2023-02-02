#include<stdio.h>
#include<string.h>

int main()
{
	char str[1001],str2[1000],ch;
	gets(str);
	int j=0,count=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str2[j]=str[i];
			j++;
		}
	}
	str2[j]='\0';
	for (int i = 0; i < strlen(str2); i++)
	{
		for(int j=i+1;j<strlen(str2);j++)
		{
			if(str2[i]>str2[j])
			{
				ch=str2[i];
				str2[i]=str2[j];
				str2[j]=ch;
			}
		}
	}
	for (int i = 0; i < strlen(str2); ++i)
	{
		if(str2[i]!=str2[i+1])
		{
			count++;
		}		
	}
	printf("%d",count);

}