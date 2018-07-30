/* complex number using friend function and returning two objects */

#include<iostream>
using namespace std;
class Complex
{
 public:
 int a,b,real,img;
 void input()
 {
 cout<<"Enter real and img values: "<<endl;
 cin>>a>>b;
 }
 friend void output(Complex x,Complex y);
};
void output(Complex x,Complex y)
{
cout<<x.a<<"+"<<x.b<<"i"<<endl;
cout<<y.a<<"+"<<y.b<<"i";
}
int main()
{
Complex n,m;
n.input();
m.input();
output(n,m);
return 0;
}
