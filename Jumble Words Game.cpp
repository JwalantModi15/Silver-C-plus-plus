#include<iostream>
#include<array>
#include<ctime>
#include "Functions.h"

using namespace std;

int winner(array<string,5> arr, string str, string s) {
	for(int i=0;i<arr.size();i++){
		if((arr[i] == str) && (str == s)){
			return 1;
		}
	}
	return 0;
}

int main(){
	array <string, 5> act = {"APPLE","BANANA","ORANGE","MANGO","PEAR"};
	array <string, 5> jumble = {"PALEP","ABNANA","ANEORG","NAGOM","ARPE"};
	int n;
	string s,str;
	srand(time(0));
	n = rand()%5;
	str = act[n];
	
//	cout<<str;

	cout<<"Solve The Jumble Word: ";
	cout<<jumble[n]<<endl;
	cin>>s;
	s = toUpper(s);
	
	while(!winner(act,s,str)){
		cout<<"Try Again To Solve The Jumble Word: ";
		cout<<jumble[n]<<endl;
		cin>>s;
		s = toUpper(s);
		
	}
	if(winner(act,s,str)){
		cout<<"You Wins!";
	}
	
}

