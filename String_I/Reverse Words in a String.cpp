class Solution {
public:
    string reverseWords(string s) {
      
        string p="";
        string ans="";
     int i=0;
        while(i!=s.length()){
            if(s[i]!=' ')p+=s[i];
            else if(s[i]==' '){
             
                if(ans!="")ans=p+" "+ans;
                else 
                    ans=p;
                p="";
            }
            i++;
        }
        if(p!=""){
            if(ans!="")ans=p+" "+ans;
                else 
                    ans=p;
        }
        return ans;
    }
};
