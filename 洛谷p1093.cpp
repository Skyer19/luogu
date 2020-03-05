#include<iostream>
#include<cmath>
using namespace std;
struct people {
	int id;
	int chinese;
	int math;
	int english;
	int score;

} a[300];
int main() {

	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		a[i].id=i+1;
		cin>>a[i].chinese>>a[i].math>>a[i].english;
		a[i].score=a[i].chinese+a[i].math+a[i].english;
	}
	for(int i=n-1; i>=1; i--) {
		for(int j=0; j<i; j++) {
			if(a[j].score<a[j+1].score) swap(a[j],a[j+1]);

			else if(a[j].score==a[j+1].score&&a[j].chinese!=a[j+1].chinese) {
				if(a[j].chinese<a[j+1].chinese) swap(a[j],a[j+1]);
			}
			else if((a[j].score==a[j+1].score)&&(a[j].chinese=a[j+1].chinese) ){
				if(a[j].id>a[j+1].id) swap(a[j],a[j+1]);
			}

		}
	}
	for(int i=0; i<5; i++)
		cout<<a[i].id<<" "<<a[i].score<<endl;
	cout<<endl;
}

