#include <iostream>

using namespace std;

class Test{
    public:
        int Int;
        string String;
};

int main(){
    Test test;

    test.Int = 5;
    test.String = "Hello";

    cout << test.Int << endl;
    cout << test.String << endl;
    return 1;
}