#include<stdio.h>
#include<math.h>
int main(){
    int n,i,f=1,j;
    float s=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++){
        f=f*j;
    }
        s=s+(pow(i,i-1)/f);
    }
    printf("sum of series=%f",s);
}
