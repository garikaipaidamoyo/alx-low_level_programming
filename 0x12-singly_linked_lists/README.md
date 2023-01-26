# singly linked lists project
- a singly linked list contains elements of diffrent data types

- A linked list is formed when many such nodes are linked together to form a chain. Each node points to the next node present in the order. The first node is always used as a reference to traverse the list and is called **HEAD**. The last node points to **NULL**.

## Declaring a **Linked list :**

- In C language, a linked list can be implemented using structure and pointers .
~~~~
struct LinkedList{
    int data;
    struct LinkedList *next;
 };
~~~~
