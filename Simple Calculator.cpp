#include<iostream>
using namespace std;

int main()
{

    int a,b,c,r;

    cout<<"Enter the 1st no. : ";
    cin>>a;

    cout<<"Enter the 2nd no. : ";
    cin>>b;
 do
   {
    cout<<endl;
    cout<<"1. ADDITION "<<endl;
    cout<<"2. SUBTRACTION"<<endl;
    cout<<"3. DIVISION"<<endl;
    cout<<"4. MULTIPLICATION"<<endl;
    cout<<"5. EXIT"<<endl;

    cout<<"Enter your choice : ";
    cin>>c;
 
   
    switch(c)
    {
        case 1 :  r=a+b;
                 cout<<"Sum is : "<< r;
                  break;

        case 2 : r=a-b;
                 cout<<"Difference is : "<<r;
                  break;

        case 3 : r=a/b;
                 cout<<"Result is : "<<r;
                  break;

        case 4 : r=a*b;
                  cout<<"Product is : "<<r;
                  break;   

        case 5 : break;         
    
  
    default: cout<<"Enter the correct choice :";
              break;
    
    }
   } while(c!=5);

    return 0;

}
