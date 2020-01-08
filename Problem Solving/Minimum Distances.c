#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n,i,a[100000],j,m=0,k[10],max=0,flag=0;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k[m]=abs(i-j);
                m=m+1;
            }
        }
        
    }
  //  printf("%d",m);
  max=k[0];
    for(i=0;i<m;i++){
      
        if(k[i]<=max)
        {
            max=k[i];
            flag=1;
        }
        
    }
    if(flag==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",max);
    } 
    return 0;

}
