// Convert a floating point number to string.cpp
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;




string IntToString(long long n)
{
	string str = "";

	if (n == 0)
		str += '0';
	else
	{
		while (n > 0)
		{
			int r = n % 10;
			char ch = r + 48;
			str += ch;

			n /= 10;
		}

		reverse(str.begin(), str.end());
	}

	return str;
}



void DoubleToString(double val)
{
	string finalStr = "", iPartStr = "", fPartStr = "";

	long long iPart = (long long)abs(val);
	double fPart = abs(val) - (double)iPart;

	iPartStr = IntToString(iPart);

	int afterPoint = 5;
	fPart = ceil(fPart * pow(10, afterPoint));
	
	fPartStr = IntToString((long long)fPart);

	while (fPartStr.length() < afterPoint)
		fPartStr.insert(fPartStr.begin(), '0');

	if (val < 0)
		finalStr += '-';

	finalStr += iPartStr;
	finalStr += '.';
	finalStr += fPartStr;

	cout << finalStr << endl;

}



int main()
{
	double val;
	cin >> val;

	DoubleToString(val);

	return 0;
}
