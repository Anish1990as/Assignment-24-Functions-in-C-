#include <iostream>
using namespace std;
float area(int);
int area(int, int);
float area(float, float);
int main()
{
    int r, l, w;
    float b, h;
    cout << "enter radius of circle = ";
    cin >> r;
    cout << "area of circle is " << area(r) << endl;
    cout << "******************************" << endl;
    cout << "enter length and width of ractangle" << endl;
    cin >> l >> w;
    cout << "area of ractangle is " << area(l, w) << endl;
    cout << "******************************" << endl;
    cout << "enter base and height of triangle" << endl;
    cin >> b >> h;
    cout << "area of triangle is " << area(b, h);
}
float area(int a)
{
    return 3.14 * a * a;
}

int area(int b, int a)
{
    return a * b;
}

float area(float a, float b)
{
    return (a * b * 0.5);
}
