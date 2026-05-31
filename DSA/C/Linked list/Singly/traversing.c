#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void printer(struct node *head) {
    if (head==NULL) {
        printf("The list is empty!!");
        return;
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL) {
        printf("%d ", ptr->data);
        ptr=ptr->link;
    }
    return;
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

    printer(head);
    return 0;
}