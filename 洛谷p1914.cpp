#include<iostream>
using namespace std;
int main()
{
	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char b;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int slen=s.length();
	for(int j=0;j<slen;j++)
	{
		b=s[j];
		int num=int(b)-97;
		num=num+n;
		if(num>25)
		{
			num=num-26;
		}
		s[j]=a[num];
		
	}
	cout<<s<<endl;
}
 
