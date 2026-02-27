import java.util.*;

class Lab3{
    // p1
    public int sumOfTwoNumbers(int a,int b){
        return a+b; 
    }

    // p2
    public void checkAgeCategory(int age){
        if (age<18){
            System.out.println("You are a Minor");
        }else if(age>=18 && age<60){
            System.out.println("You are an Adult");
        }
        else{
            System.out.println("You are a Senior citizen");
        }


    }
    // p3
    public void printEvenNumbers(){
        int i=1;
        while(i<=50){
            if(i%2==0){
            System.out.print(i+" ");}
            i++;
        }
    }
    // p4
    public void askForPositiveNumber(Scanner sc){
        int n;
        do{
            System.out.print("Enter a positive number");
            n=sc.nextInt();

        }while(n<1);
        System.out.println("You entered a positive number: "+n);
    }
    // p5
    public void printMultiplicationTable(int num){
        for(int i=1;i<=10;i++){
            System.out.println(num+"x"+i+"="+(num*1));

        }

    }
    // p6
    public void calculateSum(int n){
        int s=0;
        for(int i=1;i<=n;i++){
            s+=i;
        }
        System.out.println("The sum of numbers from 1 to "+n+" is: "+s);

    }

    // p7
    public void menuDriven(Scanner sc){
        int choice;
        do{
        System.out.println("Enter choice Grade->1 leap year->2 weekDay->3 defaultValues->4 Exit->5");
        choice=sc.nextInt();
        Lab2 lab2=new Lab2();
        
        switch(choice){
            case 1:
                System.out.println("Entered in grade problem>now enter three numbers");
                    int a=sc.nextInt();
                    int b=sc.nextInt();
                    int c=sc.nextInt();
                    Grade obj=new Grade(a,b,c);
                    int average=obj.getAverage();
                    System.out.println(average);
                    System.out.println(obj.getGrade(average));
                    break;
            
            case 2:
                
                System.out.println("Enter Year:");
                int year=sc.nextInt();
                System.out.println(year+" "+lab2.leapYear(year)); 
                break; 
                
            case 3:
                System.out.println("Enter week day :");
                int day=sc.nextInt();
                System.out.println(lab2.weekDay(day)); 
                break;
                
            case 4:
                lab2.defaultValues(lab2);
                break;
            case 5:
                System.out.println("Exiting");
                break;
            default:
                System.out.println("Invalid choice choose number from 1-4 and 5 for exit");

        }

        


    }while(choice!=5);
    }

    public static void main(String[] args){
        Lab3 obj=new Lab3();
        Scanner sc=new Scanner(System.in);
        
    //   p1
    // System.out.print("Enter first Number: ");
    //     int a=sc.nextInt();
    //     System.out.print("Enter second Number: ");
    //     int b=sc.nextInt();
    //     System.out.println();
    //     System.out.println("The sum of "+a+" and "+b+" is "+obj.sumOfTwoNumbers(a,b));

    //p2
    // System.out.print("Enter your age: ");
    // int age=sc.nextInt();
    // obj.checkAgeCategory(age);

    
    // p3
    // obj.printEvenNumbers();

    // p4
    // obj.askForPositiveNumber(sc);

    // p5
    // System.out.print("Enter a number: ");
    // int num=sc.nextInt();
    // obj.printMultiplicationTable(num);

    // p6
    // System.out.print("Enter a number: ");
    // int num=sc.nextInt();
    // obj.calculateSum(num);
        
    // p7
    obj.menuDriven(sc);


        

    }

}