#include<stdio.h>

int main()
{
    int i , j , sa1, sa2; 
    int ar1[3];
    for(i=0;i<3;i++)
    {
    scanf("%d", &ar1[i]);
    }
    int ar2[3];
      for(j=0;j<3;j++)
    {
    scanf("%d", &ar2[j]);
    }
    sa1 =0, sa2 = 0;
    if(ar1[0]==ar2[0])
    {
        sa1=sa1;
       // sa1=sa1;
        sa2=sa2;
       // sa2=sa2;
    }
    else 
    {
    if(ar1[0] > ar2[0])
    {
       // sa1=0;
        sa1=sa1+1;
        
    }
    else 
    {
       // sa2=0;
        sa2=sa2+1;
    }
    }
     if(ar1[1]==ar2[1])
    {
        sa1=sa1;
        sa2=sa2;
    }
    else  
    {
    if(ar1[1] > ar2[1])
    {
        
        sa1=sa1+1;
        
    }
    else 
    {
        
        sa2=sa2+1;
    }
    }
    if(ar1[2]==ar2[2])
    {
        sa1=sa1;
        sa2=sa2;
    }
    else  
    {
    if(ar1[2] > ar2[2])
    {
        
        sa1=sa1+1;
    }
    else 
    {
        
        sa2=sa2+1;
    }
    }
    printf("%d %d", sa1,sa2);
    return 0;
}


