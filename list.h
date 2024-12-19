#pragma once
#include "Publication.h"
#include <stddef.h>

typedef struct Node {
    Publication data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    size_t size;
} DoublyLinkedList;