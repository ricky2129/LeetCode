class Solution {
public:
string reverseString(string substring){
int i=0;
int n=substring.length();
int j=n-1;
while(i<=j){
    swap(substring[i],substring[j]);
    i++;
    j--;
    
}
return substring;
}
    int countSubstrings(string s) {
        int count=0;
        string substring;
        for(int i=0;i<s.length()-1;i++){
            substring=s[i];
            for(int j=i+1;j<s.length();j++){
                substring+=s[j];
                string Reverse=reverseString(substring);
                if(Reverse==substring){
                    count++;
                }

            }

        }
        return s.length()+count;
    }
};