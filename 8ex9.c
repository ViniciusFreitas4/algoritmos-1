#include<stdio.h>
int main()
{
    int A[10];
    int maior;

    printf("entre com numero que organizarei de forma crescente\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(A[j]>A[j+1])
            {
                maior=A[j];
                A[j]=A[j+1];
                A[j+1]=maior;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%d",A[i]);
    }
    return 0;
}
