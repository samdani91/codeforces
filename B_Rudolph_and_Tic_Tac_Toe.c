#include<stdio.h>

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){
        char str[3][4];
        for(int i=0;i<3;i++){
            scanf("%s",str[i]);
        }
        if(str[0][0]==str[0][1] && str[0][1]==str[0][2] && str[0][0]!='.'){
                printf("%c\n",str[0][0]);
        }
        else if(str[1][0]==str[1][1] && str[1][1]==str[1][2] && str[1][0]!='.'){
                printf("%c\n",str[1][0]);

        }
        else if(str[2][0]==str[2][1] && str[2][1]==str[2][2] && str[2][0]!='.'){
                printf("%c\n",str[2][0]);
        }
        else if(str[0][0]==str[1][0] && str[1][0]==str[2][0] && str[0][0]!='.'){
                printf("%c\n",str[0][0]);
        }
        else if(str[0][1]==str[1][1] && str[1][1]==str[2][1] && str[0][1]!='.'){
                printf("%c\n",str[0][1]);
        }
        else if(str[0][2]==str[1][2] && str[1][2]==str[2][2] && str[0][2]!='.'){
                printf("%c\n",str[0][2]);
        }
        else if(str[0][0]==str[1][1] && str[1][1]==str[2][2] && str[0][0]!='.'){
                printf("%c\n",str[0][0]);
        }
        else if(str[0][2]==str[1][1] && str[1][1]==str[2][0] && str[0][2]!='.'){
                printf("%c\n",str[0][2]);
        }
        else{
            printf("DRAW\n");
        }
        
    }

    return 0;
}