class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if((int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
                if((int(s[j])>=65 && int(s[j])<=90) || (int(s[j])>=97 && int(s[j])<=122)){
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