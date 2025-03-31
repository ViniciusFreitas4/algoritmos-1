#include<stdio.h>
int main()
{
    int matriz[5][5]={{1,2,3,4,5},
                      {1,2,3,4,5},
                      {1,2,3,4,5},
                      {1,2,3,4,5},
                      {1,2,3,4,5}};

    int linha=0,coluna=0,diagonal=0,soma=0;

    for(int j=0;j<5;j++)
    {
        linha+=matriz[3][j];
    }
    printf("\n soma das linhas %d",linha);

    for(int i=0;i<5;i++)
    {
        coluna+=matriz[i][2];

    }
    printf("\n soma das colunas %d",coluna);

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j)
            {
                diagonal+=matriz[i][j];
            }
        }
    }
    printf("\nsoma da diagonal: %d",diagonal);

     for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            soma+=matriz[i][j];
        }
    }
     printf("\nsoma da total: %d",soma);

    return 0;
}
