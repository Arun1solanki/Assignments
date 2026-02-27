#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// p1 grade calculator
/*
float percentage(float arr[],int numSub){
    float sum=0;
    for(int i=0;i<numSub;i++){
        sum+=arr[i];
    }
    printf("Total Numbers: %f\n",sum);
    return sum/numSub;

}
void gradeCalculator(int numSub){
    float subArray[numSub];
    for(int i=0;i<numSub;i++){
        float temp;
        scanf("%f",&temp);
        
        subArray[i]=temp;
    }
    float percent=percentage(subArray,numSub);
    printf("Percentage: %f\n",percent);
    printf("Grade: ");
    percent>=75?printf("A\n"):(percent>=60?printf("B\n"):(percent>=45?printf("C\n"):printf("Fail\n")));
    
}

int main(){
    printf("Enter the Number of subject");
    int numSub;
    scanf("%d",&numSub);
    gradeCalculator(numSub);
}

// output:
// Enter the Number of subject5
// 10 20 30 40 50
// Total Numbers: 150.000000
// Percentage: 30.000000
// Grade: Fail
*/


// p2 Type size Explorer
/*
int main(){

    
    
    // normal
    printf("%zu\n",sizeof(char));  //1
    printf("%zu\n",sizeof(float)); //4
    printf("%zu\n",sizeof(double)); //8
    printf("%zu\n",sizeof(bool));  //1
    printf("%zu\n",sizeof(int));  //4

    
    // with short
    printf("%zu\n",sizeof(short int));  //2
    
    // with long
    printf("%zu\n",sizeof(long int));   //4
    printf("%zu\n",sizeof(long long));  //8
    printf("%zu\n",sizeof(long double));  //12
    
    // signed unsigned
    printf("%zu\n",sizeof(signed int));  //4
    printf("%zu\n",sizeof(unsigned int));  //4

    // question :Which two types have the same size on your machine? Does unsigned int have a dierent size than int?
    // ans
    // in my machine int and unsigned int have same size
    // and int and long int have same size

}
*/

// p3:Temperature Converter
/*
float celsiusToFahrenheit(float c);  //Declaration
float fahrenheitToCelsius(float f);

int main(){
    float f,c;
    printf("Enter temp in celsius :");
    scanf("%f",&c);
    printf("Enter temp in fehrenheit :");
    scanf("%f",&f);

    // function call
    printf("Temp in Fahrenheit: %.2f\n",celsiusToFahrenheit(c));
    printf("Temp in Celsius: %.2f\n",fahrenheitToCelsius(f));

}

// definition
float celsiusToFahrenheit(float c){
    return (c*9.0/5.0)+32;
}
float fahrenheitToCelsius(float f){
    return (f-32)*(5.0/9.0);
}

// output:
// Enter temp in celsius :45
// Enter temp in fehrenheit :113
// Temp in Fahrenheit: 113.000000
// Temp in Celsius: 45.000000
*/

// p4 Min-Max via Reference Parameters
/*
void findMinMax(int a, int b, int c, int &minVal, int &maxVal){
    if (b>maxVal) maxVal=b;
    if(b<minVal) minVal=b;

    if(c>maxVal) maxVal=c;
    if(c<minVal) minVal=c;
}
int main(){
    int lo,hi;
    int a,b,c;
    cin>>a>>b>>c;
    lo=a,hi=a;
    findMinMax(a,b,c,lo,hi);
    cout<<"low value :"<<lo<<endl;
    cout<<"high value :"<<hi<<endl;
}

// output:
// low value :1
// high value :9
*/
    

// p5:Spot the Bug — Call by Value Trap

/*
// void doubleIt(int n) {   //before correction
void doubleIt(int &n) {
 n = n * 2;
 printf("Inside doubleIt: %d\n", n);
}
int main() {
 int num = 7;
 doubleIt(num);
 printf("In main after call: %d\n", num);
 return 0;
}

// 1.output:
// Inside doubleIt: 14
// In main after call: 7

// 2.Fix:
// just add & in function parameter before n(&n);

// 3.output after Fix
// Inside doubleIt: 14
// In main after call: 14

*/


// p6:Pointer Swap
/*
int main(){

    int x=10,y=20,z=30;
    int* px=&x;
    int* py=&y;
    int* pz=&z;
     
    cout<<"Before Swapping: "<<*px<<" "<<*py<<" "<<*pz<<endl;
    cout<<"Adress :"<<px<<" "<<py<<" "<<pz<<endl;
    int temp=*px;
    *px=*pz;
    *py=temp;


    cout<<"After Swapping: "<<*px<<" "<<*py<<" "<<*pz<<endl;
    cout<<"Adress :"<<px<<" "<<py<<" "<<pz<<endl;


}
// output:
// Before Swapping: 10 20 30
// Adress :0x61feec 0x61fee8 0x61fee4
// After Swapping: 30 10 30
// Adress :0x61feec 0x61fee8 0x61fee4
*/


// p7:const Constant in Functions
/*
const float PI = 3.14159f;
float circleArea(float radius){
    return PI*radius*radius;
}
float circlePerimeter(float radius){
    return 2*PI*radius;
}
int main(){
    float radius = 7.0;
    PI = 3.0f;
    // error: assignment of read-only variable 'PI'
    
    // cout<<setprecision(4)<<circleArea(radius)<<endl;
    // cout<<setprecision(4)<<circlePerimeter(radius)<<endl;

    printf("%.4f\n",circleArea(radius));
    printf("%.4f\n",circlePerimeter(radius));
    
}

// output:
// 153.9379
// 43.9823

// output after modifying Py
// error: assignment of read-only variable 'PI'
*/

// p8:. (Challenge) Absolute Value & Clamp — No if-else
/*
int absolute(int n){
    return n>=0?n:-n;
    
}
int clamp(int val, int lo, int hi){
    return val>hi?hi:(val<lo?lo:val);
}
int main(){
    int val[]={-15,0,25,-3};
    int lo[]={-10,-10,-10,0};
    int hi[]={10,10,10,5};

    // cout<<"val"<<" "<<"lo"<<" "<<"hi"<<" "<<"absolute(val)"<<" "<<"clamp(val,lo,hi)"<<endl;
    cout << "val\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)\n";

    for(int i=0;i<sizeof(val)/sizeof(val[0]);i++){
        // cout<<" "<<val[i]<<" "<<lo[i]<<" "<<hi[i]<<" "<<absolute(val[i])<<" "<<clamp(val[i],lo[i],hi[i])<<endl;

        cout<<val[i]<<"\t"<<lo[i]<<"\t"<<hi[i]<<"\t"<<absolute(val[i])<<"\t\t"<<clamp(val[i],lo[i],hi[i])<<"\n";
        
    }
}

// output:
// val     lo      hi      absolute(val)   clamp(val, lo, hi)
// -15     -10     10      15              -10
// 0       -10     10      0               0
// 25      -10     10      25              10
// -3      0       5       3               0
*/

