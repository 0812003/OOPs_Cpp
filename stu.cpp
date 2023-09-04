
#include<iostream>
#include<string.h>
using namespace std;

class student
{
string name,address,year;
int rollno;
static int count;
long mobile;
public:
student()
{
 name="Soham";
 address="Pune";
 rollno=13;
 year="SY CSBS";
 mobile=9420193446;
}
inline static void incount()
{
     count++;
 }
 inline static void showount()
{
     cout<<"The no. of student:- "<<count<<endl;
 }
 ~student()
 {
 cout<<"Student detailed closed...."<<endl;
}
friend class per_info;
};
class per_info
{
string lic,dob,blood;
public:
per_info()
{
 lic="SOHA2003";
 dob="08 dec 2003";
 blood="AB+";
 }
 ~per_info()
 {
 cout<<"Personal detailed closed"<<endl;
 }
 friend class student;
};
student::student(student&obj)
{
     this->name=obj.name;
     this->address=obj.address;
     this->rollno=obj.rollno;
     this->year=obj.year;
     this->mobile=obj.mobile;
}
per_info::per_info(per_info&obj)
{
     lic=obj.lic;
     dob=obj.dob;
     blood=obj.blood;
}
void student::create(per_info)
{
    cout<<"Enter Name:- "<<endl;
    cin>>name;
    cout<<"Enter address:- "<<endl;
    cin>>address;
    cout<<"Roll No.:- ";
    cin>>rollno;
    cout<<"Year"<<endl;
    cin>>year;
    cout<<"Mobile:- "<<endl;
    cin>>mobile;
    cout<<"Enter Lic.No.:- "<<endl;
    cin>>obj.lic;
    cout<<"Enter Date of Birth:- "<<endl;
    cin>>obj.dob;
    cout<<"Enter Blood Group:- "<<endl;
    cin>>obj.blood;
}
void student::display(per_info)
{
    cout<<"Name:- "<<name<<endl;
    cout<<"address:- "<<address<<endl;
    cout<<"Roll No.:- "<<rollno<<endl;
    cout<<"year:- "<<year<<endl;
    cout<<"Mobile:- "<<mobile<<endl;
    cout<<"Enter Lic.No.:- "<<lic.obj<<endl;
    cout<<"Enter Date of Birth:- "<<obj.dob<<endl;
    cout<<"Enter Blood Group:- "<<obj.blood<<endl;
}
int main()
{
int n;		
 int ch;
 char ans;
 
 cout<<"\nENTER NO OF STUDENTS :"<<endl;
 cin>>n;
 
 student *sobj=new student[n]; 
 per_info *pobj=new per_info[n];	
 
 do
 {
	cout<<("\n Menu \n 1. Create Database \n 2. Display Databse \n 3. Copy Constructor\n 4. Default Constructor \n 5. Delete     (Destructor");
	cout<<"\n Enter your Choice: ";
	cin>>ch;
	switch(ch)
	{
	case 1: 
	{
		for(int i=0;i<n;i++)
		{
		       sobj[i].create(pobj[i]);
		       sobj[i].incount();
 
		}
		break;
	}
		
 	case 2: 
  	{
			sobj[0].showcount(); 	
		
			for(int i=0;i<n;i++)
			{
				sobj[i].display(pobj[i]);
			}
			break;
    	 }
    	
	case 3: 
	{
			student obj1;
			per_info obj2;
			obj1.create(obj2);
			student obj3(obj1);	
 
			//per_info obj4(obj2);		
			cout<<"\n Copy Constructor is called ";
			obj3.display(obj4);
			break;
 	}
        
	case 4: 
 	{
			student obj1;	
			per_info obj2;	
			cout<<"\n Default Constructor is called ";
			obj1.display(obj2);
			break;
 	}
 		
	case 5: 
         {
			delete [] sobj;			
 		     delete [] pobj;
 		     break;		
 	}				
 	cout<<"\n Want to continue:(y/n)"	     ;
 	cin>>ans;
  }while(ans=='y') 	;
 
 
 return 0;
}

