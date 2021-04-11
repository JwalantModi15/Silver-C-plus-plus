#include<iostream>
using namespace std;

string toUpper(string str){
	string s="";
	for(int i=0;i<str.length();i++){
		if(str[i] >= 97 && str[i] <= 122){
			s = s + (char)(str[i]-32);
//			cout<<s<<endl;
		}
		else if(str[i] >= 65 && str[i] <= 90){
			s = s+str[i];	
		}
		else{
			s = s+str[i];
		}
	}
	return s;
}
string toLower(string str){
	string s="";
	for(int i=0;i<str.length();i++){
		if(str[i] >= 65 && str[i] <= 90){
			s = s + (char)(str[i]+32);
//			cout<<s<<endl;
		}
		else if(str[i] >= 97 && str[i] <= 122){
			s = s+str[i];	
		}
		else{
			s = s+str[i];
		}
	}
	return s;
}

