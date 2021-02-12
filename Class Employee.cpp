#include<iostream>
using namespace std;
class Employee{
	private:
		char name[50];
		int age;
		float sal;
	public:
	void set(){
		cout<<"Enter name, age and salary: ";
		cin>>name>>age>>sal;
	}	
	void show(){
		cout<<endl<<name<<endl<<age<<endl<<sal;
	}	
};
int main(){
	Employee e;
	e.set();
	e.show();
}
