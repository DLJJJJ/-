class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left=0;
        int right=nums.size();
        int tmp=(right-left)/2;
        if (nums[left] == target)return left;
        while(left<right-1){
            if(nums[tmp]>target){
                right=tmp;
            }
            else if(nums[tmp]==target){
                return tmp;
            }
            else{
                left=tmp;
            }
           tmp = left + (right - left) / 2;
        }
        return -1;
    }
};
