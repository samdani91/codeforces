import java.util.Scanner;

public class A_Yogurt_Sale{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();

        while(t>0){
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();

            int temp=n/2;

            int res1= temp*b + (n%2)*a;
            int res2= n*a;

            System.out.println(Math.min(res1, res2));

            t--;
        }
    }
}