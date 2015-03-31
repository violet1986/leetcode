/*
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array.
*/
#include "No_153_FindMinimuminRotatedSortedArray.h"
#include "iterator"

No_153_FindMinimuminRotatedSortedArray::No_153_FindMinimuminRotatedSortedArray()
{
}


No_153_FindMinimuminRotatedSortedArray::~No_153_FindMinimuminRotatedSortedArray()
{
}
int No_153_FindMinimuminRotatedSortedArray::findMin(vector<int> &num) {
	findMinII(num);
}

int No_153_FindMinimuminRotatedSortedArray::findMinI(vector<int> &num) {
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
int No_153_FindMinimuminRotatedSortedArray::findMinII(vector<int> &num) {
	if (num.size() <= 0)
		return 0;
	vector<int>::iterator first = num.begin();
	vector<int>::iterator last = num.end() - 1;
	
	vector<int>::iterator middle = num.begin() + (num.size()>>1);

	while (first < last && *first > *last)
	{
		
		if (middle > first && *middle > *first)
		{
			first = middle + 1;
			middle = first + ((last - first) >> 1);
		}
		else if (middle == first)
		{
			return (*first < *last) ? *first : *last;
		}
		else
		{
			last = middle;
			middle = first + ((last - first) >> 1);
		}
	}
	
	return *first;
	
}