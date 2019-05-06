class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            if (umap.find(nums[i]) == umap.end()) //not find
            {
                umap[target - nums[i]] = i;
            }
            else 
            {
                result.push_back(umap[nums[i]]);
                result.push_back(i);
            }
        }
             
        return result;
        
    }
};
