#include<stdio.h>
int main()
{
    int n,cont=0;

    printf("escreva o numero  e eu direi quantos algarismos tem\n");
    scanf("%d",&n);

    if(n==0)
    {
        printf("o numero 0 tem 1 algarismo");
    }
    else
    {
        if(n<0)
        {
            n=-n;
        }
    }
    while(n>0)
    {
        n=n/10;
        cont++;
    }
     printf("O numero tem %d algarismos.\n", cont);
    return 0;
}
