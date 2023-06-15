#include<stdio.h>
#include<stdlib.h>

int visited[50];
int top=-1,front=-1,rear=1;

// void push(int node){
//     visited[++top]=node;
// }

// void pop(){
//     top--;
// }


// int** create(int no_nodes){
//     int** matrix=(int**)malloc(no_nodes*sizeof(int*));
//     for(int i=0;i<no_nodes;i++){
//         *(matrix+i)=(int*)malloc(no_nodes*sizeof(int));
//     }
//     printf("\nMatrix created\n");
//     return matrix;
// }

// void create_nodes(int** matrix, int s_node, int d_node){
//     *(*(matrix+s_node)+d_node)=1;
// }

int arr[50][50];

void DFS(int no_nodes,int start){
    visited[start]=1;
    printf("%d  ",start);
    for(int i=0;i<no_nodes;i++){
        if(!visited[i] && arr[start][i]==1){
            DFS(no_nodes,i);
        }
    }
}

int main(){
    int no_nodes;
    printf("Enter number of nodes\n");
    scanf("%d",&no_nodes);
    for(int i=0;i<no_nodes;i++){
        for(int j=0;j<no_nodes;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    DFS(no_nodes,0);
    return 0;
}