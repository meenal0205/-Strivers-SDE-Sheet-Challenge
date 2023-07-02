class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int one = 0;
        int zero = 0;
        int two = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                one++;
            }
            if (nums[i] == 2)
            {
                two++;
            }
            if (nums[i] == 0)
            {
                zero++;
            }
        }
        int i = 0;
        while (zero--)
        {
            nums[i] = 0;
            i++;
        }
        while (one--)
        {
            nums[i] = 1;
            i++;
        }
        while (two--)
        {
            nums[i] = 2;
            i++;
        }
    }
};