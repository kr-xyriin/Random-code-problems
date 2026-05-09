#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

void display(node *head) {
    if (!head) {
        printf("The list is empty...\n");
        exit(1);
    }
    while (head) {
        printf("%d ", head->data);
        head=head->next;
    }
    return;
}

node *insert_atEnd(int data, node *current) {
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    current->next=temp;
    return temp;
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    node *head=malloc(sizeof(node));
    head->data=data;
    head->next=NULL;

    node *tail=head;
    for (int i=0; i<n-1; i++) {
        printf("Enter data: ");
        scanf("%d", &data);
        tail=insert_atEnd(data, tail);
    }
    display(head);
    return 0;
}