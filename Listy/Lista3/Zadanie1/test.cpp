// Contributors to test cases
// @michocio
// @andywiecko

#include "match.hpp"
#include <iostream>
#include <iomanip>
#include <vector>

bool match(const std::string &, const std::string &);

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
		std::cout << ": " << TryMatch(s_pattern, s_match) << "\t";
		Display(s_notMatch);
		if (notNotMatch)
			std::cout << ": None";
		else
			std::cout << ": " << TryMatch(s_pattern, s_notMatch);
		std::cout << "\n";
	}

	template <class T>
	void Display(T t)
	{
		std::cout << std::setw(fieldWidth) << t;
	}

	template <class T1, class T2>
	std::string TryMatch(T1 t1, T2 t2)
	{
		try
		{
			if (match(t1, t2))
				return "true";
			else
				return "false";
		}
		catch (const std::exception &e)
		{
			return "FAIL";
		}
	}
};

int main()
{
	std::cout << std::boolalpha;
	std::vector<TestCase> tests{{
		{"x", "x", "a"},							// Sanity check
		{"xxx", "xxx", "x"},						// Sanity check II
		{"xyz", "xyz", "xz"},						// Sanity check
		{"xyz", "axyzb", "axyb"},					// Partial match within
		{"xyz", "xyzaa", "yzaa"},					// Partial match at the beginning
		{"xyz", "bcxyz", "bcxz"},					// Partial match at the end
		{"x*z", "xabczzz", "xabc"},					// Kleene star easy
		{"x*z", "xzzzzz", "yxxxxzzzz"},				// Kleene star medium
		{"*", "aa", "", true},						// Matches any sequence
		{"?y", "xy", ""},							// Partial wildcard
		{"??", "xy", ""},							// Greedy kleene
		{"?*", "a", ""},							// Empty kleene
		{"?", "x", ""},								// Easy wildcard
		{"a?b?c", "aabbc", "abc"},					//
		{"?x?y?z?", "xxxyyzz", "xayza"},			//
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
