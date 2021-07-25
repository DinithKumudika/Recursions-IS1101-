#include<stdio.h>
int sum(int);//function to find the sum of digits
int num;//variable to store the number
int total=0;//variable to store the sum of digits
int temp;//temporary varaible to store the number

int main()
{
    printf("Enter a number-:");//getting the number from user
    scanf("%d",&num);
    sum(num);
    
    if(total>0)
    {
        printf("sum of digits = %d\n",total);
    }
    else
    {
        printf("sum of digits = %d\n",total*(-1));
    }
    
    
    return 0;
}
int sum(int num)
{
    if(num!=0)//base case
    {
        temp = num;
        total = total + temp%10;
        sum(num/10);//recursive call
    }
}