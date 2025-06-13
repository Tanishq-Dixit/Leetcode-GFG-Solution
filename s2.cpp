class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> num_map;
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement
            
            // Check if the complement exists in the map
            if (num_map.find(complement) != num_map.end()) {
                // If found, return the index of the complement and the current index
                return {num_map[complement], i};
            }
            
            // Otherwise, store the current number and its index in the map
            num_map[nums[i]] = i;
        }
        
        // If no solution is found (though the problem guarantees there is one)
        return {};
    }
};
