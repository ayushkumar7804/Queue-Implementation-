//Ayush Yadav
//24070123028

#include <iostream>
using namespace std;

#define SIZE 5 // maximum size of the queue

class Queue {
    int arr[SIZE]; 
    int front, rear; 

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (front == -1) front = 0; 
        arr[++rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << arr[front] << " removed from queue." << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}

/*Output 
Queue elements: 10 20 30
10 removed from queue.
Queue elements: 20 30
2*/
