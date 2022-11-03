/**
 * Let's say, we need to consider integer overflow when adding a and b. In that case, to prevent an overflow error, we could cast our numbers from 'int'
 * data type to 'long' data type before adding them together
 */

#include <iostream>
#include <cmath>
#include <limits.h>

using namespace  std;

bool checkIntegerOverflowForAddition(int a, int b){
    // `a + b` would overflow
    if (b >= 0 && a > INT_MAX - b){
        return true;
    }

    return false;
}


bool checkIntegerUnderflowForAddition(int a, int b){
    // `a + b` would underflow
    if (b < 0 && a < INT_MIN - b){
        return true;
    }

    return  false;
}


bool checkIntegerOverflowForSubtraction(int a, int b){
    // `a - b` would overflow
    if (b < 0 && a > INT_MAX + b){
        return true;
    }

    return false;
}


bool checkIntegerUnderflowForSubtraction(int a, int b){
    // `a - b` would underflow
    if (b > 0 && a > INT_MIN + b){
        return true;
    }

    return false;
}


bool checkIntegerOverflowForMultiplication(int a, int b){
    // `a * b` can overflow
    if (a == -1 && b == INT_MIN){
        return true;
    }

    // `a * b` (or `a / b`) can overflow
    if (b == -1 && a == INT_MIN) {
        return true;
    }
    // `a * b` would overflow
    if (b != 0 && a > INT_MAX / b) {
        return true;
    }

    return false;
}


bool checkIntegerUnderflowForMultiplication(int a, int b){
    // `a * b` would underflow
    if (b != 0 && a < INT_MIN / b)
        return false;
}


int main() {
    int a = 5, b = 4;
    long long int sum = static_cast<int>(a + b);

    cout << "sum: " << sum << endl;
}
