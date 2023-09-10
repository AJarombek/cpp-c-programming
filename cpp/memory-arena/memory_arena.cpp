// Implementation of a memory arena class
// Author: Andrew Jarombek
// Date: 9/9/2023

#include "memory_arena.h"

MemoryArena::MemoryArena(size_t size) {
    arena = new char[size];
    capacity = size;
    offset = 0;
}

MemoryArena::~MemoryArena() {
    delete[] arena;
}

void* MemoryArena::allocate(size_t size) {
    if (offset + size > capacity) {
        return nullptr;
    }

    void* ptr = arena + offset;
    offset += capacity;
    return ptr;
}

void MemoryArena::reset() {
    offset = 0;
}
