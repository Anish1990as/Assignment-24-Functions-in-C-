#include <iostream>
void add(int, int);
void add(float, float);
void add(int, float);
using namespace std;
int main()
{
    int a, b, c;
    float x, y, z;
    cout << "enter 2 integer numbers" << endl;
    cin >> a >> b;
    add(a, b);
    cout << "enter 2 real numbers" << endl;
    cin >> x >> y;
    add(x, y);
    cout << "enter a integer number and a real number" << endl;
    cin >> c >> z;
    add(c, z);
}
void add(int a, int b)
{
    cout << "sum of two integer numbers = " << a + b << endl;
}
void add(float a, float b)
{
    cout << "sum of two real numbers = " << a + b << endl;
}
void add(int a, float b)
{
    cout << "sum of a integer and a real number = " << a + b << endl;
}
