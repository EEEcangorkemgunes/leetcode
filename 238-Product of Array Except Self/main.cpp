#include <vector>
#include <map>
#include <iostream>
static const int _ = []()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums)
    {
        int size = nums.size();
        std::vector<int> ans(size);
        ans[0] = 1;
        for (int i = 1; i < size; ++i)
        {
            ans[i] = ans[i - 1] * nums[i - 1];
        }
        for (int i = size - 2; i >= 0; --i)
        {
            ans[i] *= nums[i + 1];
            nums[i] *= nums[i + 1];
        }
        return ans;
    }
};

int main()
{
    return 0;
}