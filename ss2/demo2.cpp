#include <stdio.h>
#include <stdlib.h>
void inser
main(){
//	Mang dong

	int n;
	int *pArr = NULL;
	scanf("%d", &n);
//	Cap phat bo nho dong
	pArr = (int*) malloc(n * sizeof(int));
	scanf("%d", &pArr[0]);
	printf("%d\n", pArr[0]);
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", pArr + i); 
	}
	for(int i = 0; i < n; i++){
		printf("arr[%d] = %d\n", i, *pArr + i);
	}
	return 0;
}
