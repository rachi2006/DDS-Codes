#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void Preorder(struct node* root) {
    if (root) {
        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(struct node* root) {
    if (root) {
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}

void Postorder(struct node* root) {
    if (root) {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = createNode(10);
    root->left = createNode(11);
    root->right = createNode(12);
    root->left->left = createNode(13);
    root->left->right = createNode(14);
    root->right->left = createNode(15);
    root->right->right = createNode(16);

    printf("Preorder: ");
    Preorder(root);
    printf("\n");

    printf("Inorder: ");
    Inorder(root);
    printf("\n");

    printf("Postorder: ");
    Postorder(root);
    printf("\n");

    return 0;
}
