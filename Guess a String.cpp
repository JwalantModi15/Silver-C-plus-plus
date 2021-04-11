#include<iostream>
#include<array>
#include<ctime>
#include"String.h"
using namespace std;

int check(array<string, 5> arr, string str){
	for(int i=0;i<arr.size();i++){
		if(arr.at(i)==str){
			return 1;
		}
	}
	return 0;
}

int main(){
	array<string, 5> arr = {"APPLE","BANANA","ORANGE","MANGO","PEAR"};
	srand(time(0));
	int n = rand()%5,trial=1,total = 5;
	string s,str;
	str = arr[n];
	cout<<"'APPLE', 'BANANA', 'ORANGE', 'MANGO', 'PEAR'"<<endl;
	cout<<"Guess a String From Above Mention Strings: ";
	cin>>s;
	s = toUpper(s);
	trial++;
	
//	cout<<endl<<str<<endl;

	while(s != str && trial<=total){
		if(!check(arr,s)){
			cout<<"\n'APPLE', 'BANANA', 'ORANGE', 'MANGO', 'PEAR'"<<endl;
			cout<<"Enter a String From Above Mention Strings: ";
			cin>>s;
			s = toUpper(s);
		}
		else{
			cout<<"\n'APPLE', 'BANANA', 'ORANGE', 'MANGO', 'PEAR'"<<endl;
			cout<<"It's Wrong"<<endl;
			cout<<"\nRemaining Trial: "<<total - trial+1<<endl;
			cout<<"\nOnce Again Enter a String From Above Mention Strings: ";
			cin>>s;
			s = toUpper(s);
			trial++;
		}
	}
	if(s == str && trial<=total+1){
	cout<<"You Wins!";
	}
	else if (trial > total){
		cout<<"You Lose!";
	}
	
}

