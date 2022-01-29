// Convert string to a floating point number.cpp
#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;




void StringToDouble(string str)
{
    int I, J, len = str.length(), pointAtPos = -1;
    for(I = 0; I < len; I++)
    {
        if(str[I] == '.')
        {
            pointAtPos = I;
            break;
        }
    }


    long long iPart = 0, fPart = 0;

    if(pointAtPos == -1)
        J = len;
    else
        J = pointAtPos;

    for(I = 0; I < J; I++)
    {
        iPart = iPart * 10;
        int r = str[I] - '0';
        iPart += r;
    }


    double x = 0, y = 0, ans = 0;
    if(pointAtPos != -1)
    {
        int zeroAfterPoint = 0;
        for(I = pointAtPos + 1; I < len; I++)
        {
            if(str[I] != '0')
                break;

            zeroAfterPoint++;
        }

        long long z = 1;
        for(I = pointAtPos + zeroAfterPoint + 1; I < len; I++)
        {
            fPart = fPart * 10;
            int r = str[I] - '0';
            fPart += r;

            z *= 10;
        }

        y = (double)fPart / (double)z;

        while(zeroAfterPoint)
        {
            y /= 10;
            zeroAfterPoint--;
        }
		
    }

    x = (double)iPart;
    ans = x + y;

    cout << setprecision(8) << fixed << ans << endl;

}



int main()
{
	string str;
	cin >> str;

    StringToDouble(str);

	return 0;
	
}
