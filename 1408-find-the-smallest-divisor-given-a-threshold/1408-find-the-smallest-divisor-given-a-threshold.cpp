class Solution {
public:
int Sum(vector<int>&nums,int mid){
  int s=0;
  for(int i=0;i<nums.size();i++){
    s+=ceil((double)(nums[i]) / (double)(mid));
  }
  return s;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
     int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }

     int s=1;
     int e=maxi;
     int mid=s+(e-s)/2;
     while(s<=e){
       mid=s+(e-s)/2;
       int sum1=Sum(nums,mid);
       if(sum1<=threshold){
         e=mid-1;
       }
       else{
         
         s=mid+1;
        }

     } 
     return s; 
    }
};