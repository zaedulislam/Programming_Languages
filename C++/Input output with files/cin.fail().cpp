/**
 * cin.fail() returns true if the last cin command failed, and false otherwise.
 * Now suppose we have a text file - input.txt and it's contents are:
 * 30 40 50 60 70 -100 Fred 99 88 77 66
 *
 * When we will run this program on that, it will result like:
 * ID 1: 30
 * ID 2: 40
 * ID 3: 50
 * ID 4: 60
 * ID 5: 70
 * ID 6: -100
 * 
 * It will not continue after 6th value as it quits after reading the seventh word, because that is not an integer: cin.fail() returns true.
 */


#include<iostream>
using namespace std;

int main() {
    int id = 1, num;

    while (1) {

        cin >> num;

        if (cin.fail()) {
            return 0;
        }

        cout << "ID " << id++ << ": " << num << endl;
    }
    
    return 0;
}
