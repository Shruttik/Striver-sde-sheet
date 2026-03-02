# Striver SDE Sheet - Shruti Kukreti

🎯 Goal: Finish before May  
💼 Target: 10+ LPA  
📅 Started: March 2026  

---

# 01️⃣ Arrays

---

## 1️⃣ Two Sum  01 march

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- First understood brute force using nested loops.
- Optimized using single-pass HashMap.
- For each element, checked if complement (target - nums[i]) exists before inserting current element.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Complement search using HashMap (Single-pass hashing)

### 🔹 Mistakes Made:
- Incorrect usage of `mp.find()`
- Initially used two-pass approach
- Did not think about self-matching case

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 2️⃣ Maximum Subarray (Kadane’s Algorithm) 01 march

### Topic:
Array

### Difficulty:
Medium

### 🔹 Approach:
- Wrote brute force to check all possible subarrays.
- Observed that if running sum becomes negative, it reduces future sums.
- Used Kadane’s Algorithm:
  - Maintained running sum.
  - Updated global maximum at each step.
  - Reset running sum when it became negative.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Running prefix sum  
Discard negative prefix  
Greedy + Dynamic Programming thinking  

### 🔹 Mistakes Made:
- Incorrect brute force implementation initially
- Did not reset sum for each starting index
- Incorrect max initialization in early attempt

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

---

## 3️⃣ Move Zeroes 01 march

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- Used two-pointer technique.
- `fast` scans the array.
- `slow` tracks position for next non-zero element.
- Swapped when non-zero encountered.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Two-pointer technique
In-place stable compaction

### 🔹 Mistakes Made:
- Initially used extra loop variable unnecessarily.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 4️⃣ Majority Element 02 March

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- First thought of using HashMap to count frequencies.
- Observed that majority element appears more than n/2 times.
- Used Boyer–Moore Voting Algorithm:
  - Maintain candidate and count.
  - If count becomes 0, update candidate.
  - Increment count if same element, decrement otherwise.
- Final candidate is the majority element (given guarantee).

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Boyer–Moore Voting Algorithm  
Cancellation logic (majority survives pair elimination)

### 🔹 Mistakes Made:
- Initially forgot to return candidate.
- Forgot to define `n = nums.size()`.
- Needed deeper understanding of cancellation logic.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

# 📊 Progress Tracker

| Topic   | Problems Solved |
|----------|-----------------|
| Arrays   | 4 |
| Sorting  | 0 |
| Binary Search | 0 |
| Recursion | 0 |
| Linked List | 0 |
| Stack & Queue | 0 |
| Strings | 0 |
| Trees | 0 |
| BST | 0 |
| Heap | 0 |
| Graphs | 0 |
| DP | 0 |

---

# 🧠 Pattern Notebook (To Be Updated)

- Complement Search using Hashing  
- Running Prefix Sum  
- Two Pointer Technique  
- Sliding Window  
- Binary Search on Answer  
- DFS Template  
- BFS Template  
- DP Memoization Template  

---

# 🚀 Weekly Goals

- Week 1: Strong Array foundation
- Week 2: Binary Search + Recursion
- Week 3: Linked List + Stack
- Week 4: Trees Basics
- Week 5: Trees Advanced + Heap
- Week 6: Graphs
- Week 7: DP Basics
- Week 8: Full Revision + Mock Practice