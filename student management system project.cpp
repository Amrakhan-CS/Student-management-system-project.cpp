#include<iostream>
using namespace std;
	class student{
		public:
			int rollno;
			string name;
			string F_name;
			int semester; 
		void add_record(){
			cout<<"Add student details :"<<endl;
			cout<<"Enter student roll number :"<<endl;
			cin>>rollno;
			cout<<"Enter student name :"<<endl;
			cin>>name;
			cout<<"Enter student father name :"<<endl;
			cin>>F_name;
			cout<<"In which semester the student are :"<<endl;
			cin>>semester;
		}
		void display(){
			cout<<"student record"<<endl;
			cout<<"Student roll no ::"<<rollno<<endl;
			cout<<"student name ::"<<name<<endl;
			cout<<"student father name ::"<<F_name<<endl;
			cout<<"In semester ::"<<semester<<endl;
		}
		void search(){
			int searchroll;
			cout<<"Enter student roll no :"<<endl;
			cin>>searchroll;
			if(searchroll==rollno){
			cout<<"student found! "<<endl;
			cout<<"student name ::"<<name<<endl;
			cout<<"student father name ::"<<F_name<<endl;
			cout<<"In semester ::"<<semester<<endl;
		}else {
			cout<<"student not found!"<<endl;}
		}
	};

int main(){
	student s;
	int choice;
	do{
	cout<<"----------STUDENT MANAGEMENT SYSTEM----------"<<endl;
	cout<<"Enter your choice :"<<endl;
	cout<<"1. Add student record "<<endl;
	cout<<"2. Veiw all student record "<<endl;
	cout<<"3. Search student record "<<endl;
	cout<<"4. Exit "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
		s.add_record();	
		break;
		case 2:
		s.display();
		break;
		case 3:
		s.search();
		break;
		case 4:
		cout<<"Thank you "<<endl;
		break;
		default:
			cout<<"Invalid selection please try again "<<endl;}
	}while(choice !=4);
	return 0;
	}
