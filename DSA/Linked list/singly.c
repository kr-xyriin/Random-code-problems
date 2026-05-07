#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} node;

int main() {
    // Header node
    node *head=NULL;
    head=malloc(sizeof(node));
    head->data=45;
    head->link=NULL;

    node *current=NULL;

    // Second node
    current=malloc(sizeof(node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    // third node
    current=malloc(sizeof(node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;
    
    printf("%d %d %d\n", head->data, head->link->data, head->link->link->data);
    return 0;
}