#include<iostream>
#include<vector>
#include<map>
#include<array>
#include<ctime>
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

int isThere_vector(vector<int> arr, int n){
	for(int i=0;i<arr.size();i++){
		if(arr[i]==n){
			return 0;
		}
	}
	return 1;
}

vector<string> shuffle_vector(vector<string> arr){
	int t,n;
	vector <string> arr1;
	vector <int> array;
	srand(time(0));
	
	for(t=0;t<arr.size();t++){
		n = rand()%(arr.size());
		while(!isThere_vector(array,n)){
			n = rand()%(arr.size());
		}
		arr1.push_back(arr[n]);
		array.push_back(n);
		
	}
	return arr1;
}

int c = 0;
int random(int a, int b){
	int n;
	if(c==0){
		srand(time(0));
		n = a+rand()%(b+1-a);
		c=1;
	}
	else{
		n = a+rand()%(b+1-a);
	}
	return n;
}

vector<string> map_keys(map<string, string> dict){
	map<string, string> ::iterator ptr;
	vector<string> arr;
	ptr = dict.begin();
	while(ptr!=dict.end()){
		arr.push_back(ptr->first);
		ptr++;
	}
	return arr;
}

