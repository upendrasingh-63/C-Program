#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int size, even_size = 0, odd_size = 0,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements in the array:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            even[even_size] = arr[i];
            even_size++;
        }
        else
        {
            odd[odd_size] = arr[i];
            odd_size++;
        }
    }
    printf("\nEven elements in the array: ");
    for(i=0; i<even_size; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements in the array: ");
    for(i=0; i<odd_size; i++)
    {
        printf("%d ", odd[i]);
    }
    
    return 0;
}
