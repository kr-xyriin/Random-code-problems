#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} node;

node *new(int data) {
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

void insert(node **head, int data, int pos, int max) {
    if (!head) {
        printf("Empty list..\n");
        exit(1);
    }
    node *temp=new(data);
    if (pos==1) {
        temp->next=(*head);
        (*head)->prev=temp;
        (*head)=temp;
        return;
    } else {
        node *ptr=*head;
        for (int i=1; i<pos-1; i++) {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next->prev=temp;
        ptr->next=temp;
        temp->prev=ptr;
        return;
    }
}

void display(node *head) {
    if (!head) {
        printf("Empty list...\n");
        exit(0);
    }
    while(head) {
        printf("%d -> ", head->data);
        head=head->next;
    }
    printf("NULL\n");
    return;
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
            temp->prev=tail;
            tail=temp;
        }
    }
    display(head);
    printf("\n");
    int pos;
    printf("Enter the position of the new node: ");
    scanf("%d", &pos);
    if (pos>0 && pos<=n) {
        printf("Enter data: ");
        scanf("%d", &data);
        insert(&head, data, pos, n);
        display(head);
    } else {
        printf("Invalid position of the node!!\n");
        exit(1);
    }
    return 0;
}