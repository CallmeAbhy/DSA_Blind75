class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> out;
        
        map<vector<int>, int> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int a = nums[i];
            int s = i + 1, e = n - 1;
            while(s<e)
            {
                if(nums[s] + nums[e] == -a)
                {
                    ans[{nums[i], nums[s], nums[e]}]++;
                    s++;
                    e--;
            
                }
                else if(nums[s]+nums[e]>-a)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
        }

        for(auto & it: ans)
        {
            out.push_back(it.first);
        }
        return out;
    }
};