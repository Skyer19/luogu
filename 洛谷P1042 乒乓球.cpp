#include<iostream>
using namespace std;
 int score[70000];
 int w=0,l=0;
 int main()
 {
 	char c;
 	int count=0;
 	for(int i=1;cin>>c&&c!='E';i++){
 		count++;
 		if(c=='W')  score[i]=1;
 		else score[i]=-1;
	 }
//	 for(int i=1;i<count;i++){
//	 	cout<<score[i]<<" ";
//	 }
 	 //11分制
	   for(int i=1;;i++){
	   	if(score[i]==1)  w++;
	   	 if(score[i]==-1) l++;
	   	 
			if(score[i]==0){
	   		cout<<w<<":"<<l<<endl;
	   		cout<<endl;
	   		break;
		   }
		   if((w-l>=2||l-w>=2)&&(w>=11||l>=11)){		   	
		   	cout<<w<<":"<<l<<endl;			  
			   w=0;
			   l=0;
		   } 
//		  cout<<w<<":"<<l<<endl; 
	   }
	  //21分制 
	  w=0;l=0;
	   for(int i=1;;i++){
	   	if(score[i]==1)  w++;
	   	 if(score[i]==-1) l++;
	   	else if(score[i]==0){
	   		cout<<w<<":"<<l<<endl;
	   		cout<<endl;
	   		break;
		   }
		   if((w-l>=2||l-w>=2)&&(w>=21||l>=21)){
		   		cout<<w<<":"<<l<<endl;
			   w=0;
			   l=0;
		   } 
	   }

 	return 0;
 }
