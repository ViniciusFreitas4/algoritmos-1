#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int cont;
 int mat[15][5];

 printf("Gerando 10 valores aleatorios:\n\n");

 for (int i=0; i < 15; i++)
 {
    for (int j=0;j<5;j++)
    {
        /* gerando valores aleatórios entre zero e 100 */
         mat[i][j]=rand() % 100;
          printf("%d ", mat[i][j]);
    }
 }
 for(int i=0;i<15;i++)
 {
     for(int j=0;j<5;j++)
     {
         cont=0;
         for(int k=0;k<15;k++)
         {
             for(int l=0;l<5;l++)
             {
                 if(mat[k][l]==mat[i][j])
                 {
                     cont++;
                 }
             }
         }
         if(cont>1)
         {
            printf("O numero %d aparece %d vezes.\n", mat[i][j], cont);
             for(int k=0;k<15;k++)
             {
                 for(int l=0;l<5;l++)
                 {
                     if(mat[k][l]==mat[i][j])
                     {
                         mat[k][l]= -1;
                     }
                 }
             }
         }

     }
 }

 return 0;
}
