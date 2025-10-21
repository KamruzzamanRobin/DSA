#include <iostream>
using namespace std;

class CircularQueue {
    int* array;
    int currentSize, capacity;
    int front, rear;

public:
    CircularQueue(int size) {
        capacity = size;
        currentSize = 0;
        array = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int val) {
        if(currentSize == capacity) {
            cout << "Overflow\n";
            return;
        } 

        rear = (rear + 1) % capacity;
        array[rear] = val;
        currentSize++;
    }

    void dequeue() {
        if(empty()) {
            cout << "Underflow\n";
            return;
        }

        front = (front + 1 ) % capacity;
        currentSize--;
    }

    int top() {
        if(empty()) {
            cout << "Empty\n";
            return -1;
        }

        return array[front];
    }

    bool empty() {
        return currentSize == 0;
    }

    void printArray() {
        for(int i = 0; i < capacity; i++) {
            cout << array[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue cq(5);
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cq.enqueue(5);
    cq.dequeue();
    cq.enqueue(6);

    cq.printArray();
    
    return 0;
}