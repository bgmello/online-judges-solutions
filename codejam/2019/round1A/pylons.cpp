#include<bits/stdc++.h>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

typedef long long ll;
const int N = 410;

vector<int> neibor[N];
int adj[N][N];
int path[N];
int r, c;
set<int> inPath;

bool hamCycleUtil(int pos) {

	if (pos == r * c)
		return adj[path[pos - 1]][path[0]];

	for (int v : neibor[path[pos - 1]])
	{
		if (inPath.find(v) == inPath.end())
		{
			path[pos] = v;
			inPath.insert(v);

			if (hamCycleUtil(pos + 1)) return true;

			inPath.erase(v);

			path[pos] = -1;
		}
	}
	return false;
}

bool hamCycle() {
	path[0] = 0;
	inPath.insert(0);
	return hamCycleUtil(1);
}

int main() {

	cin.tie(0), ios_base::sync_with_stdio(false);
	int t, case_ = 0;
	cin >> t;
	while (t--) {
		case_++;
		cin >> r >> c;

		inPath.clear();

		for (int i = 0; i < r * c; i++)neibor[i].clear();

		for (int i = 0; i < r * c; i++) {
			path[i] = -1;
			for (int j = i + 1; j < r * c; j++) {
				int ir = i % r, ic = i / r;
				int jr = j % r, jc = j / r;
				if ((ir != jr) and (ic != jc) and ((ir - ic) != (jr - jc)) and ((ir + ic) != (jr + jc))) {
					adj[i][j] = 1;
					adj[j][i] = 1;
					neibor[i].push_back(j);
					neibor[j].push_back(i);
				}
				else {
					adj[i][j] = 0;
					adj[j][i] = 0;
				}
			}
		}


		if (!hamCycle())cout << "Case #" << case_ << ": " << "IMPOSSIBLE" << endl;
		else {
			cout << "Case #" << case_ << ": " << "POSSIBLE" << endl;
			for (int i = 0; i < r * c; i++) {
				int ir = path[i] % r + 1, ic = path[i] / r + 1;
				cout << ir << " " << ic << endl;
			}
		}
	}
	return 0;
}

