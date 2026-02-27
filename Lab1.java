import java.util.*;
class Lab1{

    public boolean checkPositive(int n){
        if(n>0){
            return true;
        }else{
            return false;
        }

    }

    public boolean checkNegative(int n){
        if(n<0){
            return true;
        }else{
            return false;
        }

    }

    public void oddOrEven(int n){
        if(n%2==0){
            System.out.println("even");
        }else{
            System.out.println("odd");
        }
    }

    public void greeting(int time){
        if(time>5 && time<12){
            System.out.println("Good Morning");
        }
    }

    public void areaSquare(int side){
        System.out.println(side*side);
    }

    public void areaRectangle(int l,int w){
        System.out.println(l*w);
    }

    public int maxOfThree(int n1,int n2,int n3){
        if(n1>n2){
            if(n1>n3){
                return n1;
            }else{
                return n3;
            }

        }
        else if(n3>n2){
            if(n3>n1){
                return n3;
            }else{
                return n1;
            }

        }else{
            return n2;
        }
    }






    public static void main(String[] args){
        Lab obj=new Lab();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        // int n=sc.nextInt();
        // System.out.println(obj.checkPositive(n));
        // System.out.println(obj.checkNegative(n));
        // obj.oddOrEven(n);

        // // take input time
        // int time=sc.nextInt();
        // obj.greeting(time);

        // // take input side
        // int side=sc.nextInt();
        // obj.areaSquare(side);

        // // take input length and breath

        // int l=sc.nextInt();
        // int w=sc.nextInt();
        // obj.areaRectangle(l,w);

        // maximum of three numbers
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        int n3=sc.nextInt();

        System.out.println(obj.maxOfThree(n1,n2,n3));
        






        sc.close();

    }
}