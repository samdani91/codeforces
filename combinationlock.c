#include<stdio.h>
#include<math.h>

int min(int a,int b){
	if(a<b) return a;
	else return b;
}
int main()
{

	int d,sum=0;
	scanf("%d",&d);
	char s1[d+1],s2[d+1];
	scanf("%s",s1);
	scanf("%s",s2);
	for (int i = 0; i < d; ++i)
	{	
		int result1=abs(('0'-s1[i])-('0'-s2[i]));
		int result2=10-abs(('0'-s1[i])-('0'-s2[i]));
		sum=sum+min(result1,result2);
	}
	printf("%d",sum );
}