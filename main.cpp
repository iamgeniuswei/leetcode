#include <iostream>
#include <gtest/gtest.h>
using namespace std;

#include "Solution.h"
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(testSolution, test_threeSum)
{
    Solution solution;
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ret = solution.threeSum_1(nums);
    EXPECT_EQ(ret.size(), 2);
}

TEST(testSolution, test_threeSum2)
{
    Solution solution;
    vector<int> nums{0, 0, 0, 0};
    vector<vector<int>> ret = solution.threeSum_1(nums);
    EXPECT_EQ(ret.size(), 1);
}

TEST(testSolution, test_threeSumClosest)
{
    Solution solution;
    vector<int> nums{-1, 2, 1, -4};
    int ret = solution.threeSumClosest(nums, 1);
    EXPECT_EQ(ret, 2);
}
TEST(testSolution, test_threeSumClosest2)
{
    Solution solution;
    vector<int> nums{1, 1, 1, 0};
    int ret = solution.threeSumClosest(nums, -100);
    EXPECT_EQ(ret, 2);
}

TEST(testSolution, test_threeSumClosest3)
{
    Solution solution;
    vector<int> nums{1,1,-1,-1,3};
    int ret = solution.threeSumClosest(nums, -1);
    EXPECT_EQ(ret, -1);
}

TEST(testSolution, test_threeSumClosest4)
{
    Solution solution;
    vector<int> nums{1,1,-1,-1,3};
    int ret = solution.threeSumClosest(nums, 3);
    EXPECT_EQ(ret, 3);
}

TEST(testSolution, test_threeSumClosest5)
{
    Solution solution;
    vector<int> nums{1,2,4,8,16,32,64,128};
    int ret = solution.threeSumClosest(nums, 82);
    EXPECT_EQ(ret, 82);
}

TEST(testSolution, test_fourSum)
{
    Solution solution;
    vector<int> nums{1, 0, -1, 0, -2, 2};
    vector<vector<int>> ret = solution.fourSum(nums, 0);
    EXPECT_EQ(ret.size() , 3);
}

TEST(testSolution, test_fourSum1)
{
    Solution solution;
    vector<int> nums{-3, -1, 0, 2, 4, 5};
    vector<vector<int>> ret = solution.fourSum(nums, 2);
    EXPECT_EQ(ret.size() , 1);
}


TEST(testSolution, test_fourSum2)
{
    Solution solution;
    vector<int> nums{-1,-5,-5,-3,2,5,0,4};
    vector<vector<int>> ret = solution.fourSum(nums, -7);
    EXPECT_EQ(ret.size() , 2);
}