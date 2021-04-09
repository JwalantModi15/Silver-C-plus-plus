#include<iostream>
#include<array>
#include<algorithm>
#include<ctime>
using namespace std;
int isThere(array <string, 3> a, string s){
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	for(int i=0;i<a.size();i++){
		if(a.at(i)==s){
			return 1;
		}
	}
	return 0;
}
int isWinner(string s1, string s2){
	if(s1 == "STONE" && s2 == "SCISSOR" || s1 == "PAPER" && s2 == "STONE" || s1 == "SCISSOR" && s2 == "PAPER"){
		return 1;
	}
	else if(s2 == "STONE" && s1 == "SCISSOR" || s2 == "PAPER" && s1 == "STONE" || s2 == "SCISSOR" && s1 == "PAPER"){
		return 2;
	}
	else{
		return 0;
	}
}
int main(){
	string s,str;
	int n,n1;
	array <string, 3> arr= {"STONE","PAPER","SCISSOR"};
	cout<<"Enter Your Choice (Stone, Paper, Scissor): ";
	cin>>s;
	while(!isThere(arr, s)){
		cout<<"Enter Valid Choice (Stone, Paper, Scissor): ";
		cin>>s;
	}
	srand(time(0));
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	n = (rand()%3);
	str = arr[n];
	n1 = isWinner(s,str);
	if(n1==1){
		cout<<"You Wins!"<<endl;
	}
	else if(n1==2){
		cout<<"Computer Wins!"<<endl;
	}
	else{
		cout<<"Match Ties!"<<endl;
	}
}


