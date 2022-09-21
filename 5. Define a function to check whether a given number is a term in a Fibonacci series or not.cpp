#include <iostream>
using namespace std;
void fib(int);
int main()
{
    cout << "enter a number = ";
    int x;
    cin >> x;
    fib(x);
    return 0;
}
void fib(int x)
{
    int a = -1, b = 1, c, i;
    for (i = 0; i <= i; i++)
    {
        c = a + b;
        if (c > x)
        {
            break;
        }
        if (c == x)
        {
            cout << "Number is term of Fibonacci series";
            break;
        }
        a = b;
        b = c;
        c = 0;
    }
    if (c > x)
        cout << "Number is not term of Fibonacci series";
}


output:-  enter a number = 6
          Number is not term of Fibonacci series
          
          enter a number = 5
          Number is term of Fibonacci series
