class Solution {
public:
  
   
    TreeNode* build(vector<int>& postorder,int poststart,int postend,vector<int>& inorder,int instart,int inend,map<int,int>m){
            if(poststart>postend||instart>inend)return NULL;
         TreeNode* root=new TreeNode(postorder[postend]);
        int inroot=m[postorder[postend]];
        int numsleft=inroot-instart;
    root->left= build(postorder,poststart,poststart+numsleft-1,inorder,instart,inroot-1,m);

        root->right= build(postorder,poststart+numsleft,postend-1,inorder,inroot+1,inend,m);
            
        
        
   return root;    
    }
  TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
          TreeNode*root=build(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,m);
        return root;
        
        
      
    }
};
