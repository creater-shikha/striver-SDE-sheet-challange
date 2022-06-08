int zAlgorithm(string s, string p, int n, int m)
{int ans=0;
 if(p.length()>s.length())return false;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==p[j]){
            j++;
        }
        else{
                i=i-j;
            j=0;
        
        }
        if(j==p.length()){
           
           ans++;
        }
    }
    return ans;
}
