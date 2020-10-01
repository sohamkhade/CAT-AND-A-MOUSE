#include<iostream>
using namespace std;
int main()
{
    int a,b,c,q;
    cin>>q;int x=0,y=0;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>c;
        x=c-a;
        y=c-b;
        if(y<0)
            y=y*(-1);
        if(x<0)
            x=x*(-1);
        if(x>y)
            cout<<"Cat B"<<endl;
        else if(y>x)
            cout<<"Cat A"<<endl;
        else(x==y)
            cout<<"Mouse C"<<endl;
    }
    return 0;
}
