# 🚦 Queue Implementation in C++

## 📘 About  
This experiment demonstrates the creation and manipulation of a static queue using arrays in C++. It covers enqueue, dequeue, and display operations, along with overflow and underflow handling. The goal is to understand linear data structures and memory management using arrays.

---

## 🎯 Aim  
To study the concept of queues in C++ and implement basic operations such as insertion (enqueue), deletion (dequeue), and traversal using a fixed-size array.

---

## 📚 Theory  
A **queue** is a linear data structure that follows the **FIFO (First-In-First-Out)** principle. Elements are inserted at the rear and removed from the front. Queues are widely used in scheduling, buffering, and resource management.

### 🔑 Key Concepts  
- **Queue**: A collection of elements with FIFO behavior.  
- **Enqueue**: Adds an element to the rear of the queue.  
- **Dequeue**: Removes an element from the front of the queue.  
- **Overflow**: Occurs when the queue is full.  
- **Underflow**: Occurs when the queue is empty.  
- **Fixed-size Array**: Used to store queue elements with a predefined capacity.

---

## 📋 Algorithm

### 🧾 1. Enqueue Operation

**Start**  
- Check if `rear == SIZE - 1`: If true, report overflow.  
- If `front == -1`, set `front = 0`.  
- Increment `rear` and insert the value at `arr[rear]`.  
**End**

### 🧾 2. Dequeue Operation

**Start**  
- Check if `front == -1` or `front > rear`: If true, report underflow.  
- Print and remove the element at `arr[front]`.  
- Increment `front`.  
**End**

### 🧾 3. Display Operation

**Start**  
- Check if `front == -1` or `front > rear`: If true, queue is empty.  
- Traverse from `front` to `rear` and print each element.  
**End**

---

## 🚀 Applications of Queues

- Task scheduling in operating systems  
- Print spooling  
- Breadth-first search in graphs  
- Call center systems  
- Data buffering in communication systems

---

## 🧠 Conclusion

This experiment demonstrates:

- 📥 How elements are inserted and removed using FIFO logic  
- 🧮 How overflow and underflow conditions are handled  
- 📤 How queue contents are displayed using array traversal  
- 🧼 Clean modular functions for each operation  
- 🧠 Understanding of static memory allocation and linear data structures

👉 Queues are essential for managing ordered data and are widely used in real-world systems and algorithms.
