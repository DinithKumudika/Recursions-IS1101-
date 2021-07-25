#include <stdio.h>
int num1;//variable to store the 1st number
int num2;//varaible to store the 2nd number
int lcm(int, int); //fucntion to find the lcm
int gcd(int, int);//function to find the gcd
int main()
{
    printf("Enter the first number-:");
    scanf("%d", &num1);
    printf("Enter the second number-:");
    scanf("%d", &num2);
    printf("LCM of %d and %d = %d\n", num1,num2, lcm(num1, num2));
    
    return 0;
}

int gcd(int num1, int num2)//function definition of gcd
{
    if (num2 == 0)//base case
    {
        return num1;
    }
    else
    {
        return gcd(num2, num1 % num2);//recursive call
    }
}

int lcm(int num1, int num2)//function definition of lcm
{
    if(num2==0 || num1==0)//base case
    {
        return 0;
    }
    else 
    {
        return (num1 * num2)/gcd(num1, num2);
    }    
}
