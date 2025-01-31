#include <iostream>

using namespace std;
string gradeCalculator(int j);
void totalGradeCalculator(int s,int t);
string p;
int sumM=0;
int sumC=0;
int main()
{
    string i;
    float j,h;
    int k;
    string g;
cout<<"############  Grade calculator############"<<endl;
for(int q=0;q<6;q++){
cout<<"Enter The course name"<<endl;
cin>>i;
cout<<"Enter your mark for the course"<<endl;
cin>>j;
cout<<"Enter the creadit hour"<<endl;
cin>>k;
cout <<"         calculating your grade...."<<endl;
cout<<"course name: "<<i<<endl;
cout<<"credit hour: "<<k<<endl;
g=gradeCalculator(j);
cout<<"Grade: "<<g<<endl;
 totalGradeCalculator(j,k);
cout<<"Proccedening to the next course..."<<endl;
}
   h=sumM/sumC;
   cout<<"Total GPA= "<<gradeCalculator(h)<<endl;
    return 0;
}
string gradeCalculator(int j)
{
   if(j>=90)
   {
      p="A+";
    return p;
   }
   else if(j>=85&&j<90)
   {
        p="A";
    return p;
   }
    else if(j>=80&&j<85)
   {
        p="A-";
    return p;
   }
    else if(j>=75&&j<80)
   {
        p="B+";
    return p;
   }
    else if(j>=70&&j<75)
   {
        p="B";
    return p;
   }
    else if(j>=65&&j<70)
   {
        p="B-";
    return p;
   }
   else
   {
       p="F";
       return p;
   }

}
void totalGradeCalculator(int s,int t)
   {
       sumM+=s*t;
       sumC+=t;
   }

