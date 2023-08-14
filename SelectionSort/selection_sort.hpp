#pragma once

#include <algorithm>
#include <vector>

// https://leetcode.com/problems/sort-an-array/
class Solution {
public:
  size_t FindMinIndex(std::vector<int> &nums, size_t i) {
    size_t min = i;
    for (size_t j = i; j < nums.size(); j++) {
      if (nums[j] < nums[min]) {
        min = j;
      }
    }

    return min;
  }
  vector<int> sortArray(vector<int> &nums) {
    std::vector<int> res = nums;
    for (size_t i = 0; i < res.size(); i++) {
      std::swap(res[i], res[FindMinIndex(res, i)]);
    }

    return res;
  }
};
