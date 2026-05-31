#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
} node;

node *new(int data) {
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}

int main() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    node *head=new(data);
    printf("%d", head->data);
    return 0;
}