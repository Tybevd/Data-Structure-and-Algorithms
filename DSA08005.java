import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class DSA08005 {
	static void nhiphan(int n)
	{
		Queue<String> Q=new LinkedList<>();
		Q.add("1");
		while(n-->0)
		{
			String s=Q.peek();
			System.out.print(s+" ");Q.remove();
			Q.add(s+"0");
			Q.add(s+"1");
		}
		System.out.println();
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			int n=sc.nextInt();
			nhiphan(n);
		}
	}
}
