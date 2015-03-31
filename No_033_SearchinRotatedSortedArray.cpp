#include "No_033_SearchinRotatedSortedArray.h"


No_033_SearchinRotatedSortedArray::No_033_SearchinRotatedSortedArray()
{
}


No_033_SearchinRotatedSortedArray::~No_033_SearchinRotatedSortedArray()
{
}
int No_033_SearchinRotatedSortedArray::search(int A[], int n, int target)
{
	int first = 0;
	int last;
	int half, middle = 0;
	while (n > 0)
	{
		half = n >> 1;
		middle = first + half;
		last = first + n - 1;
		if (A[middle] == target)
		{
			return middle;
		}
		if (A[middle] <= A[last])
		{
			if (target > A[middle] && target <= A[last])
			{
				first = middle + 1;
				n = n - half - 1;
			}
			else
			{
				n = half;
			}
		}
		else
		{
			if (target < A[middle] && target > A[last])
			{

				n = half;
			}
			else
			{
				first = middle + 1;
				n = n - half - 1;
			}
		}
	}

	return -1;
}
