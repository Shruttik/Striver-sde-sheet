# Striver SDE Sheet - Shruti Kukreti

🎯 Goal: Finish before May  
💼 Target: 10+ LPA  
📅 Started: March 2026  

---

# 01️⃣ Arrays

---

## 1️⃣ Two Sum – 01 March (Day 1)

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- First understood brute force using nested loops.
- Optimized using single-pass HashMap.
- For each element checked if complement exists before inserting current element.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Complement search using HashMap

### 🔹 Mistakes Made:
- Incorrect usage of `mp.find()`
- Initially used two-pass approach
- Didn't consider self-matching case

### 🔹 Revision Dates:
- Day 3: 04 March
- Day 7:
- Day 21:

---

## 2️⃣ Maximum Subarray (Kadane’s Algorithm) – 01 March (Day 1)

### Topic:
Array

### Difficulty:
Medium

### 🔹 Approach:
- Observed that negative running sums reduce future sums.
- Used Kadane's algorithm:
  - Maintain running sum
  - Update maximum sum
  - Reset sum when negative

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Running prefix sum / Greedy

### 🔹 Mistakes Made:
- Incorrect brute force logic initially
- Wrong max initialization

### 🔹 Revision Dates:
- Day 3: 04 March
- Day 7:
- Day 21:

---

## 3️⃣ Move Zeroes – 01 March (Day 1)

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- Used two pointers:
  - `fast` scans array
  - `slow` marks next non-zero position
- Swap when non-zero element found

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Two Pointer Technique

### 🔹 Mistakes Made:
- Initially used unnecessary loop variable

### 🔹 Revision Dates:
- Day 3: 04 March
- Day 7:
- Day 21:

---

## 4️⃣ Majority Element – 02 March (Day 2)

### Topic:
Array

### Difficulty:
Easy

### 🔹 Approach:
- Used Boyer–Moore Voting Algorithm
- Maintain candidate and count
- Reset candidate when count becomes zero

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Boyer–Moore Voting Algorithm

### 🔹 Mistakes Made:
- Forgot to return candidate
- Needed deeper understanding of cancellation logic

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 5️⃣ Sort Colors – 02 March (Day 2)

### Topic:
Array

### Difficulty:
Medium

### 🔹 Approach:
- Used Dutch National Flag algorithm
- Three pointers: `low`, `mid`, `high`
- Partition 0s,1s,2s

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Dutch National Flag Algorithm

### 🔹 Mistakes Made:
- Wrong pointer initialization initially
- Didn't understand why `mid` doesn't increment after swapping with `high`

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 6️⃣ Next Permutation – 02 March (Day 2)

### Topic:
Array

### Difficulty:
Medium

### 🔹 Approach:
1. Find pivot where `nums[i] < nums[i+1]`
2. Swap with next greater element
3. Reverse suffix

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Lexicographical Permutation Logic

### 🔹 Mistakes Made:
- Incorrect loop bounds
- Used assignment instead of comparison

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 7️⃣ Merge Intervals – 03 March (Day 3)

### Topic:
Intervals / Array

### Difficulty:
Medium

### 🔹 Approach:
- Sort intervals
- Compare with last merged interval
- Merge if overlapping

### 🔹 Time Complexity:
O(n log n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Sorting + Greedy

### 🔹 Mistakes Made:
- Confusion with indexing
- Initially started loop from index 0

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 8️⃣ Set Matrix Zeroes – 03 March (Day 3)

### Topic:
Matrix

### Difficulty:
Medium

### 🔹 Approach:
- Used first row and column as markers
- Tracked `rowzero` and `colzero`
- Marked rows and columns then updated matrix

### 🔹 Time Complexity:
O(m × n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Matrix Marking Technique

### 🔹 Mistakes Made:
- Row/column indexing confusion
- Swapped row and column loops

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 9️⃣ Best Time to Buy and Sell Stock – 03 March (Day 3)

### Topic:
Array / Greedy

### Difficulty:
Easy

### 🔹 Approach:
- Maintain minimum price seen so far
- Calculate profit for each day
- Track maximum profit

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Greedy / Minimum Prefix Tracking

### 🔹 Mistakes Made:
- Initially thought of brute force O(n²)

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 🔟 Pascal’s Triangle – 04 March (Day 4)

### Topic:
Array / Matrix Construction

### Difficulty:
Easy

### 🔹 Approach:
- Constructed Pascal's Triangle row by row.
- For each row `i`, created a vector of size `i + 1`.
- First and last elements of every row are always `1`.
- Middle elements are computed using the previous row:
  - `row[j] = ans[i-1][j-1] + ans[i-1][j]`
- After building the row, pushed it into the result vector.

### 🔹 Time Complexity:
O(n²)

### 🔹 Space Complexity:
O(n²)

### 🔹 Pattern Used:
Dynamic construction using previous state  
Triangle building pattern

### 🔹 Mistakes Made:
- Initially confused whether to use a full 2D matrix or build rows one by one.
- Needed clarity on how middle elements depend on the previous row.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣1️⃣ Rotate Image – 04 March (Day 4)

### Topic:
Array / Matrix

### Difficulty:
Medium

### 🔹 Approach:
- The matrix must be rotated **90° clockwise in-place**.
- Used a two-step transformation trick:
  1. **Transpose the matrix**  
     - Swap elements across the diagonal:  
       `matrix[i][j] ↔ matrix[j][i]`
     - Only iterate the upper triangle (`j = i + 1`) to avoid double swapping.
  2. **Reverse each row**  
     - This shifts elements to the correct rotated positions.
- The combination of **transpose + row reversal** produces a 90° clockwise rotation.

### 🔹 Time Complexity:
O(n²)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Matrix transformation  
Transpose + Reverse technique

### 🔹 Mistakes Made:
- Initially transposed the entire matrix (`j = 0 → n`) which caused elements to swap twice.
- Learned that transpose must only iterate the **upper triangle (`j = i + 1`)**.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

# 📊 Progress Tracker

| Topic | Problems Solved |
|------|----------------|
| Arrays | 11 |
| Sorting | 0 |
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

# 🧠 Pattern Notebook

### Hashing
- Complement search (Two Sum)

### Greedy
- Kadane's Algorithm
- Stock Buy/Sell

### Two Pointers
- Move Zeroes

### Voting Algorithm
- Boyer–Moore

### Partitioning
- Dutch National Flag

### Permutation Logic
- Next Permutation

### Interval Problems
- Merge Intervals

### Matrix Tricks
- Matrix Marker Technique

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