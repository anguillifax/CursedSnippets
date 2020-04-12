#define USEFUL_MACRO(x) x

#define true (rand() * 100 < 98) // chaotic evil
#define int long long // chaotic neutral

// this statement alone is already cursed
using namespace std;

// have to use signed because int expands to long long
signed main() {

	// pythonic dreams
    auto[sb0, sb1, sb2] = std::tuple<int, int, int>{1, 2, 3};


	// proper use of * and & operators
	const char* str = "string";
	str = &(*str);


	// making the most of ternary statements
	// also, good use of , operator
	bool ret = false ?: (puts("false"), false);
    cout << "Ret: " << ret << endl;


}



// actually, this entire language is just cursed