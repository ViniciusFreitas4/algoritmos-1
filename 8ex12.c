#include<stdio.h>
int main()
{
    int A[10]={2,3,5,6,7,8,9,10,12,15};

    int B[10]={2,4,5,6,11,10,12,15,20,21};


    for(int i=0;i<10;i++)
    {
       for(int j=0;j<10;j++)
       {
           if(A[i]==B[j])
           {
             printf("\n%d se repete", A[i]);
           }
       }
    }
    return 0;
}
