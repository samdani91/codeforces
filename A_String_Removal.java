import java.util.*;

public class A_String_Removal{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        String s;
        int count,count2;
    
        for(int i=1;i<=t;i++){
            count=count2=0;
            s=sc.next();
            for(int j=0;j<s.length();j++){
                if(s.charAt(j)=='a') count++;
                else count2++;
            }
            if(count==count2) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}