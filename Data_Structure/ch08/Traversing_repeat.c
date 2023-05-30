#include <stdio.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n4};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

// stack
#define SIZE 100
int top = -1;
TreeNode *stack[SIZE];

void push(TreeNode *t)
{
    if (top < SIZE - 1)
        stack[++top] = t;
}

TreeNode *pop()
{
    TreeNode *t = NULL;
    if (top >= 0)
        t = stack[top--];
    return t;
}

void preorder(TreeNode *root)
{
    while (1)
    {
        if (root)
        {
            printf("%d ", root->data);
            push(root);
            root = root->left;
        }
        else
        {
            root = pop();
            root = root->right;
        }
        if (!root && top == -1)
            break;
    }
}

void inorder(TreeNode *root)
{
    while (1)
    {
        for (; root; root = root->left)
            push(root);
        root = pop();
        if (!root)
            break;
        printf("%d ", root->data);
        root = root->right;
    }
}

void postorder(TreeNode *root)
{
    TreeNode *prev = NULL;
    do
    {
        while (root)
        {
            push(root);
            root = root->left;
        }
        while (!root && top != -1)
        {
            root = stack[top];
            if (root->right == NULL || root->right == prev)
            {
                printf("%d ", root->data);
                pop();
                prev = root;
                root = NULL;
            }
            else
                root = root->right;
        }
    } while (top != -1);
}

int main(void)
{
    printf("전위 순회: ");
    preorder(root);
    printf("\n");

    printf("중위 순회: ");
    inorder(root);
    printf("\n");

    printf("후위 순회: ");
    postorder(root);
    printf("\n");
    return 0;
}
