// Contributors to test cases
// @michocio
// @andywiecko

//#include "match.cpp"
#include <iostream>
#include <iomanip>
#include <vector>

bool match(std::string, std::string)
{
	return true;
};

class TestCase
{
	size_t fieldWidth{15};
	std::string s_pattern;
	std::string s_match;
	std::string s_notMatch;
	bool notNotMatch;

public:
	TestCase(std::string _pattern,
			 std::string _match,
			 std::string _notMatch,
			 bool _nnMatch = false) : s_pattern{_pattern},
									  s_match{_match},
									  s_notMatch{_notMatch},
									  notNotMatch{_nnMatch}
	{
	}

	void Test()
	{
		Display(s_pattern);
		std::cout << "\t";
		Display(s_match);
		std::cout << ": " << match(s_pattern, s_match) << "\t";
		Display(s_notMatch);
		if (notNotMatch)
			std::cout << ": None";
		else
			std::cout << ": " << match(s_pattern, s_notMatch);
		std::cout << "\n";
	}

	template <class T>
	void Display(T t)
	{
		std::cout << std::setw(fieldWidth) << t;
	}
};

int main()
{
	std::cout << std::boolalpha;
	std::vector<TestCase> tests{{
		{"x", "x", "a"},							// Sanity check
		{"xyz", "xyz", "xz"},						// Sanity check
		{"xyz", "axyzb", "axyb"},					// Partial match within
		{"xyz", "xyzaa", "yzaa"},					// Partial match at the beginning
		{"xyz", "bcxyz", "bcxz"},					// Partial match at the end
		{"x*z", "xabczzz", "xabc"},					// Kleene star easy
		{"x*z", "xzzzzz", "yxxxxzzzz"},				// Kleene star medium
		{"*", "aa", "", true},						// Matches any sequence
		{"?", "xy", ""},							// Partial wildcard
		{"??", "xy", ""},							// Greedy kleene
		{"?*", "a", ""},							// Empty kleene
		{"?", "x", ""},								// Easy wildcard
		{"a?b?c", "aabbcc", "abc"},					//
		{"?x?y?z?", "xxxyzz", "xayza"},				//
		{"?*?", "aa", "a"},							//
		{"?***?", "aa", "x"},						//
		{"****", "abcdef", "", true},				//
		{"**?", "a", ""},							//
		{"*a", "xa", ""},							//
		{"xx*", "xxyx", "xyx"},						//
		{"ala?ma?kota", "alaxmaxkota", "alamakota"} //
	}};

	std::cout << "Pattern"
			  << "\t\t\t"
			  << "String matching"
			  << "\t\t\t"
			  << "String not matching"
			  << "\n";
	std::cout << std::string(80, '=') << "\n";

	for (auto &test : tests)
		test.Test();
}
