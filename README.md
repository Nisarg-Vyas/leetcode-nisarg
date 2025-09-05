# LeetCode Solutions — Nisarg Vyas

A topic-wise, incremental repository to track my LeetCode progress in C++.

## Why this repo?
- Keep **both** brute-force and optimized solutions to show learning progress.
- Track what's pending with simple checkboxes.
- Quick revision before contests/interviews.

## Directory layout
```
.github/workflows
Arrays
BFS
BIT
BST
Backtracking
BinarySearch
BinaryTree
BitManipulation
Counting
DFS
DP
Design
DivideAndConquer
Graphs
Greedy
HashTable
Heap
LinkedList
MST
PrefixSum
Queue
Recursion
SegmentTree
ShortestPath
SlidingWindow
Sorting
Stack
Strings
TopologicalSort
Trie
TwoPointers
UnionFind
templates
```

## How I log problems
Add each solved problem here with status:

| Topic | Problem | LeetCode Link | Brute Force | Optimized | Notes |
|---|---|---|:--:|:--:|---|
| Arrays | Two Sum (#1) | https://leetcode.com/problems/two-sum/ | ✅ | ✅ | Hash map one-pass |
| DP | Climbing Stairs (#70) | https://leetcode.com/problems/climbing-stairs/ | ✅ | ✅ | 1D DP |
| Strings | Valid Anagram (#242) | https://leetcode.com/problems/valid-anagram/ | ✅ | ❌ | Need counting/array map |

Tip: use `:white_check_mark:` (✅) and `:x:` (❌).

## Workflow (per problem)
1. Create a new branch (optional): `git checkout -b arrays/two-sum`
2. Add code file under the topic folder, keep **both** versions if possible.
3. Update the table above (README).
4. Commit with a clear message (see below) and push.
5. Open a PR and merge (or push directly to `main`).

### Commit message style
```
feat(arrays): add Two Sum — brute force + optimized
refactor(dp): clean transitions and comments
docs(readme): mark Valid Anagram optimized ✅
```

---

## Quick start
```bash
# after cloning
g++ -std=c++17 Arrays/two_sum.cpp -o bin/two_sum && ./bin/two_sum
```

> Created: 2025-09-03
