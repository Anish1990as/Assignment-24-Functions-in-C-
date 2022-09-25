#include <iostream>
int max();
float max(float);
using namespace std;
int main()
{
    float b, y;
    int x;
    x = max();
    cout << "enter a real numner = " << endl;
    cin >> b;
    y = max(b);
    cout << "maximum is = " << (x > y ? x : y);
}
int max()
{
    int a;
    cout << "enter a number" << '\n';
    cin >> a;
    return a;
}
float max(float b)
{
    return b;
}
