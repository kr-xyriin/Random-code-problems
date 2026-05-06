#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} node;

int main() {
    node *head=NULL;
    head=(node*)malloc(sizeof(node));
    head->data=45;
    head->link=NULL;
    printf("%d\n", head->data);
    free(head);
    head=NULL;
    return 0;
}