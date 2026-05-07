#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void counter(struct node *head) {
    int count=0;
    if (head==NULL) {
        printf("The list is empty!!");
        return;
    }
    struct node *ptr=head;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->link;
    }
    printf("Nodes: %d", count);
}

int main() {
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    (*head).data=1;
    (*head).link=NULL;

    struct node *current=NULL;

    current=malloc(sizeof(struct node));
    (*current).data=2;
    (*current).link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;

    counter(head);
    return 0;
}