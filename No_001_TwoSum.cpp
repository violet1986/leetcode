#include "No_001_TwoSum.h"
#include "map"

No_001_TwoSum::No_001_TwoSum()
{
}


No_001_TwoSum::~No_001_TwoSum()
{
}
vector<int> No_001_TwoSum::twoSum(vector<int> &numbers, int target)
{
	map<int, int>dict;
	vector<int> answer;
	for (int i = 0; i < (int)numbers.size(); i++)
	{
		dict.insert(make_pair(numbers[i], i));
	}
	for (int i = 0; i < (int)numbers.size(); i++)
	{
		map<int, int>::iterator result = dict.find(target - numbers[i]);
		if (result != dict.end()) {
			if (result->second != i)
			{
				if (i < result->second)
				{
					answer.push_back(i + 1);
					answer.push_back(result->second + 1);
				}
				else
				{
					answer.push_back(result->second + 1);
					answer.push_back(i + 1);

				}
				break;
			}
			
		}
	}
	return answer;
}