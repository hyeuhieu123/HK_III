#include <stdio.h>
#include <stdlib.h>

#define MAX 100


typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* adjList[MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void addEdge(int u, int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = adjList[u];
    adjList[u] = newNode;

  
    newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = u;
    newNode->next = adjList[v];
    adjList[v] = newNode;
}


void enqueue(int value) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = value;
}


int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

// Thuat toan BFS
void BFS(int start) {
    for (int i = 0; i < MAX; i++) visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("\nThu tu duyet BFS: ");

    while (front <= rear) {
        int current = dequeue();
        printf("%d ", current);

        Node* temp = adjList[current];
        while (temp) {
            int adjVertex = temp->vertex;
            if (!visited[adjVertex]) {
                enqueue(adjVertex);
                visited[adjVertex] = 1;
            }
            temp = temp->next;
        }
    }
}

int main() {
    int n, edges;


    printf("Nhap so luong dinh cua do thi: ");
    scanf("%d", &n);
    printf("Nhap so luong canh cua do thi: ");
    scanf("%d", &edges);


    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
    }

    printf("\nNhap danh sach cac canh (dinh1, dinh2):\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        printf("Canh %d: ", i + 1);
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }


    int start;
    printf("\nNhap dinh bat dau duyet BFS: ");
    scanf("%d", &start);

    BFS(start);

    return 0;
}
