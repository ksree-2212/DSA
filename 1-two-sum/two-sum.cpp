class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mp;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            int needed=target-current;

            if(mp.find(needed)!=mp.end()){
                return {mp[needed],i};
            }
            mp[current]=i;
        }

        return {};
    }
};