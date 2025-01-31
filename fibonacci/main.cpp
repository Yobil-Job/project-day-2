#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int sum=0;
    cout<<"This program will find the next ten fibonacci series by starting from the user two inputs"<<endl;
    cout<<"Enter two numbers"<<endl;
    cin>>i>>j;
    cout<<" "<<i<<" "<<j<<" ";
    for(int k=2;k<10;k++)
    {
        int sum=i+j;
        cout<<" "<<sum<<" ";
        i=j;
        j=sum;
    }

    return 0;
}
