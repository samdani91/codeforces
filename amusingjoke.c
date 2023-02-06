#include<stdio.h>
#include<string.h>

int main()
{
	char s1[101],s2[101],s3[101];
	int count=0,count2=0;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);

	int length1=strlen(s1);
	int length2=strlen(s2);
	int length3=strlen(s3);

	if((length1+length2)!=length3) printf("NO");
	else{
		for (int i = 0; i < length3; ++i)
		{	
			for (int j = 0; j < length1; j++)
			{
				if(s3[i]==s1[j] && s1[j]!='@'){
					count++;
					s1[j]='@';
					s3[i]='*';
					break;
				}

			}
		}

		for (int i = 0; i < length3; ++i)
		{	
			for (int j = 0; j < length2; j++)
			{
				if(s3[i]==s2[j]  && s2[j]!='@' &&s3[i]!='*'){
					count2++;
					s2[j]='@';
					break;
				}
			}
		}

		if(count==length1&&count2==length2) printf("YES");
		else printf("NO");
	}
}