#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza";
    string &meal = food;
    cout<<&food<<endl;
    return 0;
}
