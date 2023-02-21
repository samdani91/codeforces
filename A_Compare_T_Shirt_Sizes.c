#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{

    int t,small,med,large,count_x1,count_x2,small2,med2,large2;
    char s1[51],s2[51];
    scanf("%d",&t);

    while(t--)
    {
        small=0,med=0,large=0,count_x1=0,count_x2=0,small2=0,med2=0,large2=0;
        scanf("%s %s",s1,s2);
        int size1=strlen(s1);
        int size2=strlen(s2);

        if(size1==size2){
            for(int i=0;i<size1;i++){
                if(s1[i]=='S') small++;
                else if(s1[i]=='M') med++;
                else if(s1[i]=='L') large++;

                if(s2[i]=='S') small2++;
                else if(s2[i]=='M') med2++;
                else if(s2[i]=='L') large2++;
            }
            if((small==1&&small2==1)||(med==1&&med2==1)||(large==1&&large2==1)) printf("=\n");
            else if(large==1 && large2==0) printf(">\n");
            else if(large==0 && large2==1) printf("<\n");
            else if(med==1 && med2==0) printf(">\n");
            else if(med==0 && med2==1) printf("<\n");

        }else{
            for(int i=0;i<size1;i++){
                if(s1[i]=='S') small++;
                else if(s1[i]=='M') med++;
                else if(s1[i]=='L') large++;
                else if(s1[i]=='X') count_x1++;
            }
            for(int i=0;i<size2;i++){
                if(s2[i]=='S') small2++;
                else if(s2[i]=='M') med2++;
                else if(s2[i]=='L') large2++;
                else if(s1[i]=='X') count_x2++;
            }
            if(large==1 && large2==0) printf(">\n");
            else if(large==0 && large2==1) printf("<\n");
            else if(med==1 && med2==0) printf(">\n");
            else if(med==0 && med2==1) printf("<\n");
            else if(small==1 && small2==1){
                if(count_x1>count_x2) printf("<\n");
                else printf(">\n");
            }
            else if(med==1 && med2==1){
                if(count_x1>count_x2) printf(">\n");
                else printf("<\n");
            }
            else if(large==1 && large2==1){
                if(count_x1>count_x2) printf(">\n");
                else printf("<\n");
            }

        }
    }

    return 0;
}