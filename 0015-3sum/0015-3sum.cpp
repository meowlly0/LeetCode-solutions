class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        if ( size<3){
            return {}; 
        } 
        if (size==3){
            if (nums[0]+nums[1]+ nums[2] == 0){
                return {nums};
            } else{ return {};}
        }

        vector<vector <int>> triplets; 
        sort(nums.begin(), nums.end() );

        for ( int i = 0; i< size -2; ++i){
            if( i>0 && nums[i] == nums[i-1]) continue;
            
            int left = i+1, right = size-1;

                while(left < right){
                    int sum = nums[i] + nums[left] + nums[right];
                    if( sum == 0){
                        // insert items
                        triplets.push_back({nums[i], nums[left], nums[right]});
                        right --;
                        left++;
                        while(left<right && nums[left]==nums[left-1]) left++;

                    }
                    else if (sum > 0){ 
                        right --;
                    }
                    else{
                        left++;
                    }
                }
                

        }
        
    return triplets;
     //vector<vector<int>> (triplets.begin(), triplets.end());
    }
};