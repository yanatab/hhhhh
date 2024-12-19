#include "list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void initializeList(DoublyLinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}
void addToEnd(DoublyLinkedList* list, Publication data) {
    Node* newNode = createNode(data);
    if (list->tail) {
        list->tail->next = newNode;
        newNode->prev = list->tail;
        list->tail = newNode;
    } else {
        list->head = newNode;
        list->tail = newNode;
    }
    list->size++;
}