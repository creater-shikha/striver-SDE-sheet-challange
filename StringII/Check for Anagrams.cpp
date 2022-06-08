class Solution {
public:
    
    bool isAnagram(string s, string t) {
   int c[256]={0};
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            c[s[i]]++;
            c[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(c[i]!=0)return false;
        }
    return true;
    }
};
