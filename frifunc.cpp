#include <bits/stdc++.h>
using namespace std;

class Largest
{
    int a, b, m;
    public:
        void set_data();
        void find_max();
        //friend void find_max(Largest);
};

void Largest::set_data()
{
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
}

void Largest::find_max()
{
    if(a > b) m = a;
    else m = b;

    cout << "Maximum Number is : " << m << endl;
}

// void find_max(Largest t)
// {
//     if(t.a > t.b) t.m = t.a;
//     else t.m = t.b;

//     cout << "Maximum Number is\t" << t.m << endl;
// }

int main()
{
    Largest l;
    l.set_data();
    l.find_max();
    //find_max(l);
    return 0;
}