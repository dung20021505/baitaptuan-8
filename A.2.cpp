#include<iostream>
using namespace std;
int main( )
{
 // a 
 char a[4] = "abc";
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 // b 
 int  b[5] = { 1,2,3,4,5};
	for (int* cp = b; (*cp) != '\0'; cp ++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
// c
double c[5] = { 1,2,3,4,5 };
	for (double* cp = c; (*cp) != '\0'; cp ++) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
//d
double d[5] = { 1,2,3};
	for (double* cp = d; (*cp) != '\0'; cp +=2) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}

 return 0;
}
