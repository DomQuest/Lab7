/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        int count = 0;
        
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count = count +1;
            }
            
           
        }
        printf("Number of total swaps: %d \n", count);
    }
}


int main()
{
    int arr[] = {97, 16,  45,  63,  13,  22,  7,  58,  72};
    int n = 9; 
    bubbleSort(arr, n);
    return 0;
}

