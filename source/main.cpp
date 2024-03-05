#include <iostream>

using namespace std;

int add(int a,int b)
{
    return a+b;
}

int main()
{
    cout << "Hello from C++ with CMake"<<endl;
    cout << "Sum = "<< add(7,5)<<endl;
    return 0;
}