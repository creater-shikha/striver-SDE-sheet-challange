#include<bits/stdc++.h>

void left(TreeNode<int>*root,vector<int>&v){
 TreeNode<int>* curr=root->left;
  while(curr){
      if(!(curr->left==NULL&&curr->right==NULL))
      v.push_back(curr->data);
    if(curr->left)
       curr=curr->left;
    else{
       curr=curr->right;
    }
         }
}
void leaf(TreeNode<int>*root,vector<int>&v){
   if(root->left==NULL&&root->right==NULL){v.push_back(root->data);
                                           return ;}
    if(root->left)
    leaf(root->left,v); 
    if(root->right)
    leaf(root->right,v);      
   }
void right(TreeNode<int>*root,vector<int>&v){
    vector<int>temp;
     TreeNode<int>* curr=root->right;
     
  while(curr){
      if(!(curr->left==NULL&&curr->right==NULL))
      temp.push_back(curr->data);
    if(curr->right)
        curr=curr->right;
    else{
        curr=curr->left;
    }
  }
   
  reverse(temp.begin(),temp.end());
  for(auto x:temp)v.push_back(x);
    
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>v;
  
    if(!root)return v;
    if(!(root->left==NULL&&root->right==NULL))v.push_back(root->data);
  
    left(root,v);
    leaf(root,v);
    right(root,v);

   
    return v;
}
