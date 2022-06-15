#include<bits/stdc++.h>
class Solution {
public:
    
  int widthOfBinaryTree(TreeNode* root) {
      if(!root)return 0;
   int ans=0;
   
queue<pair<TreeNode*,int>>q;
      
q.push({root,0});



    // bottom(root,v);
    while(!q.empty())
    {int size=q.size();
                     
  
           int minn=q.front().second;
      
     int first,last;
                      for(int i=0;i<size;i++){
         TreeNode *curr;
        long long  level=q.front().second-minn;
        curr=q.front().first;
        q.pop();
     
        if(i==0)first=level;
        if(i==size-1)last=level;
        if(curr->left){
       
            q.push({curr->left,(2*level)+1});
        }
        if(curr->right){
         
            
      
            q.push({curr->right,level*2+2});
        }
        
                      }
     ans=max(ans,last-first+1);
    }
      
   
 return ans;
    
    
    }
};
