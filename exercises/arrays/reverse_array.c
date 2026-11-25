#include <stdio.h>
int main(void)
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 7, i = 0, temp = 0;
    while(i < x / 2)
    {
        temp = arr[i];
        arr[i] = arr[x - 1 - i];
        arr[x - 1 - i] = temp;
        i++;
    }
    i = 0;
    while(i < x) {
        printf("%d ", arr[i]);
        i++;
    }
	printf("\n");
    return 0;
}
