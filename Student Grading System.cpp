#include<iostream>
#include<algorithm>

using namespace std;


class Student 
{
   public:
    int s_rno;
    string s_name;
    float s_grade;

   
    void input();
 
};

void Student :: input()
{
    cout<<"Enter the student roll no. : ";
    cin>>s_rno;
    cout<<"Enter the student name : ";
    cin>>s_name;
    cout<<"Enter the student grade : ";
    cin>>s_grade;
}


int main()
{

    int n=0;
    float sum=0,avg=0;
    
    cout<<"Enter the no. of students : ";
    cin>>n;

   Student stu[n];
   
   for(int i=0;i<n;i++)
   {
    cout<<i+1<<"Student record"<<endl;
    stu[i].input();
   }

   for(int i=0;i<n;i++)
   {  
    sum = (sum + stu[i].s_grade);
   }
    avg=sum/n;
    cout<<"Average grade is : "<<avg<<endl;

    cout<<"Maximum grade is : "<<max(stu[0].s_grade,stu[n-1].s_grade)<<endl;
    cout<<"Minimum grade is : "<<min(stu[0].s_grade,stu[n-1].s_grade);
   

    return 0;
}
