#include<iostream>
using namespace std;
int main(){
	int a, b;
	char c;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	cout<<"Enter a Symbol: ";
	cin>>c;
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
		cout<<(float)a/(float)b;
		break;
		case '%':
		cout<<((float)a/(float)b)*100.0;
		break;	
				
	}
}
