# Binary Tree

## Properties
* The maximum number of nodes at level ‘l’ of a binary tree is 2^l 
* The Maximum number of nodes in a binary tree of height ‘h’ is 2^h – 1
* In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is Log2(N+1)
* A Binary Tree with L leaves has at least | Log2L? |+ 1 levels 
* In Binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children
* In a k-ary tree where every node has either 0 or k children, Number_of_leaf_nodes = (k - 1)\*Number_of_internal_nodes + 1 is always true

## Types of Binary Trees
1. Full Binary Tree: Every node has 0 or 2 children. All nodes except leaf nodes have two children
2. Complete Binary Tree: All the levels are completely filled except possibly the last level and the last level has all keys as left as possible
3. Perfect Binary Tree: All the internal nodes have two children and all leaf nodes are at the same level
4. Balanced Binary Tree: If the height of the tree is O(Log n) where n is the number of nodes
5. Degenerate (Pathological) tree: Every internal node has one child. Such trees are performance-wise same as linked list

## Operations


