#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		set<int> room;
		for(int i=0;i<n;i++){
			int a;
			cin >> a;
			v.push_back(a);
		}
		bool ok=true;
		for(int i=1;i<=n;i++){
			if(room.find(i+v[i%n])!=room.end()){

				ok=false;
				break;
			}
			else {
				room.insert(i+v[i%n]);
			}
		}
		if(ok){
			cout << "YES" << endl;
		}
		else{
			cout << "NO"  << endl;
		}
	}
	return 0;
}