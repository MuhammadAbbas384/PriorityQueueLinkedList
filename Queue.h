#pragma once
#include<iostream>
#include "Node.h"
class Queue
{
private:
    Node* start;
    Node* end;

public:
    Queue()
    {
        start = NULL;
        end = NULL;
    }
    void addToQueue(int, int);
    void removeFromQueue();
    bool isQueueEmpty();
    void displayQueue();
    void arrangeQueue();
    void swapNodes(Node*, Node*);
};
