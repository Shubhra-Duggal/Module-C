# Module-C

<p align = "center">
<img src= "https://user-images.githubusercontent.com/42912140/131544901-9fcaa55b-1597-4bb3-a374-a6a8b866f6b7.png">
<p>


### Functional Programming
[Functional Programming](/https://www.oreilly.com/library/view/functional-programming-for/9781449312657/ch01.html) is (definition). Functional programming is mostly helpful in creating concurrent programs. It helps to determine the boundaries for the modules to reuse. This is also made code more precise.     
Object oriented programming can be followed with the support of functional programming or functional programming with objects as support. Theses are just tools.    
Duration of a software development cycle is decreasing. Companies are creatng and deploying new code every day. Delivering some values quickly has become more important than understanding the domain. Functional programming helps to keep the code minimally sufficient and flexible to change.    

### C Language

### Header Files in C

## [Array](Array)
A collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. It can be used to store collection of primitive and derived data types.

### Advantages
* Random access of elements using array index
* Use of less line of code as it creates a single array of multiple elements
* Easy access to all the elements
* Traversal through the array becomes easy using a single loop
* Sorting becomes easy as it can be accomplished by writing less line of code

### Disadvantages

* Allows a fixed number of elements to be entered which is decided at the time of declaration
* Unlike a linked list, an array in C is not dynamic
* Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation

## [Linked List](Linked_List)
It is a linear data structure but elements are not stored at a contiguous location. The elements are linked using pointers. A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL. 

### Advantages
* Dynamic size 
* Ease of insertion/deletion

### Disadvantages
* Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation
* Extra memory space for a pointer is required with each element of the list
* Not cache friendly. Array elements are contiguous locations, hence, there is locality of reference, which is not there in case of linked lists

## [Queue](Queue)

## [Stack](Stack)

## [Binary Tree](Binary_Tree)
It is a hierarchical data structures.  The topmost node is called root of the tree. The elements that are directly under an element are called its children. The element directly above something is called its parent. Elements with no children are called leaves. A tree whose elements have at most 2 children is called a binary tree.

### Advantages
* Store information that naturally forms a hierarchy
* Trees (with some ordering- BST) provide moderate access/search (quicker than Linked List and slower than Arrays)
* Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists)
* Trees don’t have an upper limit on number of nodes as nodes are linked using pointers


## [Heap](Heap)
  

## [Graphs](Graphs)
  
---

## Divide and Conquer
  
## Dynamic Programming

