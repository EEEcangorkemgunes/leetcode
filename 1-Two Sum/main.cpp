#include <vector>
#include <map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::vector<int> solution;
        std::vector<int>::size_type size = nums.size();
        std::map<int, int> numsMap;
        for (int i = 0; i < size; ++i)
        {

            std::map<int, int>::iterator it = numsMap.find(nums[i]);
            if (it != numsMap.end())
            {
                solution.push_back(i);
                solution.push_back(it->second);
                return solution;
            }
            else
            {
                numsMap.insert(std::pair<int, int>(target - nums[i], i));
            }
        }
        return solution;
    }
};
int main()
{
    return 0;
}