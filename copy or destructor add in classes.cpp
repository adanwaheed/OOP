#include<iostream>
using namespace std;
class student
{
	public:
	int *sapid;
	int *_sapid;
	int semester;
	string name;
	float cgpa;
	student()
	{
		sapid=new int(0);
		int semester=0;
		char name=' ';
		float cgpa=0.0;
			
	}
	student(int _sapid,string name,int smester,float cgpa)
	{
		*sapid=_sapid;
		this->name=name;
		this->semester=semester;
		this->cgpa=cgpa;
	}
	student(int _sapid,string name)
	{
		*sapid=_sapid;
		this->name=name;
	}

	student(int _sapid,string name,float gpa)
	{
		*sapid=_sapid;
		this->name=name;
		this->cgpa=cgpa;
	}
		//copy constructor
	student (student &std)
	{
		sapid=std.sapid;
		name=std.name;
		semester=std.semester;
		cgpa=std.cgpa;
		
	}
	//destructor
    ~student(){
    	 delete sapid;
		cout<<"destructor of student is running:"<<endl;
	
	}
};
int main()
{
	student std();
	student s1;
	s1._sapid=45426;
	s1.name="ADAN";
	s1.semester=2;
	s1.cgpa=3.03;
	student s2(s1);
	cout<<"Details of Student 1 : "<<endl;
	cout<<"sap id:"<<s1._sapid<<endl;
	cout<<"name:"<<s1.name<<endl;
	cout<<"semester"<<s1.semester<<endl;
	cout<<"cgpa:"<<s1.cgpa<<endl;

	return 0;	
}
