#include<stdio.h>
int num1;//variable to store lowerlimit
int num2;//variable to store upperlimit
int n;
int a;
int b;

int sumeven(int, int);//function to find sum of even numbers
int sumodd(int, int);//function to find sum of odd numbers

int main()
{
    printf("Enter the lowerlimit of range-:");
    scanf("%d",&num1);
    printf("Enter the upperlimit of range-:");
    scanf("%d",&num2);
    printf("to find the sum of even numbers press '1' ");
    printf("to find the sum of odd numbers press '2'-:");
    scanf("%d",&n);
    if(n=1)
    {
        sumeven(num1, num2);
    }
    else if(n=2)
    {
        sumodd(num1, num2);
    }
    else
    {
        printf("invalid input");
    }

    return 0;   
}
int sumeven(int num1, int num2)
{
    if (num1<=num2 && num1%2==0)
    {
        printf("sum of even numbers\n");
        return sumeven(num1+2, num2); 
    }
    
}
int sumodd( int num1, int num2)
{
    if(num1<=num2 && num1%2==0)
    {
        printf("sum of odd numbers\n");
        return sumodd(num1+2, num2);
    }
    
}



