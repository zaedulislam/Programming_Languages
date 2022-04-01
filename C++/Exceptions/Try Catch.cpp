#include<iostream>
using namespace std;

int main() {
    int age;
    string name;

    while(true)
    {
        cin >> name >> age;

        try{
            if(cin.fail()){
                throw "Type Mismatched";
                // Alternate 1: throw string("Type Mismatched"); 
            }

            cout << "Name: " << name << ", Age: " << age << endl;
        }
        catch(const char* error){
            // Alternate 1: string error
            // String literals, like "error", do not match char*, it needs to be const char*
            cout<<error<<endl;
            break;
        }
    }

    return 0;
}
