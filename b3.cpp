/*Design a C++ program to convert dollar to rupees, euro to
rupees and pound to rupees using pure virtual functions. 
1 dollar = 54.3 Rs, 1 pound = 81.1Rs, 1 euro = 70Rs */


#include<iostream>
using namespace std;
class rs
{
public:
float rupees;
virtual void conv()=0;
void disp()
{
cout<<" is eqvivalent to "<<rupees<<" INR \n";
}
};
class doll:public rs
{
float dol;
public:
void conv()
{
cout<<"Enter currncy in dollar \n";
cin>>dol;
rupees=54.3*dol;
cout<<" "<<dol<<" in dollar ";
disp();
}
};
class euro:public rs
{
float er;
public:
void conv()
{
cout<<"Enter currency in Euro \n";
cin>>er;
rupees=70.2*er;
cout<<" "<<er<<" in euro ";
disp();
}
};
class pd:public rs
{
float pnd;
public:
void conv()
{
cout<<"Enter currency in pound \n";
cin>>pnd;
rupees=81.1*pnd;
cout<<" "<<pnd<<" in pound ";
disp();
}
};
int main()
{
int c;
doll d;
euro e;
pd p;
cout<<"\t\t\t Currency conversion \n";
while(1)
{
cout<<"1.$ to Rs. 2.Euro to Rs. 3.Pound to Rs. 4.Exit \n";
cin>>c;
switch(c)
{
case 1:d.conv();
break;
case 2:e.conv();
break;
case 3:p.conv();
break;
default:return 0;
}
}
return 0;
}

using namespace std;
template <class X> void bubble(X *items,int count)
{
register int a, b;
X t;
for(a=1; a<count; a++)
for(b=count-1; b>=a; b--)
if(items[b-1] > items[b])
{
// exchange elements
t = items[b-1];
items[b-1] = items[b];
items[b] = t;
}
}
int main()
{
int iarray[7] = {7, 5, 4, 3, 9, 8, 6};
double darray[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
bubble(iarray, 7);
bubble(darray, 5);
cout << "Here is sorted integer array: ";
for(int i=0; i<7; i++)
cout << iarray[i] << ' ';
cout << endl;
cout << "Here is sorted double array: ";
for(int i=0; i<5; i++)
cout << darray[i] << ' ';
cout << endl;
int i;
cin>>i;
return 0;
}