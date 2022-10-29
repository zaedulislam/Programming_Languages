/**
 * Let's say, we need to consider integer overflow when adding a and b. In that case, to prevent an overflow error, we could cast our numbers from 'int'
 * data type to 'long' data type before adding them together
 */

#include <iostream>
#include <cmath>

using namespace  std;

int main() {
    int a = 5, b = 4;
    long long int sum = static_cast<int>(a + b);

    cout << "sum: " << sum << endl;
}
