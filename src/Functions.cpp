#include <iostream>

using namespace std;


int addf(int x, int y);

int main(int argc, char const *argv[])
{
    cout<<addf(1,2)<<endl;
    return 0;
}

int addf(int x, int y){
    return x+y;
}


