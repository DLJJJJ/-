//用双指针的方法，使用一个快指针核一个慢指针，快指针指向新数组所需要的元素。新数组的坐标值应该使用慢指针
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow{0};
        for(int fast{0};fast<nums.size();fast++){
            if(nums[fast]!=val){
                nums[slow]=nums[fast];
                slow++;
            }
        }
        //最后输出不需要++slow，因为前面已经slow++了，说明以及那个大一位了
        return slow;
    }
};
 
// 传统的暴力法
/*class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int len = nums.size();
		for (int i = 0; i < len; i++)
		{
			int flag = 0;
			if (nums[i] == val)
			{
				for (int j = i; j < len && nums[j] == val; j++)
				{
					flag++;
				}
				len -= flag;
				for (int j = i; j < len; j++)
				{
					nums[j] = nums[j + flag];
				}
			}
		}
 
		return len;
	}
};*/
