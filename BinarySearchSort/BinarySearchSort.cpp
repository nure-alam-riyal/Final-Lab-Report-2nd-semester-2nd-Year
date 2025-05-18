#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *Left;
    Node *Right;
    Node(int val1){
        val=val1;
        Left=NULL;
        Right=NULL;
    }

};
Node *InsertValuse(Node *root,int value){
if(root==NULL)
return new Node(value);
 if(root->val>value){
    if(root->Left==NULL)
     root->Left= new Node(value);
    else{
        root->Left= InsertValuse(root->Left,value);
    }
}
else{
    if(root->Right==NULL)
    root->Right= new Node(value);
    else{
        root->Right= InsertValuse(root->Right,value);
    }
}
return root;
}

void SortOfValues(Node *root){
    if(root!=NULL){
       SortOfValues(root->Left);
       cout<<root->val<<" ";
       SortOfValues(root->Right);
    }
}
int main(){
	Node *root=NULL;
    int n,value;
    cout<<"Enter the number of Values"<<endl;
      cin>>n;
    cout<<"Enter the value"<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        Node *newnode= new Node(value);
        if(root==NULL){
            root=newnode;
        }
        else{
            root=InsertValuse(root,value);
        }
    }
  cout<<"After Sort Valuse"<<endl;
  SortOfValues(root);
    return 0;
}