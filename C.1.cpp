#include<iostream>
#include<math.h> 
using namespace std;
void reverse(char a[]) {
	int t=0,temp;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	for (int j=0;j<t/2;j++){
	    temp =a[j];
		a[j] = a[t-1-j];
		a[t-1-j] = temp; 
		
	} 
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
	cout << endl;
}
delete_char(char a[], char c) {
	int t=0;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	for (int j=0;j<t;j++){
	    if(a[j]==c){
	    	for (int k=j;k<t;k++){
	    		a[k]=a[k+1];
		}
		if(a[t]==c){
			a[t]=' ';
		}
	}
		
	} 
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
	cout << endl;
}
void pad_right(char a[], int n){
	int t=0;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	if(n>t){
	a[n]='\0';
	for (int j=t;j<n;j++){
	    a[j] = ' ';
	}


	for (int i=0;i<n;i++) {
		cout << a[i] ;
	} 
}else{
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
} 
	cout << endl;

}
void pad_left(char a[], int n){
	int t=0;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	if(n>t){
	a[n]='\0';
	for (int j=0;j<t;j++){
		a[j+n-t]=a[j];
	}
	for (int j=0;j<n-t;j++){
	    a[j] = ' ';
	}
		
for (int i=0;i<n;i++) {
		cout << a[i] ;
	} 
}else{
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
} 
	cout << endl;

}
void truncate(char a[], int n)    {
	int t=0;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	if(n<t){
		a[n]='\0';

	for (int i=0;i<n;i++) {
		cout << a[i] ;
	} 
}else{
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
} 
	cout << endl;
}
bool is_palindrome(char a[]){
		int t=0;
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	for (int j=0;j<t/2;j++){
	    
		if (a[j]!=a[t-1-j]){
			return false; 
		}
		
		
	} 
	return true ; 
}
void trim_left(char a[]) {
	int t, temp; 
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	while (a[0]==' '){ 
		for (int i=0;i<t;i++ ){
			a[i]=a[i+1]; 
		} 
		t--; 
	} 
	for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 
	cout << endl;
}

void trim_right(char a[]) {
	int t; 
	for (int i=0;a[i]!='\0';i++) {
		t++; 
	}
	while (a[t-1]==' '){ 
		a[t-1]='\0'; 
		t--; 
	} for (int i=0;i<t;i++) {
		cout << a[i] ;
	} 

	cout << endl;
}

int main(){
	char a[100];
	char c;
	int n; 
	cout << "a :   " <<  endl; 
	cin >> a;
	reverse(a) ;
	cout << "b :   " <<  endl; 
	cin >> a;
	cin >> c;
	delete_char( a,  c);
	cout << "c :   " <<  endl; 
	cin >> a;
	cin >> n;
	 pad_right(a,  n);
	 cout << "d :   " <<  endl; 
	 cin >> a;
	 cin >> n;
	   pad_left(a,  n);
	 cout << "e: " << endl;
	cin >> a;
	 cin >> n;
	 truncate(a,  n);
	 cout << "f: " << endl;
	cin >> a;
	 cout << is_palindrome(a)<< endl;
	 cout << "g: " << endl;
	cin >> a;
	 trim_left( a) ;
	 
	 cout << "h: " << endl;
	cin >> a;
	 trim_right( a) ;
	return 0; 
} 
