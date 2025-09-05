/*
Two Sum (#1)
Topic: Arrays, Hash Table
Link: https://leetcode.com/problems/two-sum/

Keep both solutions to show learning progression.
*/

#include <bits/stdc++.h>
using namespace std;

// ----------------------- Brute Force -----------------------
// O(n^2) — try every pair
class SolutionBrute {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = (int)nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }
        return {};
    }
};

// ----------------------- Optimized -------------------------
// O(n) — one-pass hash map
class SolutionOptimized {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> pos;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            if (pos.count(need)) return {pos[need], i};
            pos[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2,7,11,15};
    int target = 9;

    SolutionBrute sb;
    auto a = sb.twoSum(nums, target);
    cout << "Brute: " << (a.size()? to_string(a[0]) + "," + to_string(a[1]) : "no answer") << "\n";

    SolutionOptimized so;
    auto b = so.twoSum(nums, target);
    cout << "Optim: " << (b.size()? to_string(b[0]) + "," + to_string(b[1]) : "no answer") << "\n";
    return 0;
}
