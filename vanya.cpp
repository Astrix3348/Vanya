#include<iostream>
using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	int arr[n];
	int count = 0;
	

	for(int i=0; i<n; i++){
        cin >> arr[i];
	}
	for(int i=0; i<n; i++){
		count++;
		if(arr[i]>h){
			count = count+1;
		}
	}
	cout << count << endl;

	return 0;
}