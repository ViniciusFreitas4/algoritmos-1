#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    int A[10]={1,2,3,4,5,6,7,8,9,10};

    printf("digite o valor de 1 a 10 e mostrarei a posicao:");
    scanf("%d",&x);

    for(int i=0;i<10;i++)
    {
        if(A[i]==x)
        {
            printf("A[%d]",i);
        }
    }

    return 0;
}
