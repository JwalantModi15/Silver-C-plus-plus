#include<iostream>
#include<array>
using namespace std;

void printBoard(char [3][3]);
int isThere(array <string, 9>a, string s);
int winner(char arr[3][3], char);
int tie(char arr[3][3]);

int main(){
	char arr[3][3] = {{},{},{}};
	printBoard(arr);
	int r,c,r1,c1,i=0;
	array <string, 9> a = {"1","2","0","0","0","0","0","0","0"};
	string s,s1;
	int n1,n2;
	cout<<"\nPlayer 1 - 'O'"<<endl;
	cout<<"Player 2 - 'X'"<<endl;
	while(1){
		cout<<"\nFor Player 1, Enter Row and Column: ";
		cin>>r>>c;
		s = to_string(r)+to_string(c);
		n1 = isThere(a,s);
		while(r<1 || r>3 || c<1 || c>3 || n1==1){
			cout<<"Enter Valid Row and Column: ";
			cin>>r>>c;	
			s = to_string(r)+to_string(c);
			n1 = isThere(a,s);
		}
		a[i] = s;
		i++;
		arr[r-1][c-1] = 'O';
		
		printBoard(arr);
		if(winner(arr,'O')){
			cout<<"\nPlayer 1 Wins!";
			break;
		}
		if(tie(arr)){
			cout<<"\nMatch Ties!";
			break;
		}
		
		cout<<"\nFor Player 2, Enter Row and Column: ";
		cin>>r1>>c1;
		s1 = to_string(r1)+to_string(c1);
		n2 = isThere(a,s1);
		while(r1<1 || r1>3 || c1<1 || c1>3 || n2==1){
			cout<<"Enter Valid Row and Column: ";
			cin>>r1>>c1;
			s1 = to_string(r1)+to_string(c1);
			n2 = isThere(a,s1);	
		}
		a[i] = s1;
		i++;
		arr[r1-1][c1-1] = 'X';
		printBoard(arr);
		if(winner(arr,'X')){
			cout<<"\nPlayer 2 Wins!";
			break;
		}
		if(tie(arr)){
			cout<<"\nMatch Ties!";
			break;
		}
		
	}
}
void printBoard(char arr[3][3]){
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<" "<<arr[i][j];
			if(j<2) {
				cout<<" |";
			}
		}
		if(i<2) {
			cout<<endl;
			cout<<"---+---+---"<<endl;
		}
	}
}
int isThere(array <string, 9>a, string s){
	int i;
	for(i=0;i<a.size();i++){
		if(a.at(i) == s){
			return 1;
		}
	}
	return 0;
}

int winner(char arr[3][3], char ch){
	return( arr[0][0] == ch && arr[0][1] == ch && arr[0][2] == ch||
		    arr[1][0] == ch && arr[1][1] == ch && arr[1][2] == ch||
		    arr[2][0] == ch && arr[2][1] == ch && arr[2][2] == ch||
			arr[0][0] == ch && arr[1][0] == ch && arr[2][0] == ch||
			arr[0][1] == ch && arr[1][1] == ch && arr[2][1] == ch||
			arr[0][2] == ch && arr[1][2] == ch && arr[2][2] == ch||
			arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch||
			arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch);
}
int tie(char arr[3][3]){
	return( arr[0][0] != '\0' && arr[0][1] != '\0' && arr[0][2] != '\0'&&
		    arr[1][0] != '\0' && arr[1][1] != '\0' && arr[1][2] != '\0'&&
		    arr[2][0] != '\0' && arr[2][1] != '\0' && arr[2][2] != '\0'&&
			arr[0][0] != '\0' && arr[1][0] != '\0' && arr[2][0] != '\0'&&
			arr[0][1] != '\0' && arr[1][1] != '\0' && arr[2][1] != '\0'&&
			arr[0][2] != '\0' && arr[1][2] != '\0' && arr[2][2] != '\0'&&
			arr[0][0] != '\0' && arr[1][1] != '\0' && arr[2][2] != '\0'&&
			arr[0][2] != '\0' && arr[1][1] != '\0' && arr[2][0] != '\0');
}

