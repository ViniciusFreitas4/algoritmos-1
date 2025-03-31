#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,n;
    int dig=0,temp,divisor=1;

    printf("digite um numero inteiro:\n");
    scanf("%d",&num);

    printf("digite a posicao");
    scanf("%d",&n);

    temp=abs(num);
    while(temp>0)
    {
        temp/=10;
        dig++;
    }
    if (n > 0 && n <= dig)
    {
        divisor=1;

        for (int i = 1; i < n; i++)
        {
            divisor *= 10;
        }
        dig=(num/divisor)%10;

        printf("O %d-esimo digito de %d e: %d\n", n, num, dig);
    }
    return 0;
}
