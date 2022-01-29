// string to integer (Vice versa).cpp

#include <bits/stdc++.h>
using namespace std;

int const SIZE = 1000;




// Number to String
void ToString()
{
	int n;                  /// double, float
	cin >> n;

	string S;               				/// string which will contain the result.
	stringstream convert;  	/// stringstream used for the conversion.
	convert << n;  				/// Add the value of Number to the characters in the stream.

	S = convert.str();  		/// Set Result to the content of the stream.
	cout << S << endl;
}



// String to Number
void ToInt()
{
    int ar[SIZE];   /// double, float
	int I = 0, K;
	/*
	char S[SIZE];
	gets(S);
	*/

	string S;
	cin.ignore();
	getline(cin,S);

	/// stringstream used for the conversion initialized with the contents of Text.
	stringstream convert(S);

	while (convert >> ar[I++]) {}

	for (K = 0; K < I - 1; K++)
		cout << ar[K] << " ";
}



int StringToInt(string S)
{
    bool sign = false;
    int I, pos = 0, len = S.length(), n = 0;

    if(S[0] == '-')
    {
        sign = true;
        pos++;
    }

    for(I = pos; I < len; I++)
    {
        n *= 10;
        n += S[I] - '0';
    }

    if(sign)
        n *= (-1);

    return n;

}



string IntToString(int n)
{
    int I, pos = 0, len;
    string S = "";

    if(n == 0)
        return (S += '0');

    if(n < 0)
    {
        n *= (-1);
        S += '-';

        len = (int)log10(n) + 1;

        pos++;
        len++;
    }
    else
        len = (int)log10(n) + 1;

    for(I = pos; I < len; I++)
        S += '1';

    pos = len - 1;
    while(n > 0)
    {
        int r = n % 10;
        n /= 10;
        char ch = r + 48;
        S[pos--] = ch;
    }

    return S;
}



int main()
{
	int T, I, J, K, N, n, m, k, cnt = 0, len;

    /// Manually
    string S;

    cin >> S;
    int ret = StringToInt(S);
    cout << "String to Interger: " << ret << '\n';

    cin >> n;
    S = IntToString(n);
    cout << "Integer to String: " << S << '\n';
    /// Manually

    /// Built-in function
    ToString();
    ToInt();
    /// Built-in function

	return 0;
}




