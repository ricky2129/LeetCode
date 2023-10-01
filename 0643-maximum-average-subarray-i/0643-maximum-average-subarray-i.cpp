class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int m=INT_MIN;
        int s=0;
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        int i=0;
        int j=k;
        m=s;
        while(j<nums.size()){
            s+=nums[j]-nums[i];
            if(s>=m){
                m=s;
            }
            i++;
            j++;
        }
        return double(m)/double(k);
        
    }
};