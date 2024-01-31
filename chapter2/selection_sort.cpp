#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int min_position;
	for(int i = 0; i < n - 1; i++){
		min_position = i;
		for(int j = i + 1; j < n; j++)
			if(a[min_position] > a[j])
				min_position = j;
		int t = a[i];
		a[i] = a[min_position];
		a[min_position] = t;
	}

	for(int i = 0; i < n; i++)
		cout << a[i] << "   ";
}
