#include<stdio.h>
int n1;//variable to store lowerlimit
int n2;//variable to store upperlimit

void iseven(int, int);//function to find even numbers
void isodd(int, int);//function to find odd numbers

int main()
{
    printf("Enter the lowerlimit of range-:");
    scanf("%d",&n1);
    printf("Enter the upperlimit of range-:");
    scanf("%d",&n2);

    iseven(n1, n2);

    return 0;
}

void iseven(int n1, int n2)//definition of iseven function
{
    if (n1<=n2 && n1%2==0)
    {
        printf("%d is an even number\n",n1);
        isodd(n1+1,n2);//indirect recursion
    }       
}

void isodd(int x, int n2)//definition of isodd function
{

    if(x<=n2 && x%2!=0)
    {
        printf("%d is an odd number\n", x);
        iseven(x+1, n2);//indirect recursion
    }
}
