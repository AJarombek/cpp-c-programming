// Inline functions using GCC
// Author: Andrew Jarombek
// Date: 4/29/2023

static inline __attribute__((always_inline)) int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}
