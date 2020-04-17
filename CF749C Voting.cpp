#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<deque>
#include<queue>
#include<algorithm>
using namespace std;
int n;
deque<char> p;
int main() {
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		char c;
		cin>>c;
		p.push_back(c);
	}

	int i=0;
	while(p.size()!=1) {
		if(i>=p.size()) i=0;
		if(p[i]=='D') {
			for(deque<char>::iterator it=p.begin(); it!=p.end(); it++) {
				if(*it=='R') p.erase(it);
			}
		}

		else {
			for(deque<char>::iterator it=p.begin(); it!=p.end(); it++) {
				if(*it=='D') p.erase(it);
			}
		}
		i++;

	}
	cout<<p.front();
}
