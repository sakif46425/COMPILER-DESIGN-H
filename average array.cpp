#include<iostream>
using namespace std;

int main()
{
    int n;
    float num[20],avg, sum=0;

    cout << "Enter number:";
    cin>> n;

    for(int i=0; i<n; ++i){
        cout<< i+1<< "Enter number: ";
    cin>> num[i];
    sum+=num[i];
}

avg =sum/n;
cout<< "The average is = "<<avg;
return 0;
}
