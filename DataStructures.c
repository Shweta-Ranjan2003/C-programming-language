#include <stdio.h>
/* 1. Tree:-A tree is another data structure where each node points to other nodes. 
Each node has not one but two pointers to other nodes. All the values to the left of a node are smaller, 
and all the values of nodes to the right are greater, which allows this to be used as a binary search tree.
to search for a number, we’ll start at the root node(mid value), and be able to
 recursively search the left or right subtree.

 the running time for search and insert will be O(logn). But if our tree isn’t balanced,
  it can devolve into a linked list, with running time for search and insert of O(n).
  
2. Trie:- A trie is a tree with arrays as nodes. its different then hash table as its key guaranteed to
be unique. Tries combine structures and pointers together to store data. the data can be searched by a roadmap
for eg:- if we want to map key four-digit years(YYYY) and the values are names of universities
the paths from a central root node to a leaf node would be labeled with year and each node on the path from
root to leaf could have 10 pointers emanating from it(one of each digit)
         Root node (10 blocks)
         0123456789
          ^
          0123456789 (if some other university has 1649 then upto here it will share same node or blocks)
                ^
                0123456789
                   ^
                   0123456789
                         ^
                         0123456789 (HARVARD) here we stored name of university 
                         
3. Hash table :- A hash table is a data structure that allows us to associate keys with values. 
It looks like an array, where we can jump to each location by its index
We can think of each location as labeled with a letter from A through Z, and insert names into each location
If we have multiple names with the same first letter, we can add them with a linked list
the worst case running time for searching a hash table is O(n).
Hash table combines of a hash function(which returns non negative int value called hash code)
and an array capable of storing data of the type we wish to place.
when two pieces of data returns same hash code then Collision occurs and for solving it we use
Linear probing (we try to place data in next consecutive element of array) but there may be a case where
there are too many collision for same hash code and linear probing is resulting in storing data very 
far away from its hash code.
So, for resolving this we use CHAINING (each cell of hash table array is a pointer to the 
head of a linked list, then multiple pieces of data can yield the same hash code and we can store all) 
Through chaining, insertion in a hash table always occurs in O(1)
 since linked lists allow insertion in constant time.

There are even higher-level constructs, abstract data structures, where we use our building blocks of 
arrays, linked lists, trees, hash tables, and tries to solve some other problem.
For example, one abstract data structure is a queue, like a line of people waiting, where 
the first value we put in are the first values that are removed, or first-in-first-out (FIFO).
 To add a value we enqueue it, and to remove a value we dequeue it. We could use an array that we have to grow,
  or we could use a linked list.
Another abstract data structure is a stack, where items most recently added are removed first:
 last-in-first-out (LIFO). In a dining hall, we might take, or pop, the top tray from a stack,
  and clean trays would be added, or pushed, to the top as well.
*/
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;
void print_tree(node *root);
void free_tree(node *root);
int main()
{    
    // Tree of size 0
    node *tree = NULL;
  

    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;
    // Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free_tree(tree);
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    // Print tree
    print_tree(tree);

     // Free tree
     free_tree(tree);

     /*We can also search our tree with an implementation of binary search:
bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else if (number == tree->number)
    {
        return true;
    }
}
     */
    
    return 0;
}

void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}
void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}