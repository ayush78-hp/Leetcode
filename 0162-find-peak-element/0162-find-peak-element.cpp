class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid=left + (right-left)/2;
        while(left<right){
            if(nums[mid]<nums[mid+1]){
                left=mid+1;
            }
            else{
                right=mid;
            }
            mid=left+(right-left)/2;
        }
        return left;
        
    }
};