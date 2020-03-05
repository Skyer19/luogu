#include<iostream>
#include<cmath>
//2020/2/6
using namespace std;
struct student{
	string name;
	int score;//期末平均成绩
	int classscore;//班级评议成绩
	char ifchairman;//是否是学生干部
	char ifwest;//是否是西部省份学生
	int paper; 
	int grade;
}s[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].score>>s[i].classscore>>s[i].ifchairman>>s[i].ifwest>>s[i].paper;
	}
	for(int i=0;i<n;i++){
		if(s[i].score>80&&s[i].paper>=1)   s[i].grade+=8000;
		if(s[i].score>85&&s[i].classscore>80)  s[i].grade+=4000;
		if(s[i].score>90)  s[i].grade+=2000;
		if(s[i].score>85&&s[i].ifwest=='Y')  s[i].grade+=1000;
		if(s[i].classscore>80&&s[i].ifchairman=='Y') s[i].grade+=850;
	}
	int max=s[0].grade,sum=0;
	string maxn=s[0].name;
	for(int i=0;i<n;i++){
	sum+=s[i].grade;
		if(s[i].grade>max) {
			max=s[i].grade;
			maxn=s[i].name;
		}			
	}
	cout<<maxn<<endl;
	cout<<max<<endl;
	cout<<sum<<endl;
	return 0;
} 
