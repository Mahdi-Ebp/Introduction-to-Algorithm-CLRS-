#include<iostream>
using namespace std;

void sort(int a[], int n){
	if(n == 1)
		return;

	int b[n - 1], i, t = a[n - 1];
	for(i = 0; i < n - 1; i++)
		b[i] = a[i];
	
	sort(b, n - 1);
	for(i = 0; b[i] < t && i < n - 1; i++)
		a[i] = b[i];
	a[i] = t;
	i++;
	for(i; i < n; i++)
		a[i] = b[i - 1];
}	

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, n);
	for(int i = 0; i < n; i++)
		cout << a[i] << '\t';
}
