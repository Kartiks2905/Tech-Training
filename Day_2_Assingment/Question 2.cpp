// Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum. The function should find all triplets in the array that sum up to the target sum and return a two-dimensional array of all these triplets. The numbers in each triplet should be ordered in ascending order, and the triplets themselves should be ordered in ascending order with respect to the numbers they hold. If no three numbers sum up to the target sum, the function should return an empty array.

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums, int sum)
{
    vector<vector<int>> ans;
    if (nums.size() < 3)
    {
        return ans;
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int start = i + 1;
        int end = nums.size() - 1;
        while (start < end)
        {
            if (nums[i] + nums[start] + nums[end] == sum)
            {
                ans.push_back({nums[i], nums[start], nums[end]});
                int x = nums[start];
                while (start < end && x == nums[start])
                {
                    start++;
                }
                x = nums[end];
                while (end > start && x == nums[end])
                {
                    end--;
                }
            }
            else if (nums[i] + nums[start] + nums[end] < 0)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        while (i < nums.size() - 1 && nums[i + 1] == nums[i])
        {
            i++;
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {10, 1, 0, 24, 0, 0, 2, 18, 4};
    int sum = 25;
    vector<vector<int>> ans = threeSum(nums, sum);

    for (auto it : ans)
    {
        for (auto v : it)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}