import java.util.Scanner;

public class A_Football{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,i=1,count=1;
        String s,s2,s3=null;
        n=sc.nextInt();
        s=sc.next();
        s2=s;
        
        while(i<n){
            s=sc.next();
            if(s.equals(s2)) count++;
            else {
                s3=s;
            }
            i++;

        }
        if(count>(n-count)) System.out.println(s2);
        else System.out.println(s3);
    }
}