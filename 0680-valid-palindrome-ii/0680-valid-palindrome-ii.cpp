class Solution {
public:
bool checkPalindrome(string s,int i,int j){
  while(i<=j){
    if(s[i]!=s[j]){
      return false;
    }
    i++;
    j--;
    }
    return true;
  }

    bool validPalindrome(string s) {
    //   string a;
    //   int n=s.length();
    //   for(int i = s.length() - 1; i >= 0; i--)
    // {
    //   	a.push_back(s[i]);
    // }
    //   int i=0; 
      
    //   while(i<n){
    //     if(a[i]!=s[i]){
    //       a.erase(i,1);
    //       s.erase(n-i-1,1);
    //        break;
    //     }
    //     i++;
    //   }
    //     if(s!=a){
    //       return false;
    //     }
    int i=0;
    int j=s.length()-1;
    while(i<=j){
      if(s[i]!=s[j]){
        return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
      }
      else{
        i++;
        j--;
      }
    }
      return true;  
    }
    
};