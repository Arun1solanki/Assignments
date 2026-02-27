import java.util.*;
// Problem 1: Grade Evaluation System
class Grade{
    int maths;
    int science;
    int history;
    Grade(int maths,int science,int history){
        this.maths=maths;
        this.science=science;
        this.history=history;
        
    }
    public int getAverage(){
        return (maths+science+history)/3;
    }
    public char getGrade(int average){
        
            if(average>=90)return 'A';
                
            else if(average>=70 && average<90) return 'B';
                
            else if(average>=50 && average<70) return 'C';
                
            else if(average>=30 && average<50) return 'D';
                
            else return 'F';
        }
}



class Lab2{
    // problem 4: indentify the value of uninitialized variables
    byte a;
    short b;
    int c;
    long d;
    float e;
    double f;
    char g;
    boolean h;
   


    // Problem 2: Leap Year
    public String leapYear(int year){
        if(year%100==0){
            if(year%400==0){
                return "is a Leap Year";
            }else{
                return "is Not a leap year";
            }

        }else{
            if(year%4==0){
                return "is a Leap Year";
            }else{
                return "is Not a leap year";
            }

        }

    }


    // Problem 3: Days of the Week
    public String weekDay(int day){
        switch (day) {
            case 1:
                return "The day is monday";
            case 2:
                return "The day is tuesday";
            case 3:
                return "The day is wednesday";
            case 4:
                return "The day is thursday";
            case 5:
                return "The day is friday";
            case 6:
                return "The day is saturday";
            case 7:
                return "The day is sunday";
            default:
                return "Invalid day number";
        }

    }
    public void defaultValues(Lab2 lab2){
        // p4
        System.out.println(lab2.a);
        System.out.println(lab2.b);
        System.out.println(lab2.c);
        System.out.println(lab2.d);
        System.out.println(lab2.e);
        System.out.println(lab2.f);
        System.out.println(lab2.g);// default '\u0000' but appears nothing
        System.out.println(lab2.h);
    }
    
   
    



    public static void main(String[] args){
        // // p1
        // Grade obj=new Grade(80,85,90);
        // int average=obj.getAverage();
        // System.out.println(average);
        // System.out.println(obj.getGrade(average));

        // // p2
        Lab2 lab2=new Lab2();
        Scanner sc=new Scanner(System.in);
        // int year=sc.nextInt();
        // System.out.println(year+" "+lab2.leapYear(year));

        // p3
        // int day=sc.nextInt();
        // System.out.println(lab2.weekDay(day));

        // p4
        lab2.defaultValues(lab2);

        


    }
}