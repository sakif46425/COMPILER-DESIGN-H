#include<iostream>
using namespace std;

int main()
{
    int num, fact =1;

    cout<< "Enter Number: ";
    cin>> num;

    for(int i=1; i<=num; ++i)
    {

        fact *= i;
    }

    cout<< "Factorial number"<< num << "is" << fact << endl;

    return 0;

}
