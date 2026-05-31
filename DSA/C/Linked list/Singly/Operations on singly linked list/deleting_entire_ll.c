#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void display(node *head) {
    if (!head) {
        printf("Empty list..\n");
        exit(1);
    }
    while(head) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
    return;
}

node *new(int data)  {
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void delete(node **head) {
    node *ptr=*head;
    while (ptr) {
        *head=ptr->next;
        free(ptr);
        ptr=*head;
    }
    return;
}

int main() {
    int n, data;
    printf("Number of nodes: ");
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
    delete(&head);
    printf("\n");
    display(head);
    return 0;
}