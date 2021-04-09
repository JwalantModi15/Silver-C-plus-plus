#include<iostream>
#include<ctime>
using namespace std;
int main(){
	int n;
	srand(time(0));
	for(int i=1;i<=10;i++){
		cout<<"Press '1' to Roll a Dice: ";
		cin>>n;
		cout<<1+(rand()%6)<<endl;
	}
}

