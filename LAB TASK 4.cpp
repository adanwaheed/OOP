#include<iostream>
using namespace std;
class A{
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	protected:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		A(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
                                 //inheritence
    class B:public A{
    	protected:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	public:
		int age;
	void ag(){
		cout<<"Enter The Age ";
		cin>>age;
		cout<<endl;
	}
	private:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		B(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}	
};
class C{
	protected:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	public:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		C(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
                                 //multiple inheritence
class D:public A,B,C{
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	public:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	public:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		D(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
class E{
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	protected:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		E(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
                                 //multilevel inheritence
class F: public E {
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	protected:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		F(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
                                 //hybrid inheritence
class G{
	protected:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	public:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		G(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};
class H : public G{
	protected:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	public:
		int age;
	void ag(){
		cout<<"Enter The Age ";
		cin>>age;
		cout<<endl;
	}
	private:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		H(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};  
class I : public H {
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age ";
		cin>>age;
		cout<<endl;
	}
	protected:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		I(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};  
class J : public G , H , I{
	private:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	public:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	public:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		J(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};    
class K : public G , H , I{
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	private:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	public:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		K(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
}; 
class L : public G , H , I {
	public:
		string name;
	void na(){
		cout<<"Enter Student Name :";
		cin>>name;
		cout<<endl;
	}	
	public:
		int age;
	void ag(){
		cout<<"Enter The Age :";
		cin>>age;
		cout<<endl;
	}
	private:
		int Class;
	void cl(){
		cout<<"Enter The Class :";
		cin>>Class;
		cout<<endl;
	}
	//null constructor
	public:
		L(){
			this->name=" ";
			this->age=0;
			this->Class=0;
		}
};                        
int main(){
	//class
	A a1;
	a1.na();
	//inheritance
    B b1;
    b1.ag();
    //multiple inheritance
    C c1;
    c1.cl();
    D d1;
    d1.na();
    d1.ag();
    d1.cl();
    //multilevel inheritance
    F f1;
    f1.na();
    //hybrid inheritance
    G g1;
    g1.cl();
    H h1;
    h1.ag();
    I i1;
    i1.na();
    J j1;
    j1.ag();
    j1.cl();
    K k1;
    k1.na();
    k1.cl();
    L l1;
    l1.na();
    l1.ag();
}
