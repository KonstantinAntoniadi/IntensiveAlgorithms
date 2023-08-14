#pragma once

// https://leetcode.com/problems/insertion-sort-list/

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *insertionSortList(ListNode *head) {
    if (!head) {
      return head;
    }

    std::vector<int> temp;

    while (head) {
      temp.push_back(head->val);
      head = head->next;
    }

    for (int i = 0; i < (int)temp.size(); i++) {
      size_t temp_index = i;
      for (int j = i; j >= 0; j--) {
        if (temp[temp_index] < temp[j]) {
          std::swap(temp[temp_index], temp[j]);
          temp_index = j;
        }
      }
    }

    ListNode *res = new ListNode(temp[0]);
    ListNode *head_res = res;
    for (size_t i = 1; i < temp.size(); i++) {
      head_res->next = new ListNode(temp[i]);
      head_res = head_res->next;
    }

    return res;
  }
};
