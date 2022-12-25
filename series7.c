#include<stdio.h>
int main(){
    int i,num=1,count;
    float sum=0.0,fact;
    printf("enter a number:");
    scanf("%d",&i);
    while(num<=i)
    {
        fact=1;
        for(count=1;count<=num;count++)
        {
            fact=fact*count;
        }
        if(num%2==0)
        {
            sum=sum-fact;
        }
        else{
            sum=sum+fact;
        }
        num++;

    }
    printf("sum of series=%f\n",sum);
return 0;
}