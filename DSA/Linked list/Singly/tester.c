#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} node;

node* new(int data) {
    node *new=NULL;
    new=malloc(sizeof(node));
    new->data=data;
    new->next=NULL;
    return new;
}

void display(node *);
int count(node *);

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    node *head=NULL;
    node *tail=NULL;
    for(int i=0; i<n; i++) {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        node *current=new(data);
        if (head==NULL) head=tail=current;
        else {
            tail->next=current;
            tail=current;
        }
    }
    printf("\n");
    display(head);
    printf("Total number of nodes: %d", count(head));
    return 0;
}

void display(node *head) {
    if (head==NULL) {
        printf("The list is empty...\n");
        exit(1);
    }
    while (head) {
        printf("%d ", head->data);
        head=head->next;
    }
    printf("\n");
    return;
}

int count(node *head) {
    int counter;
    if (head==NULL) {
        printf("Nodes: 0\n");
        exit(1);
    }
    while (head) {
        counter++;
        head=head->next;
    }
    return counter;
}