#include<iostream>
#include "Functions.h"
using namespace std;

void lowerTri(int r, int c){
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(j<=i){
				arr[i][j] = random(1,9);
			}
			else{
				arr[i][j] = 0;	
			}

		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void triDia(int r, int c){
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j){
				arr[i][j] = random(1,9);
			}
			else if(i==j+1){
				arr[i][j] = random(1,9);	
			}
			else if(j==i+1){
				arr[i][j] = random(1,9);
			}
			else{
				arr[i][j] = 0;
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void upperTri(int r, int c){

	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=i;j<c;j++){
			arr[i][j] = random(1,9);

		}
		for(int k=0;k<i;k++){
			arr[i][k] = 0;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n,r,c;
	
	while(true){
		cout<<"\n 1. For Lower Triangular Sparse Matrix";
		cout<<"\n 2. For Upper Triangular Sparse Matrix";
		cout<<"\n 3. For Tridiagonal Triangular Sparse Matrix";
		cout<<"\n 4. Exit";
		cout<<"\n Enter Your Choice: ";
		cin>>n;
		while(n!=1 && n!=2 && n!=3 && n!=4){
			cout<<"\n 1. For Lower Triangular Sparse Matrix";
			cout<<"\n 2. For Upper Triangular Sparse Matrix";
			cout<<"\n 3. For Tridiagonal Triangular Sparse Matrix";
			cout<<"\n Enter Your Choice: ";
			cin>>n;
		}
		cout<<endl;
		
		cout<<endl;
		if(n==1){
			cout<<"Enter rows and columns: ";
			cin>>r>>c;
			while(r!=c){
				cout<<"Enter equal number of rows and columns: ";
				cin>>r>>c;
			}
			cout<<endl;
			lowerTri(r,c);
		}
		else if(n==2){
			cout<<"Enter rows and columns: ";
			cin>>r>>c;
			while(r!=c){
				cout<<"Enter equal number of rows and columns: ";
				cin>>r>>c;
			}
			cout<<endl;
			upperTri(r,c);
		}
		else if(n==3){
			cout<<"Enter rows and columns: ";
			cin>>r>>c;
			while(r!=c){
				cout<<"Enter equal number of rows and columns: ";
				cin>>r>>c;
			}
			cout<<endl;
			triDia(r,c);
		}
		else{
			exit(0);
		}
	}
}

