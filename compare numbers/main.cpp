#include<iostream>
using namespace std;
int main()
{
     double i,j,k;
    cout<<"This is a programm that compare three numbers and out puts the largest"<<endl;
    cout<<"Enter three numbers one by one"<<endl;
    cin>>i;
    cin>>j;
    cin>>k;
    if(i>=j&&i>=k)
        {
            cout<<"Largest number is: "<<i<<endl;
        }

    else if(j>=i&&j>=k)
        {
            cout<<"Largest number is: "<<j<<endl;
        }
    else
        {
            cout<<"The Largest is:"<<k<<endl;
         }

    return 0;
}
