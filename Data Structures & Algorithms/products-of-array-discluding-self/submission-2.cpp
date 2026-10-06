class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //1, 1, 2, 8
        //48,24,6,1
        int n = nums.size();
        vector<int> result(n, 1);

        // vector<int> prefix(n, 1);, this could be saved in result
        // vector<int> posfix(n, 1); 

        for(int i = 1; i < n; ++i) {
            result[i] = result[i - 1] * nums[i - 1];
        }
        int posfix = 1;
        for(int i = n - 1; i >= 0; --i) {
            result[i] *= posfix;
            posfix *= nums[i];
        }

        return result;
    }
};
