#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

node *new(int data) {
    node *newNode=NULL;
    newNode=malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void display(node *head) {
    if (!head) {
        printf("The list is empty...\n");
        exit(1);
    }
    while(head) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
    return;
}

node* insert_at_end(node *tail, int data) {
    node *current=new(data);
    tail->next=current;
    return current;
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    node *head=NULL;
    node *tail=NULL;
    for (int i=0; i<n; i++) {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        node *current=NULL;
        current=new(data);
        if (!head) head=tail=current;
        else {
            tail->next=current;
            tail=current;
        }
    }

    display(head);

    // Insertion
    printf("\n");
    printf("Enter no. of elements to be inserted: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int data;
        printf("Enter data to be inserted: ");
        scanf("%d", &data);
        tail=insert_at_end(tail, data);
    }
    printf("\n");
    display(head);
    return 0;
}

