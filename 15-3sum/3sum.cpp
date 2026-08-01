class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {

            // Skip duplicate first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int st = i + 1;
            int end = nums.size() - 1;

            while (st < end) {

                int sum = nums[i] + nums[st] + nums[end];

                if (sum == 0) {

                    ans.push_back({nums[i], nums[st], nums[end]});

                    st++;
                    end--;

                    // Skip duplicate second element
                    while (st < end && nums[st] == nums[st - 1])
                        st++;

                    // Skip duplicate third element
                    while (st < end && nums[end] == nums[end + 1])
                        end--;
                }
                else if (sum < 0) {
                    st++;
                }
                else {
                    end--;
                }
            }
        }

        return ans;
    }
};