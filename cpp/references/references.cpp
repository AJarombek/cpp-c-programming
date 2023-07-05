// Implementation of functions that use references
// Author: Andrew Jarombek
// Date: 7/4/2023

#include "references.h"

template<class T>
void times(const std::vector<T>& v, int x) {
    for (int i = 0; i < v.size(); i ++) {
        v[i] *= x;
    }
}
