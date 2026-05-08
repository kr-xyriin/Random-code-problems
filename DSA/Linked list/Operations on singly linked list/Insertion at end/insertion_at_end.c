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

void insert_at_end(node *tail, int data) {
    node *current=new(data);
    tail->next=current;
    tail=current;
    return;
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
    int data;
    printf("\nEnter data to be inserted: ");
    scanf("%d", &data);
    insert_at_end(tail, data);
    /*
    node *head=NULL;
    head=malloc(sizeof(node));
    head->data=45;
    head->next=NULL;

    node *current=NULL;

    current=malloc(sizeof(node));
    current->data=98;
    current->next=NULL;
    head->next=current;

    current=malloc(sizeof(node));
    current->data=3;
    current->next=NULL;
    head->next->next=current;
    display(head);
    */
    display(head);
    return 0;
}

