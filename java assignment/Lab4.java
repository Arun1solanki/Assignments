import java.lang.reflect.Array;
import java.util.*;
public class Lab4 {
    // p1
    public void Print(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            System.out.print(i+" ");
        }
    }
    // p2
    public void printMultipleOf3(Scanner sc){
        int n=sc.nextInt();
        for(int i=3;i<n;i+=3){
            System.out.print(i+" ");
        }
    }
    // // p3
    public void factorial(Scanner sc){
        int n=sc.nextInt();
        int factorial=1;
        for(int i=1;i<=n;i++){
            factorial*=i;
        }
        System.out.println(factorial);

    }

    // p4
    public void even(Scanner sc){
        int n=sc.nextInt();
        for(int i=2;i<=n;i++){
            if(i%2==0){
                System.out.print(i+" ");
            }

        }
    }
    // p5-p6
    public void printArray(Scanner sc){
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        for(int i:arr){
            System.out.println(i);
        }
    }
    // p7
    public void printArraySum(Scanner sc){
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        System.out.println(sum);
    }
    // p8
    public void printArrayName(Scanner sc){
        String s=sc.nextLine();
        String[] arr=s.split(" ");
        for(String i:arr){
            System.out.println(i);
        }
    }
    // p9
    public void printArrayMax(Scanner sc){
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();

        int max=Integer.MIN_VALUE;
        for(int i:arr){
            max=Math.max(max,i);
            
        }
        System.out.println(max);
        // System.out.println(Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).max().getAsInt());
    }

    // p10
    public void printArrayAverage(Scanner sc){
        String s=sc.nextLine();
        double n=sc.nextDouble();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        int sum=0;
        
        for(int i:arr){
            sum+=i;
        }
        System.out.println(sum/n);
    }
    // p11
    public void CountArrayNumbers(Scanner sc){
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        int cEven=0;
        int cOdd=0;
        
        for(int i:arr){
            if(i%2==0){
                cEven++;
            }else{
            cOdd++;}
        }
        System.out.println("odd: "+cOdd);
        System.out.println("Even: "+cEven);
    }

    // p12
    public void sortArray(Scanner sc){
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        Arrays.sort(arr);
        for(int i:arr){
            System.out.println(i);
        }
    }

    // p13
    public void findElement(Scanner sc){
        int target=sc.nextInt();
        sc.nextLine();
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        boolean flag=false;
        for(int i :arr){
            if(i==target){
                flag=true;
                System.out.println("Found");
                break;
            }

        }
        if(flag==false){
        System.out.println("Not Found");}
    }

    // p14
    public void findIndex(Scanner sc){
        int target=sc.nextInt();
        int n=sc.nextInt();
        sc.nextLine();  //left overline
        String s=sc.nextLine();
        int[] arr=Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        int index=Arrays.binarySearch(arr,target);
        System.out.println("The number "+target+" found at index "+index);
        
    }

    // p15
    public void printPattern(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                
                if(i==j){
                    System.out.print(i);}
                else{System.out.print(i+"*");}
            }
            System.out.println();
        }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                if(i<2) break;
                
                if(i==j){
                    System.out.print(i);}
                else{System.out.print(i+"*");}
            }
            System.out.println();
        }
    }
    // p16
    public void printPattern2(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if(i==j){
                System.out.print(j);
                }else{
                System.out.print(j+"*");}
            }
            System.out.println();
        }
    }
    // p17
    public void printPattern3(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=2*i-1;j+=2){
                if(2*i-1==j){
                    System.out.print(j);
                }else{
                    System.out.print(j+"*");

                }

            }
            System.out.println();
        }
    }

    // p18
    public void printPattern4(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
    
    // p19
    public void printPattern5(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
    // p20
    public void printPattern6(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
    // p21
    public void printPattern7(Scanner sc){
        int n=sc.nextInt();
        int count=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(count++ +" ");
            }
            System.out.println();
        }
    }
    // p22
    public void printPattern8(Scanner sc){
        int n=sc.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==1 || i==n ||j==1 ||j==n){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }

            }
            System.out.println();
        }
    }
    // p23
    public void printPattern9(Scanner sc){
        int n=sc.nextInt();
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=(2*((n+1)-i))-1;k++){
                System.out.print("*");

            }
            System.out.println();
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(" ");
            }
            for(int k=(2*(n-i+1))-1;k>=1;k--){
                System.out.print("*");

            }
            System.out.println();
        }
    }
    // p24
    public void reverseString(Scanner sc){
        System.out.print("Enter a string: ");
        String s=sc.nextLine();
        System.out.print("Reversed hellostring: ");
        for(int i=s.length()-1;i>=0;i--){
            System.out.print(s.charAt(i));
        }
    }
    // p25
    public void countVowel(Scanner sc){
        System.out.print("Enter a string: ");
        String s=sc.nextLine();
        int count=0;
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
                count++;
            }
        }
        System.out.println("The number of vowels in "+s+" is: "+count);
    }
    // p26
    public void pallindrome(Scanner sc){
        System.out.print("Enter a string: ");
        String s=sc.nextLine();
        int l=0,r=s.length()-1;
        boolean flag=true;
        while(l!=r){
            if(s.charAt(r)==(s.charAt(l))){
                l++;
                r--;
            }else{
                System.out.println("The string "+s+" is not a pallindrome");
                flag=false;
                break;
            }
            
        }
        if(flag){
        System.out.println("The string "+s+" is a pallindrome");}


    }

    // p27
    public void stringLitral(Scanner sc){
        String s1="hello";
        String s2="hello";
        System.out.println("Both variables point to the same object: "+(s1==s2)); //both are equal
    }
    // p28
    public void stringNew(Scanner sc){
        String s1=new String("hello");
        String s2=new String("hello");
        System.out.println("Both variables point to the same object: "+(s1==s2)); //both are equal
        System.out.println("Both variables value is same : "+(s1.equals(s2))); //both are equal
    }
    // p29
    public void stringConcatenation(Scanner sc){
        String s1="hello";
        String s2="world";
        String s3=s1+s2;
        System.out.println("Both variables point to the same object: "+(s1==s3)); //both are equal
        
    }
    // p30
    public void stringPoolWithIntern(Scanner sc){
        String s1="hello";
        String s2=s1.intern();
        String s3="hello";
        System.out.println("Both variables point to the same object: "+(s2==s3)); //both are equal
        
    }
    // p31
    public void stringWithSameContent(Scanner sc){
        String s1="hello";
        String s2="hello";
        String s3="hello";
        System.out.println("All variables point to the same object: "+(s2==s3 && s1==s3)); // equal
        
    }



    

    






    
    











    



    public static void main(String[] args){
        // System.out.println("abc");
        Scanner sc=new Scanner(System.in);
        Lab4 lab4=new Lab4();
        // p1
        // lab4.Print(sc);
        // p2
        // lab4.printMultipleOf3(sc);
        // p3
        // lab4.factorial(sc);
        // p4
        // lab4.even(sc);
        // p5-6
        // lab4.printArray(sc);
        // p7
        // lab4.printArraySum(sc);
        // p8
        // lab4.printArrayName(sc);
        // p9
        // lab4.printArrayMax(sc);
        // p10
        // lab4.printArrayAverage(sc);
        // p11
        // lab4.CountArrayNumbers(sc);
        // p12
        // lab4.sortArray(sc);
        // p13
        // lab4.findElement(sc);
        // p14
        // lab4.findIndex(sc);
        // p15
        // lab4.printPattern(sc);
        // p16
        // lab4.printPattern2(sc);
        // p17
        // lab4.printPattern3(sc);
        // p18
        // lab4.printPattern4(sc);
        // p19
        // lab4.printPattern5(sc);
        // p20
        // lab4.printPattern6(sc);
        // p21
        // lab4.printPattern7(sc);
        // p22
        // lab4.printPattern8(sc);
        // p23
        // lab4.printPattern9(sc);
        // p24
        // lab4.reverseString(sc);
        // p25
        // lab4.countVowel(sc);
        // p26
        // lab4.pallindrome(sc);
        // p27
        // lab4.stringLitral(sc);
        // p28
        // lab4.stringNew(sc);
        // p29
        // lab4.stringConcatenation(sc);
        // p30
        // lab4.stringPoolWithIntern(sc);
        // p31
        lab4.stringWithSameContent(sc);
        





    }
    
}
