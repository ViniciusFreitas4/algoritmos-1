#include<stdio.h>
int main()
{
    int x,y;
    int resto;

    printf("entre com o valor de x:");

    scanf("%d",&x);

    printf("entre com valor de y:");

    scanf("%d",&y);

    while(y!=0)
    {
        resto=x%y;
        x=y;
        y=resto;
    }
    printf("resultado mdc %d",x);

 return 0;
}
