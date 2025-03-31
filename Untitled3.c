#include<stdio.h>
int main()
{
    int vet[10]={1,2,3,4,5,6,7,8,9,10};//entrada
    int vet2[10];


    for(int i=0;i<10;i++)
    {


        vet2[i]=vet[i]+vet[i+1];//soma

    }
    for(int i=0;i<9;i++)
    {
        printf("\n%d",vet2[i]);//resultado
    }





    return 0;
}
