/*
Template for LeetCode C++ solutions.

Problem: <Name> (#<ID>)
Topic: <Topic>
Link: <URL>

Status:
- Brute Force: [ ] (fill after implementing)
- Optimized:   [ ] (fill after implementing)

Approach Notes:
- Briefly write brute-force idea and complexity.
- Briefly write optimized idea and prerequisites (e.g., HashMap, Binary Search, DP).
*/

#include <bits/stdc++.h>
using namespace std;

// ----------------------- Brute Force -----------------------
class SolutionBrute {
public:
    // Replace signature as required by the problem.
    // Example signature below is for array problems returning indices.
    vector<int> solve(vector<int>& nums, int target) {
        // TODO: implement brute-force
        // Time: O(n^2), Space: O(1)
        return {};
    }
};

// ----------------------- Optimized -------------------------
class SolutionOptimized {
public:
    vector<int> solve(vector<int>& nums, int target) {
        // TODO: implement optimized method when you learn the concept
        // Time: O(n), Space: O(n)  // example
        return {};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Minimal local test harness for quick checks
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    SolutionBrute sb;
    auto ans1 = sb.solve(nums, target);
    cerr << "Brute: [" << (ans1.size()? to_string(ans1[0]) : "_")
         << (ans1.size()>1? ("," + to_string(ans1[1])) : "") << "]\n";

    SolutionOptimized so;
    auto ans2 = so.solve(nums, target);
    cerr << "Optim: [" << (ans2.size()? to_string(ans2[0]) : "_")
         << (ans2.size()>1? ("," + to_string(ans2[1])) : "") << "]\n";
    return 0;
}
