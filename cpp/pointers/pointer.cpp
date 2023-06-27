// Implementation of pointer functions
// Author: Andrew Jarombek
// Date: 6/26/2023

#include "pointer.h"

void incrementValue(int* value) {
    (*value)++;
}

void incrementReference(int& value) {
    value++;
}

void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
