import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class DSA08006 {
	static void xuly(int n)
	{
		Queue<Integer> q=new LinkedList<>();
		q.add(9);
		int so;
		while(true)
		{
			so=q.peek();
			if(so%n==0) break;
			q.remove();
			q.add(so*10);
			q.add(so*10+9);
		}
		System.out.println(so);
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			int n=sc.nextInt();
			xuly(n);
		}
	}
}
