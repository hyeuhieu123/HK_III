#include <stdio.h>
int main(){
    int n = 6;
    int start = 0;
    int end = n - 1;
    int arr[6] = {1,2,3,4,5,6};
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
}
