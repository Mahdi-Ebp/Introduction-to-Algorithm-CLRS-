#include<iostream>
using namespace std;

void sort(int a[], int n){
	int t;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n - i - 1; j++)
			if(a[j + 1] < a[j])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
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
	cout << endl;
}
