#include<iostream>
using namespace std;

// p1.1
/*
class Box{
    int length,width,height;
    public:
    Box(int length=0,int width=0,int height=0):length(length),width(width),height(height){

    }
    void setDimensions(int length,int width,int height){
        this->length=length;
        this->width=width;
        this->height=height;

    }
    
    int volume(){
        return 2*(length*width+width*height+height*length);
    }

};
int main(){
    cout<<"Enter length width height"<<endl;
    int length,width,height;
    cin>>length>>width>>height;
    Box box(length,width,height);
    cout<<"Volume: "<<box.volume()<<endl;
    cout<<"Enter length width height to modify"<<endl;
    cin>>length>>width>>height;
    box.setDimensions(length,width,height);
    cout<<"Volume: "<<box.volume()<<endl;

}

// p1.2
// q1-initialization happen at the time of object creation and assignment after the object created thats why initialization happen before assignment

// process step by step:
// 1st memory allocated for obj but members are not initialized yet
// then immedietly after memory allocation initializer list is executed
// members are directly initialized and no default constructor+assignment happen
// then at last constructor body executed.

// and assignment happen at third stage 

// q2
// initialization is preferred when we have to deal with const data member and we want to make constructor with them and it is also recommended with object and when efficiency matter more because when we can skip calling defaut constructor and assignment step.


*/

// p2.1
/*
void swapByValue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swapByAdress(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
void swapByReference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    cout<<"enter values of n1 n2 :";
    int n1,n2;
    cin>>n1>>n2;
    swapByValue(n1,n2);
    cout<<"After swapByValue: "<<n1<<n2<<endl;
    swapByAdress(&n1,&n2);
    cout<<"After swapByAdress: "<<n1<<n2<<endl;
    swapByReference(n1,n2);
    cout<<"After swapByReference: "<<n1<<n2<<endl;
}
// p2.2
// in swap by reference we pass reference of values means alias names who is pointing to the same location as the actual one so when we make chages inside function it is also reflected in actual value
*/

// p3.1
/*
int main(){
    int num=4;
    int* ptr=&num;
    int& reference=num;
    cout<<*ptr<<" "<<reference<<endl;
    *ptr=*ptr+1;
    cout<<"after ptr increase:"<<*ptr<<endl;
    cout<<"before reference increase: "<<reference<<endl;
    reference=reference+1;
    cout<<"after reference incresase: "<<reference<<endl;


}
// p3.2
//  Two differences between pointer and reference 
// Pointer	                                        Reference
// Pointer stores the          Reference is an alias (another name) 
// address of a variable	    of a variable
                            
// Pointer can be reassigned       Reference cannot be changed after
// to point to another variable	 initialization

//  Why references cannot be reseated but pointers can 
// A reference is not a separate object; it is just another name for the same variable.
// A pointer is a separate variable that stores an address.You can change the stored address

//  Why references cannot be NULL
// A reference must always refer to a valid object.

// Reason:
// Reference is just another name for a variable
// If it were NULL, it would refer to nothing, which breaks its definition
*/


// p4.1
/*
// without class
// using new
// int main(){
//     int n;
//     cin>>n;
//     int* arr=new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     delete[] arr;
//     return 0;
// }

// p4.2
// using malloc
// int main(){
//     int n;
//     cin>>n;
//     int* arr=(int*)malloc(sizeof(int)*n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     free(arr);
//     return 0;
// }

// with class new
// class withNew{
//     int size;
//     int * arr;
//     public:
//     withNew(int size):size(size){
//         arr=new int[size];
//     }
//     void setValue(int index,int x){
//         if( index >= 0 && index < size)
//             arr[index]=x;
//     }
//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";

//         }
//         cout<<endl;
//     }
//     ~withNew(){
//         delete[] arr;
//     }
// };
// int main(){
//     int size;
//     cin>>size;
//     withNew obj(size);
//     for(int i=0;i<size;i++){
//         int x;
//         cin>>x;
//         obj.setValue(i,x);

//     }
//     obj.print();
// }
// with malloc
class withMalloc{
    int size;
    int * arr;
    public:
    withMalloc(int size):size(size){
        arr=(int*)malloc(size*sizeof(int));
    }
    void setValue(int index,int x){
        if( index >= 0 && index < size)
            arr[index]=x;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    ~withMalloc(){
        free(arr);
    }
};
int main(){
    int size;
    cin>>size;
    withMalloc obj(size);
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        obj.setValue(i,x);

    }
    obj.print();
}



// p4.3
//  Why constructors are not called when using malloc
// 
// because malloc just reserve memory it does not have anything to do with obj and constructor

//  Why new is preferred in C++
// new allocates memory and calls the constructor automatically.
// new returns a typed pointer, no casting needed

//  Difference in return types and initialization
// new return typed pointer and malloc void pointer
// new call constructor but in case of malloc just allocate memory


//  Why malloc cannot initialize complex types

// Complex types = objects with constructors, destructors, virtual functions.
// malloc does not call constructors, so:
// Member variables remain uninitialized.
// Virtual tables are not set up.
*/










// Create a C++ program to model a Student Result System.

 

// Create a base class Student that contains:

// A protected data member rollNo

// A constructor that initializes rollNo

// A virtual function display() that prints the roll number.

 

// Create a derived class Result that:

// Inherits from Student

// Has an additional data member marks

// Uses a constructor to initialize both rollNo and marks

// Overrides the display() function to print both roll number and marks.

 

// In the main() function:

// Create an object of the Result class.

// Use a base class pointer to refer to the derived object (Upcasting).

// Call the display() function using the base class pointer.

 

// Answer the following questions:

// Which constructor will be called first: Student or Result?

// Does the program demonstrate early binding or late binding?

// Why is the display() function declared as virtual

// flow:student->result constructor;
// late binding because we are using virtual

// with virtual
/*
#include <iostream>
using namespace std;
class Student{
    protected:
    int rollNo;
    public:
    Student(int rollNo=0):rollNo(rollNo){}
    virtual void display()=0;
    
};
class Result:public Student{
    double marks;
    public:
    Result(int rollNo,double marks):Student(rollNo),marks(marks){}
    void display() override{
        cout<<"rollNo: "<<rollNo<<endl;
        cout<<"marks: "<<marks<<endl;
    }
    
};

int main() {
    // Write C++ code here
    Result r(1,100);
    Student* s=&r;
    r.display();
    s->display();
    

    return 0;
}*/

// without virtual
/*
#include <iostream>
using namespace std;
class Student{
    protected:
    int rollNo;
    public:
    Student(int rollNo=0):rollNo(rollNo){}
    void display(){
        cout<<rollNo;
    };
    
};
class Result:public Student{
    double marks;
    public:
    Result(int rollNo,double marks):Student(rollNo),marks(marks){}
    void display(){
        cout<<"rollNo: "<<rollNo<<endl;
        cout<<"marks: "<<marks<<endl;
    }
    
};

int main() {
    // Write C++ code here
    Result r(1,100);
    Student* s=&r;
    r.display();
    s->display();
    

    return 0;
}

*/


// p5.1
/*
class Student{
    int rollNo; 
    string name;
    double marks;
    public:
    Student(){
        rollNo=-1;
        name="nA";
        marks=-1;

    }
    // Student(int rollNo,string name,double marks):rollNo(rollNo),name(name),marks(marks){}
   
    Student(int rollNo,string name,double marks){
        this->rollNo=rollNo;
        this->name=name;
        this->marks=marks;

    }
    void printDetails(){
        cout<<"rollNo: "<<rollNo;
        cout<<"name: "<<name;
        cout<<"marks: "<<marks;
    }
};
int main(){
    Student s;
    Student s1(1,"arun",10);
    Student s2(2,"arun solanki",20);

}

// p5.2
//  When does compiler generate a default constructor? 
// when there is constructor or u explicityly defined for no parameter
 When does it NOT generate one? 
// when u already have one with parameters
 Can constructors be overloaded?
// yes we can overload constructor due to no of parameters and type of parameters and can also due to order.

*/


// p6.1
class Employee{
    const int employeeId;
    string name;
    float salary;
    public:
    Employee(int employeeId,string name,float salary):employeeId(employeeId),name(name),salary(salary){}

    void printDetails(){
        cout<<"employeeId: "<<employeeId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }


};
int main(){
    Employee e(1,"arun",1000);
    e.printDetails();
}

// p6.2
// because we cant assign a const after initialization so we ado in list initialization
// error: assignment of read-only member  -> can not assign const member 
// because it list initialization happen after memomry allocation before constructor called the after that it execute inside it.so when we do without initializing member variables are first default constructed then assign values.


































