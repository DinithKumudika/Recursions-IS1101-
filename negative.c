#include<stdio.h>
#define Max_Size 100
int arr[Max_Size];
int i;
int length;//varaible to store the size of the array
int start=0;
int negative(int arr[], int start, int length);//funtion to find the negative numbers in the array
int neg;//variable to store the negative numbers in the array


int main()
{
    printf("Enter the the size of the array-:");
    scanf("%d", &length);
    printf("Eneter the elements of the array\n");
    for(i=0;i<length;++i)
    {
        scanf("%d", &arr[i]);
    }
    negative(arr, start, length);
}

int negative(int arr[], int start, int length)
{
    if(start>=length)
    {
        return 0;
    }
    else
    {
        if(arr[start]<0)
        {
            neg = arr[start];//storing the negative numbers in neg variable
            printf("%d is a negative number\n", neg);
            negative(arr, start+1, length);//recursive call
        }
        else
        {
            negative(arr, start+1, length);//recursive call
        }
    }
}