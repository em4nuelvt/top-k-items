#include "load.hpp"
#ifndef HEAP_PRIORITY_QUEUE_HPP
#define HEAP_PRIORITY_QUEUE_HPP
#include <vector>
#include <cstring>
#include <algorithm>

typedef struct {
    char* word;
    int frequency;
} WordFrequency;

typedef struct {
    WordFrequency* heap;
    int size;
    int capacity;
} HeapPriorityQueue;

HeapPriorityQueue* createHeap(int capacity);
void destroyHeap(HeapPriorityQueue* heap);
void insert(HeapPriorityQueue* heap, const char* word, int frequency);
bool shouldInsert(HeapPriorityQueue* heap, int frequency);
void adjustHeap(HeapPriorityQueue* heap, int index);
void printHeap(HeapPriorityQueue* heap);

#endif // HEAP_PRIORITY_QUEUE_H
