#ifndef TESTING_CHAOTIC_EVIL_HPP
#define TESTING_CHAOTIC_EVIL_HPP

#include <functional>

#define DECLARE_FUNCTIONS \
extern std::function<void()> declare;\
\
extern std::function<int(int)> increment;\
\
extern std::function<void(int*, size_t, std::function<void(int&)>)> xform;\

DECLARE_FUNCTIONS

#endif //TESTING_CHAOTIC_EVIL_HPP
