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
            // String literals, like "error", do not match char*, it needs to be const char*
            // Alternate 1: catch(string error){...}
            
            cout << error << endl;
            break;
        }
    }

    return 0;
}
