class Solution {
public:
    int base=13;
    
    int repeatedStringMatch(string a, string b) {
        string source=a;
         int count=1;
        while(source.size()<b.size()){
            count++;
            source+=a;}
   
    if(rabinkarp(source, b)!=-1)return count;
    if(rabinkarp(source+a, b)!=-1)return count+1;
    return -1;
    
        
    }
int rabinkarp(string a,string b){
    int n=a.length();
    int m=b.length();
    int d=256;
    int h=1;
    for(int i=0;i<m;i++){
        h=(h*d)%base;
    }
    int targetcode=0;
    for(int i=0;i<m;i++){
        targetcode=(targetcode*d+b[i])%base;
    }
    int hashcode=0;
    for(int i=0;i<n;i++){
       hashcode=(hashcode*d+a[i])%base;
        if(i<m-1)continue;
        if(i>=m){
            hashcode=(hashcode-a[i-m]*h)%base;
        }
        if(hashcode<0)
            hashcode+=base;
        if(hashcode==targetcode){
            if(a.substr(i-m+1,m)==b){
                // cout<<a.substr(i,m)<<" ";
                return i-m+1;
            }
        }
    }
    return -1;
}
};
