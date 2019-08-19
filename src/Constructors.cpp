#include <iostream>

using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main(int argc, char const *argv[])
{
    Employee worker;
    worker.setSalary(2);
    cout << worker.getSalary();
    return 0;
}
