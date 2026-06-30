class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach=0;
        int currentEnd=0;
        int jumps=0;
        
        for(int i=0;i<nums.size()-1;i++){
            maxReach=max(maxReach,i+nums[i]);
                if(i==currentEnd){
                    jumps++;
                    currentEnd=maxReach;
                    
                }
            }
        
        return jumps;
    }
};