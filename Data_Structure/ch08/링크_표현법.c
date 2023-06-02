#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
} TreeNode;

//      n1
//   / |
//  n2  n3

void print_Node(TreeNode* n);

int main(void)
{
    TreeNode *n1, *n2, *n3;
    n1 = (TreeNode *)malloc(sizeof(TreeNode));
    n2 = (TreeNode *)malloc(sizeof(TreeNode));
    n3 = (TreeNode *)malloc(sizeof(TreeNode));

    n1->data = 10; // 첫 번째 노드를 설정한다.
    n1->left = n2;
    n1->right = n3;

    n2->data = 20; // 두 번째 노드를 설정한다.
    n2->left = NULL;
    n2->right = NULL;

    n3->data = 30; // 세 번째 노드를 설정한다.
    n3->left = NULL;
    n3->right = NULL;

    print_Node(n1);
    print_Node(n2);
    print_Node(n3);
    free(n1);
    free(n2);
    free(n3);
    return 0;
}

void print_Node(TreeNode* n)
{
    if(n->left==NULL)
        printf("NULL <- ");
    else
        printf("%4d <- ", n->left->data);
    printf("%d", n->data);
    if(n->right==NULL)
        printf(" -> NULL\n");
    else
        printf(" -> %d\n", n->right->data);
}
