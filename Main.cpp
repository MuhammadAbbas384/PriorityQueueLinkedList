#include<iostream>
#include<conio.h>
#include "Queue.h"
using namespace std;

int main()
{
    Queue Q;
    Q.addToQueue(5, 2);
    Q.addToQueue(8, 1);
    Q.addToQueue(16, 3);
    Q.addToQueue(15, 2);
    Q.addToQueue(18, 4);
    Q.displayQueue();
    Q.addToQueue(28, 7);
    Q.displayQueue();
    Q.addToQueue(28, 5);
    Q.displayQueue();
    Q.addToQueue(28, -1);
    Q.displayQueue();

    getch();
    return 0;
}
