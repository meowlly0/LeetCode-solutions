class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter =0;
        for (int num: nums){
           
            if (counter< 2 || num != nums[counter - 2]){
                nums[counter] = num;
                counter +=1;
            }                
            }
               return counter;
}
    };