#include<stdio.h>
int main()
{
  int A[10]={1,2,3,4,5,6,7,8,9,10};

  int B[10]={20,21,22,23,24,25,26,27,28,29};

  int C[20];

  int c=0;

  for(int i=0;i<10;i++)
  {
      C[c++]=A[i];
  }
  for(int i=0;i<10;i++)
  {
      C[c++]=B[i];
  }
  for(int i=0;i<c;i++)
  {
      printf("\n C[%d]:%d",i,C[i]);
  }



    return 0;
}
