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

        set<vector <int>> triplets; 
        sort(nums.begin(), nums.end() );

        for ( int i = 0; i< size -2; ++i){
            if( i>0 && nums[i] == nums[i-1]) continue;
            
            int left = i+1, right = size-1;

                while(left < right){
                    int sum = nums[i] + nums[left] + nums[right];
                    if( sum == 0){
                        // insert items
                        triplets.insert ({nums[i], nums[left], nums[right]});
                        right --;
                        left++;
                    }
                    else if (sum > 0){ 
                        right --;
                    }
                    else{
                        left++;
                    }
                }
                

        }
        
    return vector<vector<int>> (triplets.begin(), triplets.end());
    }
};