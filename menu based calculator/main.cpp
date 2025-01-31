#include <iostream>

using namespace std;

int main()
{
  int i,j,k,l;
  cout<<"Menu based calculator"<<endl;
  cout<<"Menue"<<endl;
  cout<<"1,addition"<<endl;
  cout<<"2,subtraction"<<endl;
  cout<<"3,multiplication"<<endl;
  cout<<"4,division"<<endl;
  cout<<"5,modulus"<<endl;
  cout<<"select number to continue"<<endl;
  cin>>i;
  cout<<"Enter the two numbers"<<endl;
  cin>>j>>k;
  switch(i){
       case 1:
          l=j+k;
          cout<<"sum="<<l<<endl;
             break;
       case 2:
          l=j-k;
          cout<<"difference="<<l<<endl;
             break;
       case 3:
        l=j*k;
          cout<<"product="<<l<<endl;
             break;
       case 4:
           l=j/k;
          cout<<"quotent="<<l<<endl;
             break;
       case 5:
           l=j%k;
          cout<<"modules="<<l<<endl;
             break;
       default :
           cout<<"Inavlid  menue selection";
  }
    return 0;
}
