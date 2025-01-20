#include "problems.hpp"

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
  std::vector<int> ids;
  for (size_t i = 0; i < nums.size(); i++) {
    for (size_t j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        ids.push_back(i);
        ids.push_back(j);
      }
    }
  }
  return ids;
}

bool Solution::isPalindrome(int x) {
  if (x < 0) {
    return false;
  }

  int temp = x;
  int digit = 0;
  long int result = 0;
  while (temp != 0) {
    digit = temp % 10;
    result = result * 10 + x % 10;
    temp /= 10;
  }

  return x == result;
}

int main(int argc, char **argv) {
  Solution solution;
  return 0;
}
