//
// Created by developer on 2019/9/2.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <map>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum_1(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> ret;
        map<int, int> assist;
        if(size < 3)
            return ret;
        sort(nums.begin(), nums.end());
        for(int k=0; k<size-2; )
        {
            int i=k+1, j=size-1;
            while (i<j)
            {
                int sum = nums[k] + nums[i] + nums[j];
                if(sum < 0)
                {
                    while (i<j)
                    {
                        if(nums[i] == nums[i+1])
                            i++;
                        else
                        {
                            i+=1;
                            break;
                        }
                    }
                } else if(sum>0)
                {
                    while (i<j)
                    {
                        if(nums[j] == nums[j-1])
                            j--;
                        else
                        {
                            j-=1;
                            break;
                        }
                    }
                } else{
                    vector<int> candi{nums[k],
                                      nums[i],
                                      nums[j]};
                    ret.push_back(candi);
                    while (i<j)
                    {
                        if(nums[i] == nums[i+1])
                            i++;
                        else
                        {
                            i+=1;
                            break;
                        }
                    }
                }
            }
            while (k<size-2)
            {
                if(nums[k] == nums[k+1])
                    k++;
                else
                {
                    k+=1;
                    break;
                }
            }
        }

        return ret;
    }


    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        assert(size >2);
        sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        int near = abs(sum-target);
        for(int k =0; k<size;k++)
        {
            int i=k+1, j=size-1;
            while (i<j)
            {
                int newsum = nums[k] + nums[i] + nums[j];
                if(abs(target-newsum) < abs(target-sum))
                    sum = newsum;
                if(target > newsum)
                    i++;
                else if(target < newsum)
                    j--;
                else
                    return sum;
            }
        }
        return sum;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ret;
        int size = nums.size();
        if(size <4)
            return ret;
        sort(nums.begin(), nums.end());
        int a = 0, b=0, c=0, d=0;
        int sum = 0;
        while (a < (size - 3))
        {
            b = a+1, c = size-2, d = size - 1;
            while (b < c)
            {
                sum = nums[a] + nums[b] + nums[c] + nums[d];
                if(sum == target)
                {
                    vector<int> candi{nums[a], nums[b], nums[c], nums[d]};
                    ret.push_back(candi);
                    while (nums[c] == nums[--c] && c > b);
                    while (nums[b] == nums[++b] && c > b);
                } else if(sum < target)
                {
                    while (nums[b] == nums[++b] && b < c);
                } else if(sum > target)
                {
                    while (nums[c] == nums[--c] && c > b);
                }
                if(b>=c)
                {
                    if (d>c)
                    {
                        while (nums[d] == nums[--d] && d>(a+2));
                        if(d <= a+2)
                            break;
                        c=d-1;
                        b = a+1;
                    }
                }
            }

            while (nums[a]==nums[++a] && a<(size-3));
        }
        return ret;
    }

};


#endif //LEETCODE_SOLUTION_H
