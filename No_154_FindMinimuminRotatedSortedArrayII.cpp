#include "No_154_FindMinimuminRotatedSortedArrayII.h"


No_154_FindMinimuminRotatedSortedArrayII::No_154_FindMinimuminRotatedSortedArrayII()
{
}


No_154_FindMinimuminRotatedSortedArrayII::~No_154_FindMinimuminRotatedSortedArrayII()
{
}
int No_154_FindMinimuminRotatedSortedArrayII::findMin(vector<int> &num) {
	if (num.size() <= 0)
		return 0;
	int prev = num[0];
	for (vector<int>::iterator i = num.begin(); i != num.end(); i++)
	{
		if (*i < prev)
		{
			return *i;
		}
	}
	return prev;
}