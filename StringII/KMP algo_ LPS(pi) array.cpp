bool findPattern(string p, string s)
{ if(p.length()>s.length())return false;
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
            return true;
            break;
        }
    }
    return false;
}
