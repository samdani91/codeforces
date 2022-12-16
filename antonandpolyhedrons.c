#include<stdio.h>
#include<string.h>

int main()
{

    int n,sum=0;
    char hedr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",hedr);
        if(!strcmp(hedr,"Tetrahedron")) sum=sum+4;
        else if(!strcmp(hedr,"Cube")) sum=sum+6;
        else if(!strcmp(hedr,"Octahedron")) sum=sum+8;
        else if(!strcmp(hedr,"Dodecahedron")) sum=sum+12;
        else if(!strcmp(hedr,"Icosahedron")) sum=sum+20;
    }
    printf("%d",sum);

    return 0;
}