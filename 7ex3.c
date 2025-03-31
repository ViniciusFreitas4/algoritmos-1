#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mat[12][13];
    int maior,i,j;

    for(i=0;i<12;i++)
    {
        for(j=0;j<13;j++)
        {
            mat[i][j] = rand() % 100;
            printf("%d ", mat[i][j]);
        }
         printf("\n");
    }
    for( i=0;i<12;i++)
    {
        maior=mat[i][0];
        for(j=1;j<13;j++)
        {
            if(abs(mat[i][j])>abs(maior))
            {
                maior=mat[i][j];
            }
        }
        for(j=0;j<13;j++)
        {
            mat[i][j]=mat[i][j]/maior;
        }
    }
    printf("\n\nmatriz modificada\n");

    for(i=0;i<12;i++)
    {
        for(j=0;j<13;j++)
        {
            printf("%d", mat[i][j]);

        }
         printf("\n");
    }

    return 0;
}
