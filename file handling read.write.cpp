#include<iostream>
#include<fstream>
using namespace std;
struct student{
	int sapid;
	int semester;
	float cgpa;
	string name;
}a;
void display()
{
	fstream data;
	data.open("Student.txt",ios::out);
	data<<"Sap ID :"<<a.sapid<<endl;
	data<<"Semester :"<<a.semester<<endl;
	data<<"CGPA :"<<a.cgpa<<endl;
	data<<"Name :"<<a.name<<endl;
	data.close();
	cout<<endl;
	cout<<"student data...."<<endl;
	cout<<endl;
}
int main()
{
int student;
	while (true)
	{
	cout<<"Press 1 For Data Entry "<<endl;
	cout<<"Press 2 For Viewing Data "<<endl;
	cout<<"Press 3 For Terminating Data "<<endl;
	cout<<"Press 4 For Thank You :)"<<endl;
    cout<<endl;
    
	cout<<"Enter a Number :";
	cin>>student;
	cout<<endl;
	
	switch (student)
	{
	case 1:
	cout<<"Enter the Name: ";
	cin>>a.name;
	cout<<"Enter the Semester: ";
	cin>>a.semester;
	cout<<"Enter the CGPA: ";
	cin>>a.cgpa;
	cout<<"Enter the Sap ID: ";
	cin>>a.sapid;
	cout<<endl;
	display();
	break;
	case 2:
		cout<<"The Data Of Student"<<endl;
		cout<<"Name :"<<a.name<<endl;
		cout<<"Semester :"<<a.semester<<endl;
		cout<<"CGPA :"<<a.cgpa<<endl;
		cout<<"Sap ID :"<<a.sapid<<endl;
		cout<<endl;
		break;
	case 3:
	    cout<<"Data Terminated :"<<endl;
		a.sapid=0;
		a.semester=0;
		a.cgpa=0.0;
		a.name='0';
		cout<<endl;
		break;
	case 4:
		cout<<"Thank You :)"<<endl;
		cout<<endl;
		break;
	}
}
	return 0;
}
