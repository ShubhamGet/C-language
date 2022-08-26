#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node* newNode (int data)
{
    struct node* temp =
        (struct node *) malloc( sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* constructTreeUtil(int post[], int* postIndex,
                         int key, int min, int max, int size)
{
    if (*postIndex < 0)
        return NULL;
    struct node* root = NULL;
    if (key > min && key < max)
    {
        root = newNode(key);
        *postIndex = *postIndex - 1;
        if (*postIndex >= 0)
        {
          root->right = constructTreeUtil(post, postIndex, post[*postIndex],
                                          key, max, size );
          root->left = constructTreeUtil(post, postIndex, post[*postIndex],
                                         min, key, size );
        }
    }
    return root;
}
struct node *constructTree (int post[], int size)
{
    int postIndex = size-1;
    return constructTreeUtil(post, &postIndex, post[postIndex],
                             INT_MIN, INT_MAX, size);
}
void printInorder (struct node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}
int main ()
{
    int post[] = {3, 2, 5, 50, 9};
    int size = sizeof(post) / sizeof(post[0]);
    struct node *root = constructTree(post, size);
    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);
    printf("\n");
    return 0;
}

