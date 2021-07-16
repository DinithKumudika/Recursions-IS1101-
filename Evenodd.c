#include<stdio.h>
int n1;//variable to store lowerlimit
int n2;//variable to store upperlimit
int i;
int j;
void iseven(int, int);//function to find even numbers
void isodd(int, int);//function to find odd numbers

int main()
{
    printf("Enter the lowerlimit of range-:");
    scanf("%d",&n1);
    printf("Enter the upperlimit of range-:");
    scanf("%d",&n2);
    iseven(n1, n2);

}

void iseven(int n1, int n2)//definition of iseven function
{
    for(i=n1;n1<=n2;n1++)
    {
        printf("%d is an even number\n", n1+1);
        isodd(n1, n2);//indirect recursion
    }
}
void isodd(int n1, int n2)//definition of isodd function
{
    for(j=n2;n1<=n2;n2++)
    {
        printf("%d is an odd number\n", n1-1);
        iseven(n1, n2);//indirect recursion
    }
}