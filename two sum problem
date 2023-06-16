class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int idx  = nums[i];
            int remaining = target - idx;
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining], i};
            }
            mp[idx] = i;
    }
      return{-1,-1};
    }
};
