#include <iostream>
using namespace std;

// 1.
//void mightGoWrong(){
//    bool error = true;
//
//    if(error){
//        throw 8;
//    }
//}
//
//
//
//int main()
//{
//    mightGoWrong();
//
//    cout << "Still running!" << endl;
//
//    return 0;
//}


// 2.
//void mightGoWrong(){
//    bool error = true;
//
//    if(error){
//        throw 8;
//    }
//}
//
//
//
//int main()
//{
//    try{
//        mightGoWrong();
//    } catch(int e){
//        cout << "Error code: " << e << endl;
//    }
//
//    cout << "Still Running" << endl;
//
//    return 0;
//}


// 3.
//void mightGoWrong(){
//    bool error = true;
//
//    if(error){
//        throw "Something went wrong.";
//    }
//}
//
//
//
//int main()
//{
//    try{
//        mightGoWrong();
//    }
//    catch(int e){
//        cout << "Error code: " << e << endl;
//    }
//    catch (char const * e){
//        cout << "Error message: " << e << endl;
//    }
//
//    cout << "Still Running" << endl;
//
//    return 0;
//}


// 4.
//void mightGoWrong(){
////    bool error1 = true;
//    bool error1 = false;
//    bool error2 = true;
//
//    if(error1){
//        throw "Something went wrong.";
//    }
//
//    if(error2){
//        throw string("Something else went wrong.");
//    }
//}
//
//
//
//int main()
//{
//    try{
//        mightGoWrong();
//    }
//    catch(int e){
//        cout << "Error code: " << e << endl;
//    }
//    catch (char const * e){
//        cout << "Error message: " << e << endl;
//    }
//    catch(string &e){
//        cout << "String error message: " << e << endl;
//    }
//
//    cout << "Still Running" << endl;
//
//    return 0;
//}


// 5.
void mightGoWrong(){
//    bool error1 = true;
    bool error1 = false;
    bool error2 = true;

    if(error1){
        throw "Something went wrong.";
    }

    if(error2){
        throw string("Something else went wrong.");
    }
}


void usesMightGoWrong(){
    mightGoWrong();
}


int main()
{
    try{
        usesMightGoWrong();
    }
    catch(int e){
        cout << "Error code: " << e << endl;
    }
    catch (char const * e){
        cout << "Error message: " << e << endl;
    }
    catch(string &e){
        cout << "String error message: " << e << endl;
    }

    cout << "Still Running" << endl;

    return 0;
}
