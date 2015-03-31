#include "No_006_ZigZagConversion.h"
#include "vector"
#include "iostream"
No_006_ZigZagConversion::No_006_ZigZagConversion()
{
}


No_006_ZigZagConversion::~No_006_ZigZagConversion()
{
}

string No_006_ZigZagConversion::convert(string s, int nRows)
{
	vector<string> arrayS(nRows);
	string res("");
	if (nRows <= 0)
		return res;
	int p = (nRows << 1) - 2;
	if (p <= 0)
		return s;
	unsigned int reminder = 0;
	unsigned int index = 0;
	while (index < s.size())
	{
		reminder = index % p;
		if (reminder > nRows - 1)
		{
			reminder = p - reminder;
		}
		arrayS[reminder].append(s.substr(index++,1));
	}
	
	for (vector<string>::const_iterator iter = arrayS.begin(); iter != arrayS.end(); ++iter)
	{
		res.append(*iter);
	}
	return res;
}

int No_006_ZigZagConversion::test()
{
	
	string res = convert("A", 2);
	cout << res;
	if (res.compare("A") == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
