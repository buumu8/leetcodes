
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        for(int i = 0; i < nums.size(); i++){
            if(hash_map.count(target-nums[i]) > 0){
                return {i, hash_map[target-nums[i]]};
            }
            hash_map[nums[i]] = i;
        }
        return {};
    }
};