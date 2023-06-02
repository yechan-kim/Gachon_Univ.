#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int data;
    TreeNode *left, *right;
} TreeNode;

//            +
//       *          +
//    1   4   16   25
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, NULL, NULL};
TreeNode n3 = {'*', &n1, &n2};
TreeNode n4 = {16, NULL, NULL};
TreeNode n5 = {25, NULL, NULL};
TreeNode n6 = {'+', &n4, &n5};
TreeNode n7 = {'+', &n3, &n6};
TreeNode *root = &n7;

int exp(TreeNode *root)
{
    if (root == NULL)
        return 0;
    if (root->left == 0 && root->right == 0)
        return root->data;
    int op1 = exp(root->left);
    int op2 = exp(root->right);
    printf("%d %c %d을 계산합니다.\n", op1, root->data, op2);
    switch (root->data)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '/':
        return op1 / op2;
    case '*':
        return op1 * op2;
    }
    return 0;
}

int main(void)
{
   printf("수식의 값은 %d입니다. \n", exp(root));
   return 0;
}