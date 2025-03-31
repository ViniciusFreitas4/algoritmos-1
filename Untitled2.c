#include<stdio.h>
int main()
{
    int vet[10]={103,106,107,108,101,110};//entrada
    int vetB[8]={101,102,103,104,105};


    for(int i=0;i<8;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(vet[i]==vetB[j])
            {
                printf("\n%d e %d matriculados em ambas",vet[i],vetB[j]);//saida do resultado
            }
        }
    }

    return 0;
}
