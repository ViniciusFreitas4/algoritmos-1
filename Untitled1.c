#include<stdio.h>
int main()
{
    int vet[10]={-2,4,-3,7,-1,6,-8,5,10,-4};//entradas
    int neg=0;
    int pos=0;
    for(int i=0;i<10;i++)
    {
        if(vet[i]=-i)//soma negativo
        {
            vet[i]+=vet[i];
            neg=vet[i];
        }



    }
    for(int i=0;i<9;i++)//soma positivo
    {
        if(vet[i]=abs(vet[i]))
        {
         vet[i]+=vet[i];
         pos=vet[i];

        }

    }

//saida dos resultados
    printf("%d",pos);

    printf("\n%d",neg);

    return 0;
}
