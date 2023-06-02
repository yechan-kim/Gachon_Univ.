#include <stdio.h>
#include <stdlib.h>

// 구조체 정의
typedef struct TreeNode
{
    int key;
    TreeNode *left, *right;
} TreeNode;

// key값을 가지는 노드를 찾는 함수
TreeNode *search(TreeNode *node, int key)
{
    // 만약 노드가 존재 하지 않으면 NULL 반환
    if (node == NULL)
        return NULL;
    
    // key값 발견 시 해당 노드 반환
    if (node->key == key)
        return node;

    // 찾는 key값이 방문한 노드의 키값보다 작으면 왼쪽 자식 노드로 이동
    else if (node->key > key)
        return search(node->left, key);

    // 찾는 key값이 방문한 노드의 키값보다 크면 오른쪽 자식 노드로 이동
    else
        return search(node->right, key);
}

// 새로운 단말노드 생성
TreeNode *new_node(int item)
{
    // 빈 노드 생성
    TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));

    // 빈 노드에 key값 삽입 및 노드 자식노드 좌표 삽입
    temp->key = item;
    temp->left = temp->right = NULL;

    // 생성한 노드 반환
    return temp;
}

// 노드 삽입 함수
TreeNode *insert_node(TreeNode *node, int key)
{
    // 방문한 노드가 빈 노드이면 새 노드 삽입
    if (node == NULL)
        return new_node(key);

    // 방문한 노드의 키값이 삽입하는 노드의 키값보다 크면 왼쪽 자식노드로 이동
    if (node->key > key)
        node->left = insert_node(node->left, key);

    // 방문한 노드의 키값이 삽입하는 노드의 키값보다 작으면 오른쪽 자식노드로 이동
    else if (node->key < key)
        node->right = insert_node(node->right, key);

    // 삽입이 끝난 노드 반환
    return node;
}

// 노드 중 키값이 가장 최소값안 노드(== 단말 노드 중 가장 왼쪽 노드)를 찾는 함수
TreeNode *min_value_node(TreeNode *node)
{
    // 노드 복사
    TreeNode *temp = node;

    // 가장 왼쪽 노드로 이동
    while (temp->left != NULL)
        temp = temp->left;

    // 노드 반환
    return temp;
}

// 이진 탐색 트리와 키가 주어지면 키가 저장된 노드를 삭제하고 새로운 루트 노드를 반환한다.
TreeNode *delete_node(TreeNode *root, int key)
{
    // 방문한 노드가 빈 노드이면, 방문한 노드 반환
    if (root == NULL)
        return root;

    // 방문 노드의 키값이 주어진 키값보다 크면 왼쪽 자식노드로 이동
    else if (key < root->key)
        root->left = delete_node(root->left, key);

    // 방문 노드의 키값이 주어진 키값보다 작으면 오른쪽 자식노드로 이동
    if (key > root->key)
        root->right = delete_node(root->right, key);

    // 주어진 키를 가진 노드를 발견 시 아래 코드를 실행
    else
    {
        // 왼쪽 자식 노드가 빈 노드 이면 다음 코드를 실행
        if (root->left == NULL)
        {
            // 오른쪽 자식노드를 저장
            TreeNode *temp = root->right;
            // 노드 삭제
            free(root);
            // 저장한 노드 반환
            return temp;
        }

        // 오른쪽 자식노드가 빈 노드 이면 다음 코드를 실행
        else if (root->right == NULL)
        {
            // 왼쪽 자식노드를 저장
            TreeNode *temp = root->left;
            // 노드 삭제
            free(root);
            // 저장한 노드 반환
            return temp;
        }

        // 양쪽에 자식노드가 있으면 다음 코드를 실행
        else
        {
            // 오른쪽 자손노드 중 가장 작은 노드(자신과 키값이 최대한 비슷한 노드)를 저장
            TreeNode *temp = min_value_node(root->right);
            // 저장한 노드 이동
            root->key = temp->key;
            root->right = delete_node(root->right, temp->key);
        }
    }
    // 노드 반환
    return root;
}

// 중위 순회
void inorder(TreeNode *root)
{
    // 빈 노드가 아니면 중위 순회 실시
    if (root)
    {
        // 왼쪽 자식노드 방문
        inorder(root->left);
        // 방문한 노드의 키값 출력
        printf("%d ", root->key);
        // 오른쪽 자식 노드 방문
        inorder(root->right);
    }
}

int main(void)
{
    TreeNode *root = NULL;
    TreeNode *tmp = NULL;

    root = insert_node(root, 30);
    root = insert_node(root, 20);
    root = insert_node(root, 10);
    root = insert_node(root, 40);
    root = insert_node(root, 50);
    root = insert_node(root, 60);

    printf("이진 탐색 트리 중위 순회 결과 \n");
    inorder(root);
    printf("\n\n");
    if (search(root, 30) != NULL)
        printf("이진 탐색 트리에서 30을 발견함 \n");
    else
    
        printf("이진 탐색 트리에서 30을 발견못함 \n");
    return 0;
}