#include <iostream>
using namespace std;

// 1.
//class CanGoWrong{
//public:
//    CanGoWrong(){
//        char *pMemory = new char[99999999999];
//
//        delete [] pMemory;
//    }
//};
//
//
//int main()
//{
//    CanGoWrong wrong;
//
//    cout << "Still running!" << endl;
//
//    return 0;
//}


// 2.
class CanGoWrong{
public:
    CanGoWrong(){
        char *pMemory = new char[99999999999];

        delete [] pMemory;
    }
};


int main()
{
    try{
        CanGoWrong wrong;
    }
    catch(bad_alloc &e){
        cout << "Caught exception: " <<  e.what() << endl;
    }

    cout << "Still running!" << endl;

    return 0;
}

