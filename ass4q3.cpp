// In a C++ program define a class shape containing float type data radius and height and member function getdata ( ), pure virtual
// function volume ( ). Define three derived classes sphere, cylinder and cone and also redefine pure virtual function volume( )
// in each derivedclass so that it gives volume of corresponding solid.

#include <bits/stdc++.h>
#define PI 3.14
#define radius3 radius *radius *radius
#define radius2 radius *radius

using namespace std;

class shape
{
protected:
    float radius, height, vol;

public:
    void getdata()
    {
        cout << "\n Enter the Radius : ";
        cin >> radius;
        cout << "\n Enter the Height : ";
        cin >> height;
    }

    virtual void volume() = 0;
};

class sphere : public shape
{
public:
    void volume()
    {
        vol = (4 * PI * radius3) / 3;
        cout << "\n The Volume of Sphere is  : " << vol;
    }

    void getdata()
    {
        cout << "\n Enter the Radius : ";
        cin >> radius;
    }
};

class cylinder : public shape
{
public:
    void volume()
    {
        vol = (PI * radius2 * height);
        cout << "\n The Volume of Cylinder is : " << vol;
    }
};

class cone : public shape
{
public:
    void volume()
    {
        vol = (1.0 / 3.0) * PI * radius2 * height;
        cout << "\n The Volume of Cone is : " << vol;
    }
};

int main()
{
    sphere sh;
    cylinder cl;
    cone cn;

    sh.getdata();
    sh.volume();

    cout << "\n";

    cl.getdata();
    cl.volume();

    cout << "\n";

    cn.getdata();
    cn.volume();

    return 0;
}