/*
Find Letters that Occur Odd Times in a String.cpp
Given a string of length at most 100000 consists of lowercase letters only. Find the letters
that occur odd times in the string without using extra memory.
*/

#include <bits/stdc++.h>
using namespace std;

string S;




bool Check(int mask, int pos)
{
    return (bool)(mask & (1 << pos));
}



int Set(int mask, int pos)
{
    return mask = mask | (1 << pos);
}



int Reset(int mask, int pos)
{
    return mask = mask & ~(1 << pos);
}



int main()
{
    int I, len, mask = 0, pos;
    cin >> S;
    len = S.length();

    for(I = 0; I < len; I++)
    {
        pos = S[I] - 'a';

        if(Check(mask, pos))
            mask = Reset(mask, pos);
        else
            mask = Set(mask, pos);

    }

    for(I = 0; I < 26; I++)
    {
        pos = I;
        if(Check(mask, pos))
            cout << (char) ('a' + pos) << ' ';
    }

    cout << endl;
    
    return 0;
}
