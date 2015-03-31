#include "No_125_ValidPalindrome.h"

#include "algorithm"
#include "ctype.h"
#include "iterator"
No_125_ValidPalindrome::No_125_ValidPalindrome()
{
}


No_125_ValidPalindrome::~No_125_ValidPalindrome()
{
}
bool No_125_ValidPalindrome::isPalindrome(string s)
{
	transform(s.begin(), s.end(), s.begin(), ::towlower);
	auto left = s.begin();
	auto right = s.end() - 1;
	while (left < right)
	{
		if (!isalnum(*left))
			left++;
		else if (!isalnum(*right))
			right--;
		else if (*right != *left)
			return false;
	}
	return true;
}