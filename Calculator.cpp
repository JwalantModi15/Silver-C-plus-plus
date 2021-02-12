#include<iostream>
using namespace std;
int main(){
	float a,b;
	int n;
	while(true){
		cout<<"\n1. Enter Value";
		cout<<"\n2. Addition";
		cout<<"\n3. Subtraction";
		cout<<"\n4. Multiplication";
		cout<<"\n5. Division";
		cout<<"\n6. Percentage";
		cout<<"\n7. Exit";
		cout<<"\n Enter Your Choice: ";
		cin>>n;
		switch(n){
			case 1:
				cout<<"\nEnter Two Numbers: ";
				cin>>a>>b;
				break;
			case 2:
				cout<<endl<<a+b;
				break;
			case 3:
				cout<<endl<<a-b;
				break;
			case 4:
				cout<<endl<<a*b;
				break;
			case 5:
				cout<<endl<<a/b;
				break;
			case 6:
				cout<<endl<<(a*b)/100.0;
				break;
			case 7:
				exit(0);
			default:
				cout<<"\nInvalid Input";
		}
	}
}


