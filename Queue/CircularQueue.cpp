#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* array;
    int front;
    int rear;
    int capacity;
    int size;

public:
    CircularQueue(int _capacity) {
        capacity = _capacity;
        array = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    ~CircularQueue() {
        delete[] array;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        array[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
    }

    int frontValue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return array[front];
    }

    int rearValue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return array[rear];
    }

    int getSize() {
        return size;
    }
};

int main() {
    CircularQueue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Front: " << queue.frontValue() << ", Rear: " << queue.rearValue() << endl;
    cout << "Size: " << queue.getSize() << endl;

    while (!queue.isEmpty()) {
        cout << "Dequeue: " << queue.frontValue() << endl;
        queue.dequeue();
    }

    cout << "Queue is empty: " << (queue.isEmpty() ? "true" : "false") << endl;

    return 0;
}
