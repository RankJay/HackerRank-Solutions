#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,i,j,k,fine=0;
  int d1,d2,m1,m2,y1,y2;
  int ar1[3];
  scanf("%d", &ar1[0]);
  d1=ar1[0];
  scanf("%d", &ar1[1]);
  m1=ar1[1];
  scanf("%d", &ar1[2]);
  y1=ar1[2];
  int ar2[3];
  scanf("%d", &ar2[0]);
  d2=ar2[0];
  scanf("%d", &ar2[1]);
  m2=ar2[1];
  scanf("%d", &ar2[2]);
  y2=ar2[2];

  if((d1<=d2 && m1==m2 && y1==y2) || y1<y2 || (m1<m2 && y1==y2))
  {
      fine=0;
      printf("%d", fine);
  }
  else if(d1>d2 && m1==m2 && y1==y2)
  {
      fine=(d1-d2)*15;
      printf("%d", fine);
  }
  else if(m1>m2 && y1==y2)
  {
      fine=(m1-m2)*500;
      printf("%d", fine);
  }
  else if(y1>y2)
  {
      fine=10000;
      printf("%d", fine);
  }
  return 0;
}
