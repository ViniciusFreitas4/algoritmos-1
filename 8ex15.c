#include<stdio.h>
int main()
{
   int matriz[5][5]={{1,2,3,1,2},
                     {3,4,5,3,4},
                     {4,3,2,4,3},
                     {2,1,3,2,1},
                     {1,2,3,1,2}};

    int det=1,det2=1,result=0;

    for(int i=0;i<5;i++)
    {

        det*=matriz[i][i];
    }
    for(int i=0;i<5;i++)
    {

        det2*=matriz[i][4-i];

    }
    result=det-det2;


    printf("%d",result);

 return 0;
}
