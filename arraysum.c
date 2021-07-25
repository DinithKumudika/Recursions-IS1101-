#include <stdio.h>
#include <string.h>
#define Max_Size 100

int arr[Max_Size];
int length;//variable to store the array size
int i;
int start=0;
int temp;//variable to store the sum of elements
int sumelements(int arr[],int start, int length);//function to find the sum of elements in the array

int main()
{
    printf("Enter the size of array-:");
    scanf("%d",&length);
    printf("Enter the elements of the array\n");
    for(i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
    }
    temp = sumelements(arr, start, length);   
    printf("Sum of elements in the array = %d\n",temp);   
}
int sumelements(int arr[],int start, int length)//definition of sumelements function
{
   if(length<=start)//base case
   {
       return 0;
   }
   else
   {
       return arr[start] + sumelements(arr,start+1,length);//recursive call
   } 
}