#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} node;

node *createNode(int data) {
    node *new=NULL;
    new=malloc(sizeof(node));
    if (!new) {
        printf("Memory allocation failed..\n");
        exit(1);
    }
    new->data=data;
    new->link=NULL;
    return new;
}

void display(node *head) {
    node *Node=NULL;
    Node=head;
    if (!Node) {
        printf("The list is empty...");
        return;
    }
    while(Node) {
        printf("%d ", Node->data);
        Node=Node->link;
    }
    printf("\n");
    return;
}

int count(node *head) {
    int counter=0;
    while(head) {
        counter++;
        head=head->link;
    }
    return counter;
}

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

        node *temp=NULL;
        temp=createNode(data);

        if(head==NULL) {
            head=tail=temp;
        }
        else {
            tail->link=temp;
            tail=temp;
        }
    }

    display(head);
    printf("Number of nodes: %d\n", count(head));
    return 0;
}