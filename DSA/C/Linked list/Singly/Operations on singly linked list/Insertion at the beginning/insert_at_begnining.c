#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

void display(node *head) {
    printf("\n");
    if (!head) {
        printf("Empty list...\n");
        exit(1);
    }
    while(head) {
        printf("%d -> ", head->data);
        head=head->next;
    }
    printf("null\n");
}

node *new(int data) {
    node *newNode=malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

node *insert_atBeginning(node *head, int data) {
    node *temp=new(data);
    temp->next=head;
    return temp;
}

int main() {
    int n, data;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    node *head=NULL;
    node *tail=NULL;
    node *temp=NULL;
    for (int i=0; i<n; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        temp=new(data);
        if (!head) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
    }
    display(head);
    printf("Enter data to be inserted at beginning: ");
    scanf("%d", &data);
    head=insert_atBeginning(head, data);
    display(head);
    return 0;
}