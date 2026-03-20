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

---

## 1️⃣2️⃣ Subarray Sum Equals K – 04 March (Day 4)

### Topic:
Array / Hashing / Prefix Sum

### Difficulty:
Medium

### 🔹 Approach:
- Used **prefix sum + hashmap** technique.
- Maintained a running sum `presum` while iterating through the array.
- For each element, checked whether `(presum - k)` had appeared before.
- If it exists, that means a previous prefix sum forms a subarray whose sum equals `k`.
- Stored prefix sums and their frequencies in a hashmap to efficiently count valid subarrays.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Prefix Sum + Hashmap  
Subarray sum difference trick  
`prefix[j] - prefix[i] = k`

### 🔹 Mistakes Made:
- Initially incremented `mp[diff]` instead of only using it for counting.
- Needed deeper understanding of how prefix differences form subarray sums.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣3️⃣ Longest Consecutive Sequence – 05 March (Day 5)

### Topic:
Array / Hashing

### Difficulty:
Medium

### 🔹 Approach:
- Used an **unordered_set** to store all numbers for O(1) lookups.
- Iterated through the numbers and only started counting a sequence when the current number had **no previous element (`num - 1`) in the set**.
- If it is the start of a sequence, expanded forward:
  - Checked for `num + 1`, `num + 2`, `num + 3` and so on.
  - Counted the length of that sequence.
- Updated the maximum sequence length found.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Hashing + Sequence Expansion  
Set lookup optimization

### 🔹 Mistakes Made:
- Initially iterated over the vector instead of the set which could cause unnecessary work when duplicates exist.
- Forgot to reset `length` inside the sequence counting logic.
- Needed clarity on why sequences should only start when `(num - 1)` is not present.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

## 1️⃣4️⃣ Product of Array Except Self – 05 March (Day 5)

### Topic:
Array / Prefix Product

### Difficulty:
Medium

### 🔹 Approach:
- Built prefix products from the left side.
- Stored them directly in the result array.
- Traversed from the right while maintaining a running product.
- Multiplied the right product with the stored left product.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1) (excluding output array)

### 🔹 Pattern Used:
Prefix product technique  
Left × Right product decomposition

### 🔹 Mistakes Made:
- Initially started the right traversal from `n-2` instead of `n-1`.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣5️⃣ Maximum Product Subarray – 05 March (Day 5)

### Topic:
Array / Dynamic Programming

### Difficulty:
Medium

### 🔹 Approach:
- The product of a subarray can change drastically when encountering **negative numbers**.
- A negative number can turn a large positive product into a negative one, and a large negative product into a positive one.
- Therefore, we track both:
  - `currentMax` → maximum product ending at current position
  - `currentMin` → minimum product ending at current position
- For each element we compute:

  newMax = max(num, num × prevMax, num × prevMin)  
  newMin = min(num, num × prevMax, num × prevMin)

- Update the global maximum product at each step.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Modified Kadane’s Algorithm  
Dynamic programming with sign tracking

### 🔹 Mistakes Made:
- Initially updated `currmax` before computing `currmin`, causing incorrect calculations.
- Learned that the previous `currmax` must be stored temporarily before updating.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣6️⃣ Count Subarrays With Given XOR – 11 March (Day 6)

### Topic:
Array / Hashing / Prefix XOR

### Difficulty:
Medium

### 🔹 Approach:
- Used **prefix XOR technique with a hashmap**.
- Maintained a running XOR (`prefixXor`) while traversing the array.
- A subarray XOR equals `k` when:

  `prefixXor[j] ^ prefixXor[i-1] = k`

- Rearranging:

  `prefixXor[i-1] = prefixXor[j] ^ k`

- So while iterating, we check if `(prefixXor ^ k)` has appeared before.
- If it exists in the hashmap, it means a valid subarray ending at the current index exists.
- The hashmap stores the **frequency of prefix XOR values** encountered so far.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Prefix XOR + Hashmap  
XOR prefix difference trick

### 🔹 Mistakes Made:
- Initially incremented the count by `1` instead of adding the stored frequency from the hashmap.
- Needed to understand why multiple occurrences of the same prefix XOR create multiple valid subarrays.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣7️⃣ Longest Subarray With Equal Number of 0s and 1s – 11 March (Day 6)

### Topic:
Array / Prefix Sum / Hashing

### Difficulty:
Medium

### 🔹 Approach:
- The array contains only `0` and `1`.
- Converted the problem into a prefix sum problem by replacing:
  - `0 → -1`
  - `1 → 1`
- After this transformation, the task becomes:
  - **Find the longest subarray with sum = 0.**
- Maintained a running prefix sum while traversing the array.
- Used a hashmap to store the **first index where each prefix sum appears**.
- If the same prefix sum appears again at index `i`, it means the subarray between the two indices has sum `0`.
- Calculated the subarray length using:

  `length = current_index - first_index_of_prefix_sum`

- Updated the maximum length accordingly.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Prefix Sum + Hashmap  
Transforming values to reduce the problem to **subarray sum = 0**

### 🔹 Mistakes Made:
- Initially used `==` instead of `=` while converting `0` to `-1`.
- Initially tried counting subarrays instead of finding the **maximum length**.
- Learned that the hashmap must store the **first occurrence of prefix sums**.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 1️⃣8️⃣ Longest Subarray with Sum K – 19 March (Day 6)

### Topic:
Array / Prefix Sum / Hashing

### Difficulty:
Medium

### 🔹 Approach:
- The array contains positive and negative integers.
- The task is to:
  - **Find the longest subarray with sum = K.**
- Maintained a running prefix sum while traversing the array.
- Used a hashmap to store the **first index where each prefix sum appears**.
- If at any index `i`, the prefix sum becomes equal to `K`, it means the subarray from `0 → i` has sum `K`.
- For the general case, checked if `(prefixSum - K)` exists in the hashmap:
  - If it exists, it means a subarray ending at index `i` has sum `K`.
- Calculated the subarray length using:

  `length = current_index - first_index_of_prefix_sum`

- Updated the maximum length accordingly.
- Stored prefix sum only if it was not already present to ensure maximum length.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Prefix Sum + Hashmap  
Subarray sum difference technique  
First occurrence tracking

### 🔹 Mistakes Made:
- Used `diff` instead of `prefixSum` while inserting into hashmap.
- Incorrect use of `else` which skipped valid insertions.
- Initialized `maxlength` incorrectly using `INT_MIN`.
- Confused between counting subarrays and finding the **maximum length**.
- Learned that the hashmap must store the **first occurrence of prefix sums**.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

---

## 1️⃣9️⃣ Find the Duplicate Number – 19 March (Day 7)

### Topic:
Array / Linked List / Cycle Detection

### Difficulty:
Medium

### 🔹 Approach:
- The array is treated as a linked list where each index points to the value at that index.
- Since numbers are in the range `1 → n`, a duplicate creates a cycle.
- Used Floyd’s Cycle Detection Algorithm (Tortoise and Hare).

- Phase 1:
  - Used two pointers:
    - Slow moves one step
    - Fast moves two steps
  - If they meet, a cycle exists.

- Phase 2:
  - Reset one pointer to the start.
  - Move both pointers one step at a time.
  - The point where they meet again is the **duplicate number (cycle entry)**.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Floyd’s Cycle Detection  
Linked List Cycle Detection in Array

### 🔹 Mistakes Made:
- Initially tried to detect duplicate in first meeting point.
- Forgot to reset one pointer for Phase 2.
- Incorrectly moved fast pointer by 2 steps in Phase 2.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---


## 2️⃣0️⃣ Merge Two Sorted Arrays (No Extra Space) – 19 March (Day 7)

### Topic:
Array / Two Pointers

### Difficulty:
Easy

### 🔹 Approach:
- Given two sorted arrays, the task is to merge them into `nums1` without using extra space.
- Observed that the end of `nums1` has empty space to accommodate elements of `nums2`.
- Used **three pointers**:
  - `m - 1` → last valid element in `nums1`
  - `n - 1` → last element in `nums2`
  - `k = m + n - 1` → last index of `nums1`

- Compared elements from the back:
  - If `nums1[m] > nums2[n]`, placed `nums1[m]` at `nums1[k]`
  - Otherwise, placed `nums2[n]` at `nums1[k]`

- Decremented pointers accordingly after each placement.
- Continued until all elements of `nums2` are placed.

- Important:
  - Loop runs while `n >= 0` because remaining elements of `nums2` must be inserted.
  - Remaining elements of `nums1` are already in correct position.

### 🔹 Time Complexity:
O(m + n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Two Pointer Technique  
Reverse Merge Strategy

### 🔹 Mistakes Made:
- Confused array size with last index (`m` vs `m-1`, `n` vs `n-1`)
- Caused out-of-bounds access by using `nums1[m]` and `nums2[n]`
- Missed boundary condition when `m < 0`
- Incorrect use of `else if` leading to undefined behavior
- Used unnecessary variable `max`

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

## 2️⃣1️⃣ Missing and Repeating Number – 19 March (Day 7)

### Topic:
Array / Hashing

### Difficulty:
Medium

### 🔹 Approach:
- The array contains numbers from `1 → n`, where one number is missing and one number is repeating.
- Used a hashmap to store the frequency of each element.
- Traversed the array and updated frequency using:

  `mp[arr[i]]++`

- Iterated from `1 → n` to ensure all numbers are checked:
  - If `mp[i] == 2`, then `i` is the **repeating number**.
  - If `mp[i] == 0`, then `i` is the **missing number**.
- Used the property of hashmap where accessing `mp[i]` creates the key with default value `0` if it does not exist.
- Stored results in vector as `[repeating, missing]`.

### 🔹 Time Complexity:
O(n)

### 🔹 Space Complexity:
O(n)

### 🔹 Pattern Used:
Hashing / Frequency Count  
Array Frequency Tracking

### 🔹 Mistakes Made:
- Tried iterating directly over hashmap which skipped missing element.
- Confused between `mp.find(i)` and `mp[i]` behavior.
- Faced segmentation fault due to uninitialized vector.
- Initially used wrong range (`0 → n-1` instead of `1 → n`).
- Pushed duplicate multiple times instead of assigning once.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

# 02️⃣ Binary Search

---

## 2️⃣2️⃣ Binary Search – 20 March (Day 8)

### Topic:
Array / Binary Search

### Difficulty:
Easy

### 🔹 Approach:
- The array is sorted, which allows the use of **Binary Search**.
- Initialized two pointers:
  - `low = 0`
  - `high = n - 1`
- Repeatedly calculated the middle index using:

  `mid = low + (high - low) / 2`

- Compared `nums[mid]` with the target:
  - If equal → return `mid`
  - If target is greater → search in right half → `low = mid + 1`
  - If target is smaller → search in left half → `high = mid - 1`

- Continued the process until `low > high`.
- If target not found, returned `-1`.

### 🔹 Time Complexity:
O(log n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Binary Search  
Divide and Conquer

### 🔹 Mistakes Made:
- Initially used `low = mid` instead of `low = mid + 1`, causing infinite loop.
- Incorrectly updated `mid` instead of `high` in one condition.
- Needed clarity on eliminating the mid element after comparison.
- Learned importance of safe mid calculation to avoid overflow.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---


## 2️⃣3️⃣ Lower Bound / Upper Bound – 20 March (Day 8)

### Topic:
Array / Binary Search

### Difficulty:
Medium

### 🔹 Approach:
- The array is sorted, allowing the use of **Binary Search** to find positions instead of exact elements.

- **Lower Bound**:
  - Finds the first index where `arr[i] >= target`.
  - If `arr[mid] >= target`, store `mid` as a possible answer and move left.
  - Else, move right.

- **Upper Bound**:
  - Finds the first index where `arr[i] > target`.
  - If `arr[mid] > target`, store `mid` as a possible answer and move left.
  - Else, move right.

- Used an `ans` variable to track the **best valid index** during search.
- Initialized `ans = n` to handle cases where no valid index exists.

- Important:
  - Do NOT return `mid` because it is only the last checked position.
  - Always return `ans`, which stores the correct boundary index.

### 🔹 Time Complexity:
O(log n)

### 🔹 Space Complexity:
O(1)

### 🔹 Pattern Used:
Binary Search Variant  
First Valid Position Search

### 🔹 Mistakes Made:
- Confused conditions between lower bound (`>=`) and upper bound (`>`).
- Initially returned `mid` instead of maintaining an answer variable.
- Did not track the first valid index properly.
- Needed clarity on why binary search continues even after finding a valid answer.

### 🔹 Revision Dates:
- Day 3:
- Day 7:
- Day 21:

---

# 📊 Progress Tracker

| Topic | Problems Solved |
|------|----------------|
| Arrays | 21 |
| Sorting | 0 |
| Binary Search | 3 |
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