#pragma once
#include "vector"
using namespace std;
class No_153_FindMinimuminRotatedSortedArray
{
public:
	No_153_FindMinimuminRotatedSortedArray();
	~No_153_FindMinimuminRotatedSortedArray();
	int findMin(vector<int> &num);
private:
	int findMinI(vector<int> &num);
	int findMinII(vector<int> &num);
};

