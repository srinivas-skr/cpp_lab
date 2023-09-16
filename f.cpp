/*Design a C++ program to keep the track of the number of objects of a particular
class type that are inexistence using a static variable. */

#include <iostream>
using namespace std;
class ObjectCounter
{
private:
static int count;
public:
ObjectCounter()
{
count++;
}
~ObjectCounter()
{
count--;
}
static int getCount()
{
return count;
}
};
int ObjectCounter::count = 0;
int main()
{
ObjectCounter obj1;
ObjectCounter obj2;
cout << "Number of objects: " << ObjectCounter::getCount() << endl;
ObjectCounter obj3;
ObjectCounter obj4;
cout << "Number of objects: " << ObjectCounter::getCount() << endl;
return 0;
}