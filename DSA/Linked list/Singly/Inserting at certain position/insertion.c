#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *new(int data) {
    node *temp=malloc(sizeof(node));
    if (!temp) {
        printf("Memory allocation failed!!\n");
        exit(1);
    }
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void display(node *head) {
    printf("\n");
    if (!head) {
        printf("Empty list...\n");
        exit(1);
    }
    while (head) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
    return;
}

void insert_between(int pos, int data, node *head) {
    node *temp=new(data);
    for (int i=1; i<pos-1; i++) {
        head=head->next;
    }
    temp->next=head->next;
    head->next=temp;
}

int main() {
    int n, data;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    node *head=NULL;
    node *tail=NULL;
    node *temp=NULL;
    for (int i=0; i<n; i++) {
        printf("Enter data ");
        scanf("%d", &data);
        temp=new(data);
        if (!head) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
    }
    display(head);
    int pos;
    printf("Enter the position of the new node: ");
    scanf("%d", &pos);
    if (pos>1 && pos<n) {
        printf("Enter data: ");
        scanf("%d", &data);
        insert_between(pos, data, head);
        display(head);
    } else {
        printf("Invalid position size!!\n");
        return 0;
    }
    return 0;
}