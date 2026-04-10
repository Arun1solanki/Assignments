// p1  Factorial with Edge Case Handling
/*
import java.util.*;
class negativeNumberException extends RuntimeException{
    negativeNumberException(String msg){
        super(msg);
    }
}
class AssignmentADS1{
    
    static long factorial(int n) throws negativeNumberException{
        if(n<0){
            throw new negativeNumberException("Factorial not defined for negative numbers");
        }
        if(n==0 || n==1){
            return 1;
        }
        return n*factorial(n-1);
    


    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number");
        int n=sc.nextInt();
        try{
        System.out.println(factorial(n));
        }catch(negativeNumberException e){
            System.out.println(e.getMessage());
        }

    }
}
     */

// fibonacci with negative numbers
     /*
import java.util.*;
class AssignmentADS1{
    static int fibonacci(int n){
        if(n<0){
            
        }
        if(n==0 || n==1){
            return n;
        }
        if(n>0){
            return fibonacci(n-1)+fibonacci(n-2);
        }else{
            return ((int)Math.pow(-1,n+1))*(Math.abs(fibonacci(n-1))+Math.abs(fibonacci(n-2)));

        }

    }
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n<0){
            n=-n;
            int res=fibonacci(n);
            System.out.println((int)Math.pow(-1,n+1)*res);

        }else{
            System.out.println(fibonacci(n));
        }
        
        
        
    }
}
 */

// 3. Recursive String Reversal
/*
import java.util.*;
class AssignmentADS1{
    static String stringReversal(String str){
        if(str.isEmpty() || str.length()==1 ){
            return str;
        }
        
        return stringReversal(str.substring(1))+str.charAt(0);
        

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println(stringReversal(sc.nextLine()));
        
    }
}
 */

// 4. Check if an Array is Sorted
import java.util.*;
class AssignmentADS1{
    static boolean isSorted(int[]arr,int index){
        if(index==0){
            return true;
        }
        boolean res= arr[index]>=arr[index-1];
        return res && isSorted(arr, index-1);

    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<Integer> lst=new ArrayList<>();
        while(sc.hasNextInt()){
            lst.add(sc.nextInt());

        }
        int[] arr=lst.stream().mapToInt(Integer::intValue).toArray();
        System.out.println(isSorted(arr,3));
        
    }
}

































