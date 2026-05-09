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

node *creatNew(int data) {
    node *new=malloc(sizeof(node));
    new->data=data;
    new->next=NULL;
    return new;
}

void insert_atEnd(node *head, int data) {
    if (!head) {
        printf("Empty list...\n");
        exit(1);
    }
    while(head->next) {
        head=head->next;
    }
    node *new=creatNew(data);
    head->next=new;
}

int main() {
    int n;
    printf("How many nodes? ");
    scanf("%d", &n);
    node *head=NULL;
    node *tail=NULL;
    node *temp=NULL;
    for (int i=0; i<n; i++) {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        temp=creatNew(data);
        if (!head) {
            head=tail=temp;
        }
        else {
            tail->next=temp;
            tail=temp;
        }
    }
    display(head);
    printf("\n");
    printf("How many elements? ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int data;
        printf("Enter data to be inserted: ");
        scanf("%d", &data);
        insert_atEnd(head, data);
    }
    printf("\n");
    display(head);
    return 0;
}