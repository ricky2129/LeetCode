class Solution {
public:
    string removeDuplicates(string s) {
        // int i=0;
        // int j=i+1;
        // int n=s.length();
        // while(j<n){
        //   if(s[i]==s[j]){
        //     s.erase(i,2);
        //     if(i>0){
        //       i--;
        //     }
        //     }
        //   else{
        //     i++;
        //     j++;
        //   }
        // }
        // return s;
        string ans;
        for(int i=0;i<s.length();i++){
          if(ans.length()>0){
            if((ans.length()-1>=0) && ans[ans.length()-1]==s[i]){
            ans.pop_back();
          }
          else{  
            ans.push_back(s[i]);
          }
        }
          else{
            ans.push_back(s[i]);
          }
          
        }
        return ans;
    }
};