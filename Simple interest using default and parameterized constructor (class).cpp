#include <iostream>

using namespace std;

class Bank
{
    public:
    int p,r,t,s;
    Bank(int principle,int rate, int tim)
    {
       
        p=principle;
        r=rate;
        t=tim;
    }
    Bank()
    {
       p=20;
       r=20;
       t=20;
    }
    void interest()
    {
        s=p*r*t/100;
        cout<<"Simple Interest: "<<s<<endl;
        
        
    }
};
int main()
{
    int j,k,l;
    cout<<"Enter values of p,r,t"<<endl;
    cin>>j>>k>>l;
    Bank a;
    Bank b(j,k,l);
    a.interest();
    b.interest();
    
    
    return 0;
}
   

