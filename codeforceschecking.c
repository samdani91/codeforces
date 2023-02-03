#include<stdio.h>

int main()
{

	char ch;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf(" %c",&ch);
		if(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='o'||ch=='r'||ch=='c'||ch=='e'||ch=='s')
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}