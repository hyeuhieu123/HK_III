#include <stdio.h>
int main(){
	int n;
	int k;
	printf("Nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i< n;i++){
		printf("Nhap phan tu %d :", i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap phan tu k can xoa: ");
    scanf("%d", &k);
	int pos = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == k) {
            pos = i;
            break;
        }
    }
    
    if(pos != -1) {
        for(int i = pos; i < n-1; i++) {
            arr[i] = arr[i+1];
        }
        n--; 
        
        printf("Mang sau khi xoa phan tu %d la: ", k);
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", k);
    }
    

    printf("\n");
   
}
