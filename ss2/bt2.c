#include <stdio.h>

int main() {
    int n;
    int x;
    int count =0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);
    }
    printf("nhap x");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("so lan xuat hien %d", count);
    return 0;
}
