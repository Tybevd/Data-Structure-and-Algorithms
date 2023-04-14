import java.util.Scanner;

public class DSA02002 {

	static void quaylui(int a[],int n)
	{
		if(n==0) return;
		int b[]=new int[n-1];
		for(int i=0;i<n-1;i++)
			b[i]=a[i]+a[i+1];
		quaylui(b,n-1);
		System.out.print("[");
		for(int i=0;i<n;i++)
			{if(i==n-1)
			System.out.print(a[i]);
			else 
				System.out.print(a[i]+" ");
			}
		System.out.print("] ");
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
			int n=sc.nextInt();
			int a[]=new int [n];
			for(int i=0;i<n;i++)
				a[i]=sc.nextInt();
			quaylui(a, n);
			System.out.println();
		}
	}

}