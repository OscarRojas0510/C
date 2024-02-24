#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*
    Arreglos
    */
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < (int)sizeof(arr) / 4; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
