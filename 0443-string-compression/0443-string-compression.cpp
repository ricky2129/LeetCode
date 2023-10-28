class Solution {
public:

    int compress(vector<char>& chars) {
    
    string s;
    int count=1;
    
    int prev=0;
    if(chars.size()==1){
        return chars.size();
    }
    for(int i=1;i<chars.size();i++){
        if(chars[i]==chars[i-1]){
            count++;
        }
        else{
            s+=chars[i-1];
            
            if(count>1){
                 s+=to_string(count);
            }
            
        count=1;
        prev=i;
        
        }
    }
     s += chars[prev]; // Handle the last character group
    if (count > 1) {
       
                s+=to_string(count);
       
    }
    chars.clear();
    for(int i=0;i<s.length();i++){
        chars.push_back(s[i]);
    }
    return chars.size();
    }
};