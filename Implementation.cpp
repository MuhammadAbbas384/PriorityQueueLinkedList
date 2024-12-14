#include<iostream>
#include "Queue.h"
using namespace std;

bool Queue::isQueueEmpty()
{
    if (start == NULL && end == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::removeFromQueue()
{
    if (isQueueEmpty())
    {
        return;
    }
    else
    {
        Node* temp = start;
        start = start->getNextNode();
        delete temp;
    }
}

void Queue::addToQueue(int value, int priority)
{
    if (isQueueEmpty())
    {
        Node* newNode = new Node(value, priority);
        start = newNode;
        end = newNode;
    }
    else
    {
        Node* newNode = new Node(value, priority);
        end->setNextNode(newNode);
        end = newNode;
        arrangeQueue();
    }
}

void Queue::displayQueue()
{
    Node* temp = start;
    cout << "\tValue\t\tPriority" << endl;
    while (temp != NULL)
    {
        cout << "\t" << temp->getValue() << "\t\t" << temp->getPriority() << endl;
        temp = temp->getNextNode();
    }
}

void Queue::swapNodes(Node* current, Node* next)
{
    int tempValue = current->getValue();
    int tempPriority = current->getPriority();
    current->setValue(next->getValue());
    current->setPriority(next->getPriority());
    next->setValue(tempValue);
    next->setPriority(tempPriority);
}

void Queue::arrangeQueue()
{
    Node* temp = start;
    while (temp != NULL && temp->getNextNode() != NULL)
    {
        Node* temp2 = temp->getNextNode();
        while (temp2 != NULL)
        {
            if (temp2->getPriority() < temp->getPriority())
            {
                swapNodes(temp, temp2);
            }
            temp2 = temp2->getNextNode();
        }
        temp = temp->getNextNode();
    }
}
