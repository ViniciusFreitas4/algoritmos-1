#include<stdio.h>
int main()
{
    int A[10];
    int menor;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(A[j]<A[j+1])
            {
                menor=A[j];
                A[j]=A[j+1];
                A[j+1]=menor;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%d",A[i]);
    }
    return 0;
}
