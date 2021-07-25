#include<stdio.h>
#define Max_Size 100
int arr[Max_Size];
int start = 0;
int length;//variable to store the array size
int i;
int printarr(int arr[], int length);//function to print the elements of the array


int main()
{
    printf("Enter the size of array-:");
    scanf("%d",&length);
    printf("Enter the elements of array\n");
    for(i=0; i<length;++i)
    {
        scanf("%d", &arr[i]);
    }
    printarr(arr, length);
}
int printarr(int arr[start], int length)//definition of printarr function
{
    if(start>=length)//base case
    {
        return 0;
    }
    else
    {
        printf("element %d = %d",start, arr[start]);
        printarr(arr[start+1], length); //recursive call
    }
}