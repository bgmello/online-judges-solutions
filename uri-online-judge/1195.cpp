#include <bits/stdc++.h>

#define N (int)2e5+5


using namespace std;

struct node{

  int val;
  struct node *left, *right;

};

struct node *newNode(){
  struct node *temp = (struct node*)malloc(sizeof(struct node));
  temp->val = 0;
  temp->left=temp->right=NULL;
  return temp;
}

void insertNode(node *n, node *x){
  if(n->val==x->val)return;
  else if(x->val<n->val){
    if(n->left==NULL)n->left=x;
    else insertNode(n->left, x);
  }
  else{
    if(n->right==NULL)n->right=x;
    else insertNode(n->right, x);
  }
}

void preOrder(node *n){
  if(n==NULL)return;
  cout << " " << n->val;
  preOrder(n->left);
  preOrder(n->right);
}

void inOrder(node *n){
  if(n==NULL)return;
  inOrder(n->left);
  cout << " " << n->val;
  inOrder(n->right);
}

void postOrder(node *n){
  if(n==NULL)return;
  postOrder(n->left);
  postOrder(n->right);
  cout << " " << n->val;
}

int main(){

  int t,s;
  cin >> t;
  s = t;
  while(t--){
    int n;
    cin >> n;
    node *root = newNode();
    cin >> root->val;
    for(int i=1;i<n;i++){
      node *x = newNode();
      cin >> x->val;
      insertNode(root, x);
    }
    cout << "Case " << s-t << ":" << endl;
    cout << "Pre.:";
    preOrder(root);
    cout << endl;
    cout << "In..:";
    inOrder(root);
    cout << endl;
    cout << "Post:";
    postOrder(root);
    cout << endl;
    cout << endl;
  }
  return 0;
}

