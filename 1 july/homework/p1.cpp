class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int i;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            v.insert(v.begin()+index[i],nums[i]);
        }
        return v;
    }
};