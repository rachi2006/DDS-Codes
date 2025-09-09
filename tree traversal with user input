#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void Inorder(node * root){
    if(root){
        Inorder(root -> left);
        cout << root -> data << " ";
        Inorder(root -> right);
    }
}
node * Insert(node * root, int arr[], int i, int n){
    if(i < n){
        node * temp = new node(arr[i]);
        root = temp;
        root -> left = Insert(root -> left, arr, 2*i+1, n);
        root -> right = Insert(root -> right, arr, 2*i+2, n);
    }
    return root;
}
void Postorder(node * root){
    if(root){
        Postorder(root -> left);
        Postorder(root -> right);
        cout << root -> data << " ";
    }
}
void Preorder(node * root){
    if(root){
        cout << root -> data << " ";
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
int main(){
   int n;
   cout<<"enter the size of array:";
   cin>>n;
   int * arr = new int[n];
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   node * root = Insert(nullptr, arr, 0, n);
   cout << "Inorder: ";
Inorder(root);
cout << endl;
 cout << "Postorder: ";
Postorder(root);
cout << endl;
 cout << "Preorderr: ";
Preorder(root);
cout << endl;
}
