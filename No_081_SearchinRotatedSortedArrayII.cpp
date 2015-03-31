#include "No_081_SearchinRotatedSortedArrayII.h"


No_081_SearchinRotatedSortedArrayII::No_081_SearchinRotatedSortedArrayII()
{
}


No_081_SearchinRotatedSortedArrayII::~No_081_SearchinRotatedSortedArrayII()
{
}

bool No_081_SearchinRotatedSortedArrayII::search(int A[], int n, int target)
{
	int first = 0;
	int last;
	int half, middle = 0;
	while (n > 0)
	{
		half = n >> 1;
		middle = first + half;
		last = first + n - 1;
		
		while (middle < last && A[middle] == A[last])
		{
			middle++;
			half++;
		}
		if (A[middle] == target)
		{
			return true;
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
		else if (A[middle] > A[last])
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


	return false;
}
void No_081_SearchinRotatedSortedArrayII::test()
{
	int A[] = { 1, 1, 1, 3, 1 };
	if (search(A, 5, 3))
	{
		cout << "success" << endl;
	}
}