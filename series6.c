#include<stdio.h>
int main(){
    int n,i,j=1;
    float s=0.0,f=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++){
        f=f*i;
    }
    if(i%2==0)
    {
        s=s-f;
    }
    else
    s=s+f;
    }
    printf("sum of series=%f",s);
}
