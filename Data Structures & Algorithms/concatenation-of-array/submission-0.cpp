class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int index = 0;
        for (int i = 0; i < 2*(nums.size()); i++) {
            ans[i] = nums[index];
            index++;
            if (index == nums.size()) {
                index = 0; 
            }
        }
        return ans;

    }
};