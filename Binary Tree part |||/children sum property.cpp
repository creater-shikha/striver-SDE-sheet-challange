
void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    if(root==NULL){
        return ;    }
    int curr=0;
    
    if(root->left)
     curr+=root->left->data;
    if(root->right)
        curr+=root->right->data;
    if(curr>root->data)root->data=curr;
   
    else{
      if(root->left)root->left->data=root->data;
          if(root->right)root->right->data=root->data;    
    }
     changeTree(root->left);
    changeTree(root->right);
      int tot=0;
        if(root->left) tot+=root->left->data;
        if(root->right)tot+=root->right->data;
        if(root->left||root->right)root->data=tot;
}  
