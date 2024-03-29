#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;

    public:
        person()
        {
            name="ravi";
            age=26;
        }
        
            void printPerson()
            {
                cout<<"\nName = "<<name<<"\nAge = "<<age<<endl;
            }
};
//derived class
//child class
class emp:public person
{
        int emp_id;
        int sal;

        public:
        emp()
        {
            emp_id=20;
            sal=5000; 
        } 

            void priteEmp()
            {
                cout<<"Emp details are :";
                this->printPerson();
                cout<<"Emp_ID = "<<emp_id<<"\nSalary = "<<sal<<endl;
            }

                void updatename(string newname)
                {
                    this->name=newname;
                }
};
int main()
{
    person p1;
    person *pptr=NULL;
    pptr=&p1;
    pptr->printPerson();

    emp e1;
    emp *eptr=NULL;
    eptr=&e1;
    eptr->printPerson();
    eptr->updatename("Ravee");
    eptr->priteEmp();
    
    emp e2;
    person *pptr=&e2;//base class (person) pointer can hold the address of derived (emp) class
    pptr->printPerson();
    pptr->printPerson();


    cout<<"\n";
    return 0;
}