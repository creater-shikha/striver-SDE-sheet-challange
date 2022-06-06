class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
        string s="";
        int i=0;
        while(i!=strs[0].length() && i!=strs[strs.size()-1].length()){
            if(strs[0][i]==strs[strs.size()-1][i]){
                s+=strs[strs.size()-1][i];
            }
        else{
            break;
        }
        i++;
        }
    return s;
}
};
