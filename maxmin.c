#include<stdio.h>
#define Max_Size 100
int arr[Max_Size];
int printmax(int arr[], int start, int length);//function to find the maximum element of the array
int printmin(int arr[], int start, int length);//function to find the minimum element of the array
int i;
int start =1;
int length;//variable to store the array size
int x;
int y;
int maximum=0;
int minimum=0;

int main()
{
    printf("Enter the size of the array-:");
    scanf("%d",&length);
    printf("Enter the elements of the array\n");
    for(i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
    }
    x = printmax(arr, start, length);
    printf("Maximum element of array= %d\n", arr[x]);
    y = printmin(arr, start, length);
    printf("Minimum element of array= %d\n", arr[y]);
}

int printmax(int arr[], int start, int length)//definition of printmax function
{
    if(length==1)//base case
    {
        return 0;
    }
    else
    {
        if(arr[maximum]<arr[start])
        {
            maximum= start;
            printmax(arr,start+1,length);
        }
    }
    return maximum;
}

int printmin(int arr[], int start, int length)//definition of printmin function
{
    if(length==1)//base case
    {
        return 0;
    }
    else
    {
        if(arr[minimum]>arr[start])
        {
            minimum=start;
            printmin(arr,start+1,length);
        }
    }
    return minimum;
}
