import java.util.Scanner;
import java.util.Stack;

public class DSA07021 {
	static String s;
	static int t;
	static int ketqua(String s)
	{
		int kq=0;
		Stack<Integer> st=new Stack<Integer>();
		st.push(-1);
		for(int i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='(') st.push(i);
			else
			{
				st.pop();
				if(!st.empty())
				{
					int j=st.peek();
					kq=Math.max(kq,i-j);
					
					
				}
				else st.push(i);
			}
		}
		return kq;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t-->0)
		{
			s=sc.next();
			System.out.println(ketqua(s));
		}
	}
}
