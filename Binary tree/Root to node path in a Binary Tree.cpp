 bool helper(TreeNode* A, int B,vector<int>&v){
     if(!A)return false;
         v.push_back(A->val);
     if(A->val==B){
         return true;
     }
     
   
     
     if(helper(A->left,B,v)||helper(A->right,B,v))return true;
    
     v.pop_back();
     return false;
  
 }
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>v;
    return helper(A,B,v)==true?v:v;
    
}
