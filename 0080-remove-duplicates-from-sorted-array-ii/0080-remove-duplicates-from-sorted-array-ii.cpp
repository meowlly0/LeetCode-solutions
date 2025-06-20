class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2 )return nums.size();
        int counter =0;
       for (int n : nums){
        if (counter < 2 || n > nums[counter-2]){
            nums[counter] = n;
            counter+=1;
        }
       } return counter;
}
    };