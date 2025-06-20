class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter = 0;
       int j;
       for (int i= 0; i < nums.size(); ++i )
       if ( nums[i] != j ){
        j = nums[i];
        nums[counter] = nums[i];
        counter +=1;
       }
       
       return counter;}
};