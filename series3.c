#include<stdio.h>
int main(){
    int n,i,j=1;
    float s=0.0,f=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++){
        f=f*j;
    }
        s=s+(i/f);
    }
    printf("sum of series=%f",s);
}
