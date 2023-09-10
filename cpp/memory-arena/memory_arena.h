// Declaration of a memory arena class
// Author: Andrew Jarombek
// Date: 9/9/2023

#ifndef CONSTANTSTESTS_MEMORY_ARENA_H
#define CONSTANTSTESTS_MEMORY_ARENA_H

#include <cstddef>

class MemoryArena {
private:
    char* arena;
    size_t capacity;
    size_t offset;
public:
    MemoryArena(size_t size);
    ~MemoryArena();

    void* allocate(size_t size);
    void reset();
};

#endif //CONSTANTSTESTS_MEMORY_ARENA_H
