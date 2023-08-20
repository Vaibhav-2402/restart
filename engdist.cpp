#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};

void engdist(Distance);

int main()
{
    
    Distance d1,d2;
    
    cout<<"Enter feet"<<endl; cin>>d1.feet;
    cout<<" Enter inches"<<endl; cin>>d1.inches;
    cout<<"Enter feet"<<endl; cin>>d2.feet;
    cout<<" Enter inches"<<endl; cin>>d2.inches;
    cout<<endl<<"d1=";
    engdist(d1);
    cout<<endl<<"d2=";
    engdist(d2);
    return 0;
}
void engdist(Distance dd)
{
    cout<<endl<<dd.feet<<"  "<<dd.inches;
}