class Solution {
public:
    string reverseWords(string s) {
        vector<string>x;
        int i = 0, j = s.size() - 1;
        while (i <= j && s[i] == ' ') i++;
        while (j >= i && s[j] == ' ') j--;
        s = s.substr(i, j - i + 1);
        stringstream ss(s);
        string word;
        while(ss>>word){
            x.push_back(word);
        } 
        reverse(x.begin(),x.end());
        string res="";
        for(int i=0;i<x.size();i++){
            res=res+x[i]+" ";
        }
        res.pop_back();
        return res;
    }
};