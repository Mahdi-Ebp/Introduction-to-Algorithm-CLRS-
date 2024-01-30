#include<iostream>
using namespace std;

void decreasing_sort(int a[], int n){
	int t = 0;
	for(int i = n - 2; i >= 0; i--)
	{
		t = a[i];
		int j;
		for(j = i + 1; j < n && t > a[j]; j++)
			a[j - 1] = a[j];
		a[j - 1] = t;
	}
}

void sort(int a[], int n){
	int t = 0;
	for(int i = 1; i < n; i++)
	{
		t = a[i];
		int j;
		for(j = i - 1; j >= 0 && t < a[j]; j--)
			a[j + 1] = a[j];
		a[j + 1] = t;
	}
}

int main(){
	cout << "Please enter the number of items in array:" << endl;
	int n;
	cin >> n;

	int a[n], b[n];
	cout << "Please enter the items separeted via <space> or <enter>:" << endl;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	sort(a, n);
	decreasing_sort(b, n);
	
	cout << "Sorted array:" << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << '\t';

	cout << endl;

	cout << "Decreasing_sorted array:";
	for(int i = 0; i < n; i++)
		cout << b[i] << '\t';


	return 0;
}

