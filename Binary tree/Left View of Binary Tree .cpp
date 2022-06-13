void left(Node *root,int level,vector<int>&v){
    if(root==NULL){
        return ;
    }
    if(v.size()==level){
        v.push_back(root->data);
    }
    left(root->left,level+1,v);
    left(root->right,level+1,v);
    
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   int level=0;
   left(root,level,v);
   return v;
   
   
}
