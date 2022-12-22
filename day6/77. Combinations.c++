class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        for(int i=0; i<(1<<n); ++i) {
            if(k == __builtin_popcount(i)) {
                vector<int> subans;
                for(int j=0; j<n; ++j) {
                    if(i & (1 << j)) {
                        subans.emplace_back(j + 1);
                    }
                }
                ans.emplace_back(subans);
            }
        }
        return ans;
    }
};
