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
    temp->data=data;
    temp->next=NULL;
    return temp;
}

node *circular (int n) {
    int data;
    node *temp=NULL;
    node *head=NULL;
    node *tail=NULL;
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
    tail->next=head;
    return head;
}

void display(node *head, int n) {
    for (int i=0; i<n; i++) {
        printf("%d -> ", head->data);
        head=head->next;
    }
    printf("NULL\n");
    return;
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    node *head=circular(n);
    display(head, n);
    return 0;
}