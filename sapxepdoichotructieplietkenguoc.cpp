#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		vector<vector<int>> v1;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]>a[j]){
					swap(a[i], a[j]);
				}
			}
			vector<int> v2;
			for(int i=0; i<n; i++){
				v2.push_back(a[i]);
			}
			v1.push_back(v2);
		}
		for(int i=v1.size()-1; i>=0; i--){
			cout << "Buoc " << i+1 << ": ";
			for(int j=0; j<n; j++){
				cout << v1[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
