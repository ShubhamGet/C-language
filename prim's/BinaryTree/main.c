#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    char data;
    struct node *left, *right;
};
 
// A utility function to create a node
struct node* newNode (char data)
{
    struct node* temp =
        (struct node *) malloc( sizeof(struct node));
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
 
// A recursive function to construct BST from post[].
// postIndex is used to keep track of index in post[].
struct node* constructTreeUtil(int post[], int* postIndex,
                         int key, int min, int max, int size)
{
    // Base case
    if (*postIndex < 0)
        return NULL;
 
    struct node* root = NULL;
 
    // If current element of post[] is in range, then
    // only it is part of current subtree
    if (key > min && key < max)
    {
        // Allocate memory for root of this subtree and decrement
        // *postIndex
        root = newNode(key);
        *postIndex = *postIndex - 1;
 
        if (*postIndex >= 0)
        {
 
          // All nodes which are in range {key..max} will go in right
          // subtree, and first such node will be root of right subtree.
          root->right = constructTreeUtil(post, postIndex, post[*postIndex],
                                          key, max, size );
 
          // Construct the subtree under root
          // All nodes which are in range {min .. key} will go in left
          // subtree, and first such node will be root of left subtree.
          root->left = constructTreeUtil(post, postIndex, post[*postIndex],
                                         min, key, size );
        }
    }
    return root;
}
 
// The main function to construct BST from given postorder
// traversal. This function mainly uses constructTreeUtil()
struct node *constructTree (char post[], char size)
{
    char postIndex = size-1;
    return constructTreeUtil(post, &postIndex, post[postIndex],
                             INT_MIN, INT_MAX, size);
}
 
// A utility function to print inorder traversal of a Binary Tree
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}
 
// Driver program to test above functions
int main ()
{
    char post[] = {'A','C','B','E','D'};
    char size = sizeof(post) / sizeof(post[0]);
 
    struct node *root = constructTree(post, size);
 
    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);
 
    return 0;

}
