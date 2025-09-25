# Queue Implementation in C++

## Tools Used
- C++ Programming Language
- Text Editor or IDE (e.g., Visual Studio Code, Code::Blocks, Dev C++)
- C++ Compiler (e.g., GCC, MinGW)

## Theory

### Overview
A **Queue** is a linear data structure that follows the First In First Out (FIFO) principle. The element added first will be removed first. Queues are widely used in computer science for tasks like scheduling, buffering, and resource management.

### Algorithm
A queue can be implemented using arrays or linked lists. The fundamental operations are:
- **Enqueue:** Add an element to the rear of the queue.
- **Dequeue:** Remove an element from the front of the queue.
- **Front:** Get the front element of the queue.
- **IsEmpty:** Check if the queue is empty.
- **IsFull (for array implementation):** Check if the queue is full.

#### Basic Steps for Array-Based Queue:
1. Initialize `front` and `rear` indices.
2. For Enqueue, check if the queue is full (if `rear` is at the end of the array). If not, add the new element at `rear` and increment `rear`.
3. For Dequeue, check if the queue is empty (if `front` > `rear`). If not, remove the element at `front` and increment `front`.
4. For Front, return the value at `front` index.
5. For IsEmpty, check if `front` > `rear`.
6. For IsFull, check if `rear` is the last index.

#### Flowchart

```
Start
  |
  V
[Initialize queue]
  |
  V
[Choose operation]
  |--------------------------
  |            |            |
Enqueue     Dequeue      Display
  |            |            |
[Check full] [Check empty] [Show all elements]
  |            |            |
[Add/reject] [Remove/reject]|
  |            |            |
  ---------------
        |
       [Continue?]
        |
      Yes/No
        |
      End
```

## Conclusion

This experiment demonstrates the implementation of the Queue data structure in C++. By performing various operations such as enqueue, dequeue, and display, one can understand how queues work internally and how they can be applied to solve real-world problems that require ordered data processing.
