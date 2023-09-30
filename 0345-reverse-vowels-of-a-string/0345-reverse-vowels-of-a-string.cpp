class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        string vowel="aeiouAEIOU";
        while(i<=j){
            if(vowel.find(s[i])!=std::string::npos){
                if(vowel.find(s[j])!=std::string::npos){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
    return s;
    }
};