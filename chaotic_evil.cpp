#include "chaotic_evil.hpp"


std::function<void()> declare =
		[]() { puts("chaos is divine"); };

std::function<int(int)> increment =
		[](int i) { return i + 1; };

std::function<void(int*, size_t, std::function<void(int&)>)> xform =
		[](int* arr, size_t length, std::function<void(int&)> func) {
		for (size_t i = 0; i < length; ++i) func(arr[i]);
	 };
