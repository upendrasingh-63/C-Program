#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int size, even_size = 0, odd_size = 0,i,j;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements in the array:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) // Even element
        {
            even[even_size] = arr[i];
            even_size++;
        }
        else // Odd element
        {
            odd[odd_size] = arr[i];
            odd_size++;
        }
    }
    
    // Sort even elements in ascending order
    for(i=0; i<even_size-1; i++)
    {
		for(j=i+1; j<even_size; j++)
        {
            if(even[i] > even[j])
            {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }
    
    // Sort odd elements in ascending order
    for(i=0; i<odd_size-1; i++)
    {
        for(j=i+1; j<odd_size; j++)
        {
            if(odd[i] > odd[j])
            {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
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
