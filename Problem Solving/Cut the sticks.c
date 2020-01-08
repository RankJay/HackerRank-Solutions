#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp,count;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    printf("%d\n",n);
    sort:
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       if(arr[arr_i]>temp)
           temp=arr[arr_i];
    }
    count=0;
    for(int arr_i = 0; arr_i < n; arr_i++){
    if(arr[arr_i]<temp && arr[arr_i]>0)
    temp=arr[arr_i];
    }
         // printf("\t %d\n",temp);
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
    arr[arr_i]-=temp;
         if(arr[arr_i]>0)
             count++;
     }
    if(count!=0)
      printf("%d\n",count);
    if(count>=2)
        goto sort;
     //for(int arr_i = 0; arr_i < n; arr_i++){
       //printf("%d",arr[arr_i]);
    //}
    return 0;
}











































/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int n,i,j,k,sm,dm,count=0;
  scanf("%d", &n);
  int ar1[n];
  for(i=0;i<n;i++)
  {
  scanf("%d", &ar1[i]);    
  }
  sm=ar1[0];
  for(i=0;i<n;i++)
  {
   if(sm>ar1[i])
   {
       sm=ar1[i];
   }   
  }
  dm=ar1[1];
  for(j=0;j<n;j++)
  {
   if(dm<ar1[j])
   {
       dm=ar1[j];
   }   
  }
  while(dm>0)
  {
   dm=dm-sm;
   count=0;
   for(i=0;i<n;i++)
   {
    if(ar1[i]>0)
    {
    ar1[i]=ar1[i]-sm;
    count=count+1;
    }
   }
  printf("%d\n", count);
  }
}*/
