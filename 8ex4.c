#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,reverso=0;
    int digito;

    printf("digite um numero:");
    scanf("%d",&num);


    while(num>0)
    {
        digito=num%10;

        reverso=reverso*10+digito;

        num/=10;
    }
     printf("O reverso do numero e: %d \n", reverso);

    return 0;
 }
