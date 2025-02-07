# Hash Table Implementation in C++

## Overview
This project demonstrates a simple **hash table** implementation in C++ to efficiently check for the existence of integers (both positive and negative) in an array. Instead of iterating through the entire array every time, we use a **2D hash table** to store numbers and perform lookups in **O(1) time**.

## How It Works
1. We use a **2D boolean array `hashTable[MAX+1][2]`**, where:
   - `hashTable[x][0]` stores positive numbers.
   - `hashTable[x][1]` stores negative numbers (converted to positive indices).
   
2. **Insertion:**
   - If the number is positive, mark `hashTable[number][0] = 1`.
   - If the number is negative, mark `hashTable[abs(number)][1] = 1`.

3. **Searching:**
   - If searching for `x >= 0`, check `hashTable[x][0]`.
   - If searching for `x < 0`, check `hashTable[abs(x)][1]`.
   - If the value is `1`, the number is present in the original array.

## Code
```cpp
#include <iostream>
using namespace std;

#define MAX 1000
bool hashTable[MAX + 1][2];

void insert(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0)
            hashTable[a[i]][0] = 1;
        else
            hashTable[abs(a[i])][1] = 1;
    }
}

bool search(int x) {
    if (x >= 0)
        return hashTable[x][0];
    else
        return hashTable[abs(x)][1];
}

int main() {
    int arr[] = {4, -3, 7, -1, 9, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, n);

    cout << search(-3) << endl;  // Output: 1
    cout << search(6) << endl;   // Output: 0
    cout << search(9) << endl;   // Output: 1

    return 0;
}
```

## Example Execution
**Input Array:** `{4, -3, 7, -1, 9, -5}`

**Searching for:**
| Number | Found? |
|--------|--------|
| `-3`   | ✅ Yes |
| `6`    | ❌ No  |
| `9`    | ✅ Yes |

## Time Complexity
- **Insertion:** `O(n)` (as we iterate through the array once)
- **Search:** `O(1)` (direct access in the hash table)

## Advantages
✅ **Fast lookup (O(1))** compared to linear search (O(n)).  
✅ **Handles both positive and negative numbers efficiently.**  
✅ **Memory-efficient compared to an unordered map or large arrays.**

## Limitations
❌ Only works for integers within the range `[-1000, 1000]` (can be modified for larger ranges).  
❌ Uses extra space (`1001 × 2` = `2002` boolean values).  
❌ Not suitable for **floating-point numbers** or **large numbers**.

## Future Enhancements
- Use a **1D array** (`bool hashTable[2001]`) instead of `2D` for optimization.
- Support **larger integer ranges dynamically**.
- Implement **deletion operation** for better hash table functionality.

## Conclusion
This implementation is an efficient way to **store and search numbers in constant time** using hashing. It is useful for problems involving **fast membership checking** in competitive programming and system applications.

---
**Author:** [FATIHA MARYAM]  
**Date:** [2025-02-07]  
**License:** MIT

