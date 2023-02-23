#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    char str[101];
    scanf("%s",str);
    int count=0;

    for (int i = 0; i < strlen(str); i++)
    {
        /* code */
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            count=1;
            break;
        }
    }

    if (count==1)
    {
        /* code */
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
    

    return 0;
}