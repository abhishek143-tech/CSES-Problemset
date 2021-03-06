#include <bits/stdc++.h>
 
using namespace std;

//constant initialization
const int maxn=2e5+10;
 
//variables used for the current problem
int n,m,k,a[maxn],b[maxn],ans;

void solve() {
	cin >> n >> m >> k;
	for (int i=0;i<n;++i) cin >> a[i];
	for (int i=0;i<m;++i) cin >> b[i];
	sort(a,a+n); sort(b,b+m);
	int i=0,j=0;
	while (i<n && j<m){
		if (abs(a[i]-b[j])<=k){ //Found a suitable apartment for the applicant
			++i; ++j; //Move to the next one.
			++ans;
		}
		else{
			if (a[i]-b[j]>k){ 
				//If the desired apartment size of the applicant is too big
				//Move the "apartment" pointer to the right to find a bigger one
				++j; 
			}
			else{
				//If the desired apartment size is too small
				//Skip that applicant and move to the next person
				++i;
			}
		}
	}
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}