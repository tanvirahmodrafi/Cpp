#include <iostream>
using namespace std;

struct Queue {
    int queueSize;
    int front;
    int rear;
    int occupied;
    int *items;
};

int isFull(struct Queue *queue) {
    return (queue->occupied == queue->queueSize);
}

int isEmpty(struct Queue *queue) {
    return (queue->occupied == 0);
}

struct Queue *createQueue(int size) {
    Queue *ptr = new Queue;
    ptr->queueSize = size;
    ptr->front = 0;
    ptr->rear = -1; // Initializing rear to -1
    ptr->occupied = 0;
    ptr->items = new int[size];
    return ptr;
}

void enQueue(struct Queue *ptr, int val) {
    if (isFull(ptr)) {
        cout << "Queue is full\n";
        return;
    }
    ptr->rear = (ptr->rear + 1) % ptr->queueSize;
    ptr->items[ptr->rear] = val;
    ptr->occupied++;
}

void deQueue(struct Queue *ptr) {
    if (isEmpty(ptr)) {
        cout << "Queue is empty\n";
        return;
    }
    ptr->front = (ptr->front + 1) % ptr->queueSize;
    ptr->occupied--;
}

void top(struct Queue *ptr) {
    if (isEmpty(ptr)) {
        cout << "Queue is empty\n";
        return;
    }
    cout << ptr->items[ptr->front] << endl;
}

int main() {
    Queue *myQueue = createQueue(5);
    enQueue(myQueue, 10);
    enQueue(myQueue, 20);
    enQueue(myQueue, 30);
    top(myQueue); // Output: 10
    deQueue(myQueue);
    top(myQueue); // Output: 20
    enQueue(myQueue, 40);
    enQueue(myQueue, 50);
    enQueue(myQueue, 60); // Output: Queue is full
    return 0;
}
