#include<iostream>
using namespace std;
void f(int xval)
{
 int x;
 x = xval;
cout << &x << endl;
}
void g(int yval)
{
 int y;
 y=yval;
 cout << &y << endl;
}
int main()
{
 f(7);
 g(11);
 return 0;
 // hai bien deu co cung dia chi vi deu la bien dia phuong dau tien cua ham 
} 
