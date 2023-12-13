class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size();
        int tmp=(right-left)/2;
        while(left<right){
            if(nums[tmp]>target){
                right=tmp;
            }
            else if(nums[tmp]==target){
                return tmp;
            }
            else{
                left=tmp+1;
            }
           tmp = left + (right - left) / 2;
        }
        return -1;
    }
};
