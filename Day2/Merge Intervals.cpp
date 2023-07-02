#include <algorithm>

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &ret)
    {
        if (ret.size() == 1)
            return ret;

        sort(ret.begin(), ret.end());
        vector<vector<int>> ans;
        int mini, maxi;

        for (int i = 0; i < ret.size(); i++)
        {
            mini = ret[i][0], maxi = ret[i][1];
            for (int j = i + 1; j < ret.size(); j++)
            {
                if (maxi >= ret[j][0])
                {
                    mini = min(mini, ret[j][0]);
                    maxi = max(maxi, ret[j][1]);
                    i++;
                }
            }
            ans.push_back({mini, maxi});
        }

        return ans;
    }
};