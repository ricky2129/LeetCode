class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string x="";
        string ans;
        for(int i=0;i<s.length();i++){
             size_t pos=x.find(s[i]);
             if(pos!=std::string::npos){
                x= x.substr(pos+1);
             }
             x=x+s[i];
             if(ans.length()<x.length()){
                 ans=x;
             }}
        return ans.length();
    }
};