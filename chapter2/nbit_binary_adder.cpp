#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Please enter the n:" << endl;
	cin >> n;

	int a[n + 1], b[n + 1];
	cout << "Enter the first binary number:" << endl;
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	cout << "Enter the second binary number:" << endl;
	for(int i = 1; i <= n; i++)
		cin >> b[i];


	int c[n + 1], carryout = 0;
	for(int i = n; i > 0; i--){
		c[i] = (a[i] + b[i] + carryout)%2;
		carryout = (a[i] + b[i] + carryout)/2;
	}
	
	c[0] = carryout;

	cout << "Answer:";
	for(int i = 0; i <= n; i++)
		cout << c[i];
	
}

