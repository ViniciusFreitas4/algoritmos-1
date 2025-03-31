#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,NumPrime,reverso=0;
    int digito;

    printf("digite um numero:");
    scanf("%d",&num);

    NumPrime=num;

    num=abs(num);


    while(num>0)
    {
        digito=num%10;

        reverso=reverso*10+digito;

        num/=10;
    }

     if(NumPrime==reverso)
     {
        printf("esse numero e %d palindromo",NumPrime);
     }
     else
     {
         printf("esse numero nao e %d palindromo",NumPrime);
     }

    return 0;
}
