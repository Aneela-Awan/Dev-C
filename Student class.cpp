#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		string Name;
		int Rollno;
		int Grade;
	public:
		void setter(string& Sname, int& Srollno, int& Sgrade){
			Name = Sname;
			Rollno = Srollno;
			Grade = Sgrade;
		}
		
		void getter(string Gname, int Grollno, int Ggrade){
			Name = Gname;
			Rollno = Grollno;
			Grade = Ggrade;
		}
		void display(){
			cout<<"Name :"<<endl;
			cout<<"Roll No :"<<endl;
			cout<<"Grades :"<<endl;
		}
};
int main(){
	string Name;
	int Rollno;
	int Grade;
	Student st;
    
	st.setter(Name , Rollno , Grade);
	st.getter("Aneela" , 12 , 90);
	st.display();	
	
	cout<<Name<<" "<<Rollno<<" "<<Grade;
	cout<<endl;
}
