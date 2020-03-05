#include<iostream>
#include<cmath>
using namespace std;
struct people {
	int id;
	int score;

} a[5000];
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i].id>>a[i].score;
	}
	for(int i=n-1; i>=1; i--) {
		for(int j=0; j<i; j++) {
			if(a[j].score<a[j+1].score) {
				swap(a[j],a[j+1]);
			}
			else if(a[j].score==a[j+1].score) {
				if(a[j].id>a[j+1].id) swap(a[j].id,a[j+1].id);
			}
		}
	}
	int newm=(floor(m*1.5));
	for(int i=newm; i<n; i++) {
		if(a[i].score==a[newm-1].score)  newm++;
		else  break;
	}
	cout<<a[newm-1].score<<" "<<newm<<endl;
	for(int i=0; i<newm; i++)
		cout<<a[i].id<<" "<<a[i].score<<endl;
	cout<<endl;
	return 0;

}
