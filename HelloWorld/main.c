#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct Node{
    uint8_t data[64];
    struct Node* next;
} Node;

Node* appendToList(uint8_t* data, Node* pHead){
    Node * cursor = pHead;
    while (cursor->next !=NULL){
        cursor = cursor->next;
    }
    Node* newNode = (Node*) malloc(sizeof(Node));
    memcpy(newNode->data, data, sizeof(data));
    newNode->next = NULL;
    cursor->next = newNode;
    return pHead;
}

Node* createLinkedList(uint8_t* data){
    Node* newHead = (Node*) malloc(sizeof(Node));
    memcpy(newHead->data, data, sizeof(data));
    newHead->next = NULL;
    return newHead;
}

void freeLinkedList(Node* pHead){
    Node* cursor = pHead;
    Node* nextcursor = NULL;
    while(cursor != NULL){
        nextcursor = cursor->next;
        free(cursor);
        cursor = nextcursor;
    }
}

int main()
{
    uint8_t name[] = "Hannah";
    uint8_t* pName = name;
    printf("\nHello World and %s\n", name);
    strcpy(pName, "Franz");
    printf("New name is now %s\n", pName);
    printf("Size of Node: %d", sizeof(Node));
    return 0;
}