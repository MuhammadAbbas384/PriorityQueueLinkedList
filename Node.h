#pragma once
#include<iostream>
class Node
{
private:
    int value;
    int priority;
    Node* nextNode;

public:
    Node()
    {
        value = 0;
        priority = 0;
        nextNode = NULL;
    }
    Node(int value, int priority)
    {
        this->value = value;
        this->priority = priority;
        this->nextNode = NULL;
    }
    void setValue(int value)
    {
        this->value = value;
    }
    void setPriority(int priority)
    {
        this->priority = priority;
    }
    void setNextNode(Node* nextNode)
    {
        this->nextNode = nextNode;
    }
    int getValue()
    {
        return value;
    }
    int getPriority()
    {
        return priority;
    }
    Node* getNextNode()
    {
        return nextNode;
    }
};
