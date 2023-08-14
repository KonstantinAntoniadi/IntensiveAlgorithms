#pragma once

#include <vector>

// https://leetcode.com/problems/sort-an-array/
class Solution {
public:
  std::vector<int> sortArray(std::vector<int> &nums) {
    std::vector<int> res = nums;
    for (size_t i = 0; i < res.size() - 1; i++) {
      for (size_t j = i + 1; j < res.size(); j++) {
        if (res[i] > res[j]) {
          std::swap(res[i], res[j]);
        }
      }
    }

    return res;
  }
};