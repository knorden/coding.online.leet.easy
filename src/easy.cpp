#include "easy.hpp"

/*
    PROBLEM: Given an array of integers and a target, return  indices of the 2
            numbers such that they add up to target.
    example: [2, 7, 11, 15], target 9
    expected return: [0,1]

    SOLUTION: Linear iteration
        int sum = 0;
        for (index i in array):
        sum = i;
            for (index j in array):
                if (i = j) continue
                if (sum + j == target):
                    push i, j into results
                    break
        return result
*/
// vector<int> twoSum(vector<int>& nums, int target) {
//   vector<int> result = {0, 0};

//   int sum, arrSize = nums.size();
//   for (int i = 0; i < arrSize; ++i) {
//     int vi = nums[i];
//     for (int j = 0; j < arrSize; ++j) {
//       int vj = nums[j];
//       if (i == j)
//         continue;
//       else if (vi + vj > target)
//         continue;
//       else if (vi + vj == target) {
//         sum = vi + vj;
//         result[0] = i;
//         result[1] = j;
//         break;
//       } else
//         continue;
//     }
//     if (sum == target) break;
//   }
//   return result;
// }

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> solution;
  for (int i = 0; i < nums.size(); ++i) {
    if (solution.count(target - nums[i]) == 1) {
      return {solution[target - nums[i]], i};
    }
    solution[nums[i]] = i;
  }
  return {};
}