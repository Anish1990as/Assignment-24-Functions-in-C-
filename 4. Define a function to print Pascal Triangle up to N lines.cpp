#include<iostream>
int factorial(int);
int combination(int,int);
void pascal_triangle(int);
using namespace std;
int main()

{
    int n,r;
    cout<<"Enter number of column for pascal triangle = ";
    cin>>n;
    factorial (n);
    combination (n,r);
    pascal_triangle(n);
    return 0;
}
int factorial (int a)
{
    int b=1;
    while(a)
    {
        b=b*a;
        a--;
    }
    return b;

}
int combination (int x,int y)
{
    return (factorial(x)/factorial(x-y) /factorial(y));
}
void pascal_triangle(int x)
{
    int i,j,k;
    for(i=1;i<=x;i++)
    {
        k=1;
        int r=0;
        for(j=1;j<=2*x-1;j++)
        {
            if(j>=x+1-i && j<=x-1+i && k)
        {
        cout<<""<<combination((i-1),r);
        k=0;
        r++;
    }
    else
    {
        cout<<"";
        k=1;

    }
    }
      cout<<endl;
    }
}


output:- enter number of columns for pascal triangle = 5
         1
       1   1
     1   2   1
   1   3   3   1
 1   4   6   4   1
