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
        printf("Empty list...\n");
        exit(1);
    }
    while(head) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
    return;
}

node *new(int data) {
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void delete_pos(node **head, int pos) {
    if (!*head) {
        printf("Empty list..\n");
        return;
    }
    if (pos==1) {
        node *ptr=(*head)->next;
        free(*head);
        *head=ptr;
        return;
    }
    else if (!(*head)->next) {
        free(*head);
        (*head)=NULL;
        return;
    }
    else {
        node *current=*head;
        for (int i=1; i<pos-1; i++) {
            current=current->next;
        }
        node *ptr=current->next->next;
        free(current->next);
        current->next=ptr;
        return;
    }
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
    int pos;
    printf("Enter the position of the node to be deleted: ");
    scanf("%d", &pos);
    if (pos>0 && pos<=n) {
        delete_pos(&head, pos);
        display(head);
    }
    else {
        printf("Invalid position!!\n");
        exit(1);
    }
    return 0;
}