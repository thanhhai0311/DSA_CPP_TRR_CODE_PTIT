#include<bits/stdc++.h>

using namespace std;

int n=10, X[100];

void Try(int i){
	for(int j=0; j<=1; j++){
		X[i]=j;
		if(i==n){
			for(int k=1; k<=n; k++){
				cout << X[k];
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
//	cin >> n;
	Try(1);
}
