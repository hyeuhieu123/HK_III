#include <stdio.h>
int sum(int n,int m){
	if(n>m)return 0;
	return n + sum(n+1,m);
}
int main(){
	int n,m;
printf("n:");
scanf("%d",&n);
printf("m:");
scanf("%d",&m);
printf("%d",sum(n,m));

return 0;
}

