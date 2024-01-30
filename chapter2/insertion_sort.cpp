#include<iostream>
using namespace std;

void sort(int a[]){
	int t = 0;
	for(int i = 1; i < a.length(); a++)
		for(int j = i - 1; j > 0 && a[j + 1] < a[j]; j--){
			t = a[j + 1];
			a[j + 1] = a[j];
			a[j] = t;
		}
}

int main(){
	cout << "Please enter the number of items in array:" << endl;
	cin >> n;

	int a[n];
	cout << "Please enter the items separeted via <space> or <enter>:" << endl;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a);
	
	cout << "Sorted array:" << endl;
	for(int i = 0; i < n; i++)
		cout << a[i] << '\t';

	return 0;
}

