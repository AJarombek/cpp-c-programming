// Implementation of the Array struct
// Author: Andrew Jarombek
// Date: 7/2/2023

#include "array.h"

template<typename T, size_t N>
constexpr size_t Array<T, N>::size() noexcept {
    return N;
}
