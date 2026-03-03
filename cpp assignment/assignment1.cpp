#include<iostream>
#include<string>
#include<vector>
using namespace std;
// p1
/*
class Student{
    string name;
    float marks;
    char grade;
    int rollNumber;
    static int rollNumberGlobal;
    public:
    Student(){
        rollNumber=++rollNumberGlobal;

    }
    Student(string name,float marks):name(name),rollNumber(++rollNumberGlobal),marks(marks),grade(grade){
        
        

    }
    
    string getName() const{
        return name;
    }
    void setName (string name){
        this->name=name;
    }

    int getRollNumber() const{
        return rollNumber;
    }
    void setRollNumber (int rollNumber){
        this->rollNumber=rollNumber;
    }

    float getMarks() const{
        return marks;
    }
    void setMarks (float marks){
        this->marks=marks;
    }

    char getGrade() const{
        return grade;
    }
    void setGrade (char grade){
        this->grade=grade;
    }

    char calculateGrade(){
        if(marks>=90){
            setGrade('A');
        }else if(marks>=80){
            setGrade('B');
        }else if(marks>=70){
            setGrade('C');
        }else if(marks>=60){
            setGrade('D');
        }else{
            setGrade('F');
        }
        return getGrade();

    }

    void acceptInformation(){
       
        cin>>name>>marks;

        calculateGrade();

    }
    void displayInformation(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<grade<<endl;

}





};
int Student::rollNumberGlobal=0;

int main(){
    Student s;
    int choice;

    do{
        cout<<"enter 1->Accept information"<<endl;
        cout<<"enter 2->display information"<<endl;
        cout<<"enter 3->Calculate Grade"<<endl;
        cout<<"enter >=4-> Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                s.acceptInformation();
                break;
            case 2:
                s.displayInformation();
                break;
            case 3:
                cout<<s.calculateGrade()<<endl;
                


        }

    }while(choice<4);
}*/

// p2
/*

class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;
    public:
    BankAccount(){

    }
    BankAccount(int accountNumber=0,string accountHolderName="NA",double balance=0):accountNumber(accountNumber),accountHolderName(accountHolderName),balance(balance){

    }
    int getAccountNumber() const{
        return accountNumber;
    }
    string getAccountHolderName() const{
        return accountHolderName;
    }
    double getBalance() const{
        return balance;
    }

    void setAccountNumber(int accountNumber){
        this->accountNumber=accountNumber;
    }
    void setAccountHolderName(string accountHolderName){
        this->accountHolderName=accountHolderName;
    }
    void setBalance(double balance){
        this->balance=balance;
    }
    void deposite(int amount){
        balance+=amount;
    }
    void withdraw(int amount){
        if(balance >=amount){
            balance-=amount;
        }
    }
    void displayAccountDetail(){
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Account holder: "<<accountHolderName<<endl;
        cout<<"Account balance: "<<balance<<endl;
        
    }


};
int main(){
    // BankAccount o(1,"arun",100);
    // cout<<o.getAccountNumber();
    // cout<<o.getAccountHolderName();
    // cout<<o.getBalance();
    cout<<"Enter account number,holder,starting balance"<<endl;
    int accountNumber;
    string accountHolderName;
    double balance;
    cin>>accountNumber>>accountHolderName>>balance;
    BankAccount b(accountNumber,accountHolderName,balance);
    int choice;

    do{
        cout<<"enter 1->Deposit money"<<endl;
        cout<<"enter 2->Withdraw money"<<endl;
        cout<<"enter 3->Account details"<<endl;
        cout<<"enter >=4-> Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                int n;
                cout<<"enter money to deposite"<<endl;
                cin>>n;
                b.deposite(n);
                break;
            case 2:
                int m;
                cout<<"enter money to withdraw"<<endl;
                cin>>m;
                b.withdraw(m);
                break;
                
            case 3:
                b.displayAccountDetail();
                


        }

    }while(choice<4);

}*/

// p3
/*
class TollBooth{
    int totalVehicles;
    double totalRevenue;
    public:
    TollBooth():totalVehicles(0),totalRevenue(0){

    }
    void reset(){
        this->totalVehicles=0;
        this->totalRevenue=0;
    }

    void vehiclePayingToll(int vehicleType, double tollAmount){
        this->totalRevenue+=tollAmount;
        totalVehicles++;
    }
    int getTotalVehicles() const{
        return totalVehicles;
    }
    double getTotalRevenue() const{
        return totalRevenue;
    }
};

int main(){
    TollBooth tb;
    int choice;
    
    do{
        cout<<"1. Add a standard car and collect toll"<<endl; 
        cout<<"2. Add a truck and collect toll"<<endl; 
        cout<<"3. Add a bus and collect toll"<<endl;
        cout<<"4. Display total cars passed"<<endl;
        cout<<"5. Display total revenue collected"<<endl;
        cout<<"6. Reset booth statistics "<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                tb.vehiclePayingToll(1,180);
                break;
            case 2:
                tb.vehiclePayingToll(2,300);
                break;
            case 3:
                tb.vehiclePayingToll(3,350);                 
                break;
            case 4:
                cout<<"Total vehicles: "<<tb.getTotalVehicles()<<endl;
                break;
            case 5:
                cout<<"Total revenue collected: "<<tb.getTotalRevenue()<<endl;
                break;
            case 6:
                tb.reset();
                break;
            case 7:
                break;
            default:
                cout<<"Invalid choice"<<endl;;
                
        }


        


    }while(choice!=7);

}*/

// p4
class Employee{
    static int increseID;
    int empID;
    string empName;
    double empSalary;
    public:
    
    Employee():empID(increseID++),empName("NA"),empSalary(0){

    }
    Employee(string empName,double empSalary):empID(increseID++),empName(empName),empSalary(empSalary){

    }

    int getEmpId() const{
        return this->empID;
    }
    string getEmpName() const{
        return this->empName;
    }
    int getEmpSalary() const{
        return this->empSalary;
    }
    void setEmpName(string name){
        this->empName=name;

    }
    void setEmpSalary(double salary){
        this->empSalary=salary;

    }

    double grossSalary(){
        if(this->empSalary<=5000){
            return empSalary*1.1;
        }else if(empSalary>5000 && empSalary<=10000){
            return empSalary*1.15;
        }else{
            return empSalary*1.2;
        }

    }

    void displayEmployeeDetails(){
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"Employee Salary: "<<empSalary<<endl;
        cout<<"Employee GrossSalary: "<<this->grossSalary()<<endl;
    }



};
int Employee::increseID=1;

int main(){
    vector<Employee> emp;
    int choice;
    do{ 
        cout<<"Menu :"<<endl;
        cout<<" 1. Add Employee \n 2. Gross salary \n 3. Display details \n 4. update datails\n 5. Exit"<<endl;
        cout<<"enter your choice :"<<endl;
        cin>>choice;
        switch(choice){
                case 1:{
                    string name;
                    double salary;
                    cout<<"Enter name salary of Employee"<<endl;
                    cin>>name>>salary;
                    emp.push_back(Employee(name,salary));
                    cout<<"Employee added"<<endl;
                    break;}
                case 2:{
                    int id;
                    cout<<"Enter ID of employee: "<<endl;
                    cin>>id;
                    bool flagFound=false;
                    for(Employee &employee:emp){
                        if(employee.getEmpId()==id){
                            cout<<"Gross salary :"<<employee.grossSalary()<<endl;
                            flagFound=true;
                            break;
                        }
                    }
                    if(flagFound==false){ cout<<"employee not found"<<endl;}
                    break;}
                case 3:{
                    int id;
                    cout<<"Enter ID of employee: "<<endl;
                    cin>>id;
                    bool flagFound=false;
                    for(Employee &employee:emp){
                        if(employee.getEmpId()==id){
                            employee.displayEmployeeDetails();
                            flagFound=true;
                            break;
                        }
                    }
                    if(flagFound==false){ cout<<"employee not found"<<endl;}
                    break;}
                    
                case 4:{
                    int id;
                    cout<<"Enter ID of employee: "<<endl;
                    cin>>id;
                    bool flagFound=false;
                    for(Employee &employee:emp){
                        if(employee.getEmpId()==id){
                            string name;
                            double salary;
                            cout<<"Employee found "<<endl;
                            cout<<"Enter Employee name to set :";
                            cin>>name;
                            cout<<endl;
                            cout<<"Enter Employee salary to set :";
                            cin>>salary;
                            cout<<endl;
                            employee.setEmpName(name);
                            employee.setEmpSalary(salary);
                            cout<<"updated emp name and salary"<<endl;
                            flagFound=true;
                            break;
                        }
                    }
                    if(flagFound==false){ cout<<"employee not found"<<endl;}
                    break;}
                case 5:
                    break;
                default:
                    cout<<"Invalid choice"<<endl;     
            }                   
                

                
                




    }while(choice!=5);

}











