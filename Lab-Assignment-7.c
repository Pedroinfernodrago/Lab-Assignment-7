#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// Afunction to implement bubble sort
// Afunction to implement bubble sort
void bubblesort(int arr[], int n)
{
    printf("\nUsing Bubble sort\n\n");
    
     int i, j, temp, count=0;
     for (i = 0; i < n-1; i++)
     {
         
         count = 0;
         for (j = 0; j < n-i-1; j++)
         {
             if(arr[j] > arr[j+1])
             {//then swap
             swap(&arr[j], &arr[j+1]);
             count++;
             }
             
         }
         printf("pass #%d: %d\n", i+1, count );
     }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

//Driver program to test above functions
int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    
    int n = 9; //size of the array
    
    //printf("Array before sorting: \n");
    //printArray(arr, n);
    
    bubblesort(arr, n);
    //printf("Sorted arrayL \n");
    //printArray(arr, n);
    return 0;
}