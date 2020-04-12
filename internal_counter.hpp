#ifndef TESTING_INTERNAL_COUNTER_HPP
#define TESTING_INTERNAL_COUNTER_HPP

// Implements a translation-unit local counter system

// A purely theoretical, incredibly cursed, yet technically accurate piece of c++
// that abuses the nature of header files and internal linkage


// an anonymous namespace forces all contained entities to have internal linkage
// the same effect can be created by applying the keyword static to all entities
namespace {

    // static storage class, internal linkage global variable initialized to 0 in each translation unit
    int _internal_counter = 0;

    inline void IncrementCounter() {
        ++_internal_counter;
    }

    inline int ReadCounter() {
        return _internal_counter;
    }

    inline void ResetCounter() {
        _internal_counter = 0;
    }

}


#endif //TESTING_INTERNAL_COUNTER_HPP

