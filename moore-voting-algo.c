#include<stdio.h>

void main(){
    int arr[100], size;
    printf("Enter size of array : \n");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at index %d in array : \n", i);
        scanf("%d", &arr[i]);
    }

    printf("Array is : ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
    
    
}