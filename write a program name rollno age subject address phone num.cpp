#include<iostream>
using namespace std;
class firstdata
{
    char Name[20];
    int Rollno;
    int Age;
    
    public: void getbio();
            void showbio();
};

class seconddata
{
    char Subject1[100];
    float Marks1;
    char Subject2[100];
    float Marks2;
   
    
    public: void mark();
            void showmark();
};
    
class finaldata:public firstdata,public seconddata
{
    long int Phno; 
    char Address[20];
    public: void showaddres();
            void showphone();
        
};
    
    void firstdata::getbio()
    {
        cout<<"Enter Name="<<endl;
        cin>>Name;
        cout<<"Enter Rollno="<<endl;
        cin>>Rollno;
        cout<<"Enter Age="<<endl;
        cin>>Age;
    }
    void firstdata::showbio()
    {
        cout<<Name<<endl;
          cout<<Rollno<<endl;
            cout<<Age<<endl;
        
    }
    void seconddata::mark()
    {
        cout<<"Enter Subject1="<<endl; 
        cin>>Subject1;
        cout<<"Enter Marks1="<<endl; 
        cin>>Marks1; 
        cout<<"Enter Subject2="<<endl; 
        cin>>Subject2;
        cout<<"Marks2="<<endl; 
        cin>>Marks2; 
        
    }
    void seconddata::showmark()
    {
        cout<<"Subject1="<<Subject1<<endl;
        cout<<"Marks1="<<Marks1<<endl;
        cout<<"Subject2="<<Subject2<<endl;
        cout<<"Marks2="<<Marks2<<endl;
         
    }
    void finaldata::showaddres()
    {
        cout<<"Enter Address="<<endl;
        cin>>Address;
        cout<<"Enter Phno="<<endl;
        cin>>Phno;
    }
        
    void finaldata::showphone()
    {
         cout<<"Address="<<Address<<endl;
         cout<<"Phno="<<Phno<<endl;
    }
        int main()
        {
            finaldata obj;
            obj.getbio();
            obj.showbio();
            obj.mark();
            obj.showmark();
            obj.showaddres();
            obj.showphone();
        }