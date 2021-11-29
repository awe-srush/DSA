#include<stdio.h>
#include<stdlib.h>

int getMaxDiff(int diff[], int dsize)
{   // calculating maximum sum sub array in difference array
    int max_diff = diff[0];
    for(int i=1;i<dsize;i++)
    {
        if (diff[i-1] > 0)
        {
            diff[i] = diff[i] + diff[i-1];
        }
        max_diff = (max_diff > diff[i])? max_diff : diff[i]; 
    }
    return max_diff ;
}

int main(){

    int arr[100], size;
    printf("Enter size of array : \n");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index %d in array : \n", i);
        scanf("%d", &arr[i]);
    }

    
    //calculate difference array

    int diff[size-1];
    for (int i=0; i<(size-1); i++)
    {
        diff[i] = arr[i+1] - arr[i];
    }

    printf("diff Array is : \n");
    for (size_t i = 0; i < size - 1; i++)
    {
        printf("%d \n", diff[i]);
    }

    
    int max_diff = getMaxDiff(diff, size-1);

    printf("Max difference is = %d \n", max_diff );
    
return 0;
    
}