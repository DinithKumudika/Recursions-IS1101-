#include <stdio.h>
int num;//variable to store the number given by user
int temp;//variable to store the return value of fact function
int fact(int);//function to calculate the factorial of given number

int main()
{
    printf("Enter the number-:");//getting the user input
    scanf("%d", &num);
    temp = fact(num);
    printf("factorial of %d is = %d\n", num, temp);
}

int fact(int num)//definition of fact function
{
    if(num>=1)//base case
    {
        return num * fact(num - 1);//recursive call
    }
    else
    {
        return 0;
    }
}