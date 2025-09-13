#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = nullptr;
    }
};

node * insert(node * root, int key){
    if(root == nullptr){
        return new node(key);
}
else if(key <  root-> data){
    root-> left = insert(root -> left, key);
 }
  else if(key > root -> data){
    root -> right = insert(root -> right, key);
 }
  
    return root;
  
}
void Preorder(node * root){
    if(root){
        cout << root -> data << " ";
        Preorder(root -> left);
        Preorder(root -> right);
    }
}
void Inorder(node * root){
    if(root){
        Inorder(root -> left);
        cout << root -> data << " ";
        Inorder(root -> right);
    }
}
void Postorder(node * root){
    if(root){
        Postorder(root -> left);
        Postorder(root -> right);
        cout << root -> data << " ";
    }
}
int search(node * root, int val){
    if(root == nullptr){
        return 0;
    }
   else if(val == root -> data){
        return 1;
    }
    else if(val < root -> data){
      return  search(root -> left, val);
    }
    else{
      return  search(root -> right, val);
    }
}

int main(){
   int n;
   cout << "Enter the total no of value:";
   cin>>n;
   int * arr = new int [n];
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   node * root = nullptr;
   for(int i = 0; i< n; i++){
       root = insert(root, arr[i]);
   }
    cout << "Preorder: ";
    Preorder(root);
    cout << endl;
    cout << "Inorder: ";
    Inorder(root);
    cout << endl;
    cout << "Postorder: ";
    Postorder(root);
    cout << endl;
    int ans = search(root, 3);
  if(ans == 1){
      cout << "found" << endl;
  }
  else{
      cout <<"not found";
  }
}
