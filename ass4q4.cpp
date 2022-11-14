// Write a C++ program to calculate the area of rectangle, square and circle using constructor overloading that accepts input from
// the user and then shows the desired result.

#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

class area
{
private:
    int sq_area, rect_area;
    float ci_area;

public:
    area(float radius)
    {
        ci_area = PI * radius * radius;
        cout << "\nArea of Circle is : " << ci_area;
    }

    area(int size)
    {
        sq_area = size * size;
        cout << "\nArea of Square is : " << sq_area;
    }

    area(int length, int breadth)
    {
        rect_area = length * breadth;
        cout << "\nArea of Rectangle is : " << rect_area << "\n";
    }
};

int main()
{
    int s, l, b;
    float r;

    cout << "\nEnter the value of Radius of Circle : ";
    cin >> r;
    cout << "\nEnter the value of side of Square : ";
    cin >> s;
    cout << "\nEnter the length of Rectangle : ";
    cin >> l;
    cout << "\nEnter the bredth of Rectangle : ";
    cin >> b;

    area cl(r);
    area sq(s);
    area rect(l, b);

    return 0;
}