#include<iostream>
using namespace std;
class A
{
	public:
		class B
		{
			int l,b,s,area,area2;
			public:
				void rec()
				{
				    int l,b,s,area,area2;
					cout<<"Enter values of l and b: "<<endl;
					cin>>l>>b;
					area=l*b;
					cout<<"Area of Rectangle: "<<area<<endl;
				}
			};
				
			void seq()
			{
					int l,b,s,area,area2;
			        cout<<"Enter value of s: ";
					cin>>s;
					area2=s*s;
					cout<<"Area of Square: "<<area2;	
			}
};


int main()
{
	A::B o1;
	A o2;
	o1.rec();
	o2.seq();
	
	return 0;	
	
}
