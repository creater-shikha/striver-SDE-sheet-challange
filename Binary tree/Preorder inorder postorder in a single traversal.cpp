void inorder(BinaryTreeNode<int> *root,vector<int>&v){
    if(root==NULL){
        return ;
    }
    inorder(root->left,v);
    v.push_back(root->data);
     inorder(root->right,v);
}
void preorder(BinaryTreeNode<int> *root,vector<int>&v){
    if(root==NULL){
        return ;
    }
        v.push_back(root->data);
   preorder(root->left,v);

   preorder(root->right,v);
}
void postorder(BinaryTreeNode<int> *root,vector<int>&v){
    if(root==NULL){
        return ;
    }
    
postorder(root->left,v);

  postorder(root->right,v);
        v.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>vec;
    vector<int>v1;
       vector<int>v2;
       vector<int>v3;
    inorder(root,v1);
    preorder(root,v2);
    postorder(root,v3);
    vec.push_back(v1);
      vec.push_back(v2);
      vec.push_back(v3);
    return vec;
}
