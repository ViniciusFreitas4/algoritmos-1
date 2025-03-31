#include<stdio.h>
int main()
{
    int A[10];
    int cont;

    printf("entre com 10 numeros\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0;i<10;i++)
    {
        cont=0;

            for(int j=0;j<10;j++)
            {
                if(A[j]==A[i])
                {
                cont++;
                }
            }

        if (i == 0 || A[i] != A[i-1])
        {
            printf("O numero %d se repete %d vezes)\n", A[i], cont);
        }
    }
    return 0;
}
