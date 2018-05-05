#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class User_info
{
private:
    string Name,Job_Title,Adress;
    int ID,Age,Salary,amount;
    uint64_t CNIC;
public:
    User_info()
    {
        cout<<"Enter Personal Information listed Below"<<endl;
        cout<<"Enter Name : ";
        cin>>Name;
        cout<<endl;
        cout<<"Enter Age : ";
        cin>>Age;
        cout<<endl;
        cout<<"Enter ID : ";
        cin>>ID;
        cout<<endl;
        cout<<"Enter Cnic : ";
        cin>>CNIC;
        cout<<endl;
        cout<<"Enter Job Title : ";
        cin>>Job_Title;
        cout<<endl;
        cout<<"Enter Salary : ";
        cin>>Salary;
        cout<<endl;
        cout<<"Note: Use Dots(.) between words in address"<<endl;
        cout<<"Enter Adress : ";
        cin>>Adress;
        cout<<"Enter Loan Amount : " ;
        cin>>amount;

        cout<<endl;



    }
    string getname()
    {
        return Name;
    }
    int getage()
    {
        return Age;
    }
    int getid()
    {
        return ID;
    }
    uint64_t getcnic()
    {
        return CNIC;
    }
    string getjob()
    {
        return Job_Title;
    }
    int getsal()
    {
        return Salary;
    }
    string getadress()
    {
        return Adress;
    }
    int getamount()
    {
        return amount;
    }


};

int main()
{

    User_info u;
    ofstream datafile;
    datafile.open("Data.txt");
    datafile<< u.getname()<<endl;
    datafile<<u.getage()<<endl;
    datafile<<u.getid()<<endl;
    datafile<<u.getcnic()<<endl;
    datafile<<u.getjob()<<endl;
    datafile<<u.getsal()<<endl;
    datafile<<u.getadress()<<endl;
    datafile<<u.getamount()<<endl;
    datafile.close();


}
