class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // for(int i=0;i<s.length();i++){

        //     if(t.find(s[i])==string::npos){
        //         return false;
        //     }
        //     s[i]='*';
        // }
        // return true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};