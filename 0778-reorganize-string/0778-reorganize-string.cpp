class Solution {
public:
    string reorganizeString(string s) {
        int count[26] = {0};
        int n = s.size();
        for (int i=0; i<n; i++) {
            count[s[i]-'a']++;
        }
        int maxCount = 0, letter;
        for (int i=0; i<26; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i];
                letter = i;
            }
        }
        if (maxCount > (n+1)/2) {
            return "";
        }
        char arr[n];
        int idx = 0;
        while (count[letter] > 0) {
            arr[idx] = 'a' + letter;
            idx += 2;
            count[letter]--;
        }
        for (int i=0; i<26; i++) {
            while (count[i] > 0) {
                if (idx >= n) {
                    idx = 1;
                }
                arr[idx] = 'a' + i;
                idx += 2;
                count[i]--;
            }
        }
        string res;
        for (int i=0; i<n; i++) {
            res += arr[i];
        }
        return res;
    }
};