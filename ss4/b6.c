#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node* next;
}Node;
//ham tao node moi
Node* createNode(int n){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=n;
	newNode->next=NULL;
	return newNode;
}
//them node vao cuoi danh sach
void insertToTail(Node** head,int n){
	Node* newNode=createNode(n);
	if(*head==NULL){
		*head=newNode;
		return;
	}
	Node* tmp=*head;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=newNode;
}
//ham duyet danh sach
void printList(Node** head){
	if(*head==NULL){
		return;
	}
	Node* tmp=*head;
	while(tmp!=NULL){
		printf("%d->",tmp->data);
		tmp=tmp->next;
	}
	printf("NULL");
}
//chen phan tu danh sach
void deleteByPosition(Node** head,int p){
	Node* tmp=*head;
	if(p==0){
	    *head=(*head)->next;
	    free(tmp);
		return;	
	}
    for(int i=0;i<p-1&&tmp!=NULL;i++){
    	tmp=tmp->next;
	}
	if(tmp==NULL){
		printf("Loi");
		return;
	}
	Node* x=tmp->next;
	tmp->next=tmp->next->next;
	free(x);
}
int main(){
	int n,x;
	scanf("%d",&n);
	Node* head=NULL;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
	    insertToTail(&head,x);
	}
	printList(&head);
	printf("\n Nhap vi tri can xoa:");
    scanf("%d",&x);
    deleteByPosition(&head,x);
	printf("\n");
	printList(&head);
}