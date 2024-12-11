#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct{
	int data[100];
	int top;
} Stack;

//khoi tao ngan xep
void initiliaze(Stack* stack){
	stack->top=-1;
}
//kiem tra ngan xep day
bool isFull(Stack* stack){
	return stack->top==99;
}
//kiem tra ngan xep rong
bool isEmpty(Stack* stack){
	return stack->top==-1;
}
//them phan tu vao ngan xep
void push(Stack* stack, int n){
	if(isFull(stack)){
		return;
	}
	stack->data[++stack->top]=n;
}
//xoa phan tu tren cung va in ra phan tu do
int pop(Stack* stack){
	if(isEmpty(stack)){
		return -1;
	}
	return stack->data[stack->top--];
}
//in ra phan tu stack 
void printStack(Stack* stack){
	for(int i=stack->top;i>=0;i--){
		printf("%d ",stack->data[i]);
	}
}

int main(){
	int n,x;
	scanf("%d",&n);
	Stack stack;
	initiliaze(&stack);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		push(&stack,x);
	}
    if(isEmpty(&stack)){
    	printf("ngan xep rong");
	}else{
		printf("ngan xep khong rong");
	}
}