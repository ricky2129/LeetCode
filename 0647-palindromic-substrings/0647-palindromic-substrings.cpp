class Solution {
public:
// // string reverseString(string substring){
// // int i=0;
// // int n=substring.length();
// // int j=n-1;
// // while(i<=j){
// //     swap(substring[i],substring[j]);
// //     i++;
// //     j--;
    
// // }
// return substring;
// }
int expandString(string s,int i,int j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {
        // int count=0;
        // string substring;
        // for(int i=0;i<s.length()-1;i++){
        //     substring=s[i];
        //     for(int j=i+1;j<s.length();j++){
        //         substring+=s[j];
        //         string Reverse=reverseString(substring);
        //         if(Reverse==substring){
        //             count++;
        //         }

        //     }

        // }
        // return s.length()+count;
        int count=0;
        for( int i=0;i<s.length();i++){
            int oddSubstring= expandString(s,i,i);
            count=count+oddSubstring;
            int evenSubstring= expandString(s,i,i+1);
            count=count+evenSubstring;

        }
        return count;
    }
};