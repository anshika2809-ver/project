#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class student
{
 int rollno;
 char name[50];
 int p_marks, c_marks, m_marks, e_marks, cs_marks;
 double per;
 char grade;
 void calculate(); //function to calculate grade
public:
 void getdata(); //function to accept data from user
 void showdata() const; //function to show data on screen
 void show_tabular() const;
 int retrollno() const;
}; //class ends here


void student::calculate()
{
 per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
 if(per>=60)
 grade='A';
 else if(per>=50)
 grade='B';
 else if(per>=33)
 grade='C';
 else
 grade='F';
}

void student::getdata()
{
 cout<<"\nEnter The roll number of student ";
 cin>>rollno;
 cout<<"\n\nEnter The Name of student ";
 cin.ignore();
 cin.getline(name,50);
 cout<<"\nEnter The marks in physics out of 100 : ";
 cin>>p_marks;
 cout<<"\nEnter The marks in chemistry out of 100 : ";
 cin>>c_marks;
 cout<<"\nEnter The marks in maths out of 100 : ";
 cin>>m_marks;
 cout<<"\nEnter The marks in english out of 100 : ";
 cin>>e_marks;
 cout<<"\nEnter The marks in computer science out of 100 : ";
 cin>>cs_marks;
 calculate();
}

void student::showdata() const
{
 cout<<"\nRoll number of student : "<<rollno;
 cout<<"\nName of student : "<<name;
 cout<<"\nMarks in Physics : "<<p_marks;
 cout<<"\nMarks in Chemistry : "<<c_marks;
 cout<<"\nMarks in Maths : "<<m_marks;
 cout<<"\nMarks in English : "<<e_marks;
 cout<<"\nMarks in Computer Science :"<<cs_marks;
 cout<<"\nPercentage of student is  :"<<per;
 cout<<"\nGrade of student is :"<<grade;
}

void student::show_tabular() const
{
 cout<<rollno<<setw(6)<<" "<<name<<setw(10)<<p_marks<<setw(4)<<c_marks<<setw(4)<<m_marks<<setw(4)
 <<e_marks<<setw(4)<<cs_marks<<setw(8)<<per<<setw(6)<<grade<<endl;
}

int  student::retrollno() const
{
 return rollno;
}
