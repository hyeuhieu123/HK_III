#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void printArr(int arr[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

void binarySearch(int arr[], int n, int value)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (right - left) / 2;
        if(arr[mid] == value){
            printf("Phan tu %d duoc tim thay tai vi tri: %d.\n", value, mid);
            return;
        }
        if(arr[mid] < value){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    printf("Khong tim thay phan tu %d.\n", value);
}

int main()
{

    int n, value;
    do
    {
        printf("n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang chua duoc sap xep: ");
    printArr(arr, n);
    selectionSort(arr, n);
    printf("Mang da sap xep: ");
    printArr(arr, n);
    printf("Gia tri can tim: ");
    scanf("%d", &value);
    binarySearch(arr, n, value);
    return 0;
}