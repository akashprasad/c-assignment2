# c-assignment2
// question 10
#include<iostream>
using namespace std;
main()
{
 float m,p,c,cs,e,t,a,p;
 cout<<"Enter the marks of five subject of a student :";
 cin>>m>>p>>c>>cs>>e;
 t=m+p+c+cs+e;
 a=t/5;
 p=(t*500)/100;
 cout<<"total is : "<<t;
 cout<<endl<<"average : "<<a;
 cout<<endl<<"percentage : "<<p<<"%";
}
