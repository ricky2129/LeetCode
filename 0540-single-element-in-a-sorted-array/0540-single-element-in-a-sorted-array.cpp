class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(s==e){
                return nums[s];//if there is just 1 element then just simply return that

            }
            if(mid%2==0){
                //Even
                if(nums[mid]==nums[mid+1]){
                    //right shift the s pointer
                    s=mid+2;//since we have checked till mid+1 so we now check from mid+2 onwards
                }
                else{
                //left shift the e pointer
                    e=mid;
                }
            }
            else{
                //Odd
                if(nums[mid-1]==nums[mid]){
                    //right shift the s pointer
                    s=mid+1;//here mid+1 was not checked so we check from mid+1 onwards
                }
                else{
                    e=mid-1;// here we didn't do mid as from the inputs we can see that the target elements are on even positons so if mid=odd can never be the target element but mid-1 can be so we change to e=mid-1
                }
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};