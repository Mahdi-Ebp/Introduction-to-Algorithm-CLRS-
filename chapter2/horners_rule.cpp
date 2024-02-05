#include<iostream>
using namespace std;

int main(){
	int n, base;
	cin >> n >> base;

	char s[n];
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		a[i] = s[i] - '0';
	}

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum = sum * base + a[i];

	cout << sum << endl;
}
