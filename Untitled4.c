#include<stdio.h>
int main()
{
  int mat[5][5]= {{10,23,15,10,42},//entrada
                  {50,23,42,15,10},
                  {23,15,35,50,23},
                  {42,50,35,10,42},
                  {35,10,42,23,15}};
   int cont;

    for(int i=0;i<5;i++)
    {
        cont=0;
        for (int j=0;j<5;j++)
        {
            if(mat[i][j]==mat[i][j])
            {
                cont++; //contador
            }
        }

    }

     for(int i=0;i<5;i++)
    {

        for (int j=0;j<5;j++)
        {

            printf("\n%d repetiu %d vez",mat[i][j],cont);//resultado
            break;
        }
    }
    return 0;
}

