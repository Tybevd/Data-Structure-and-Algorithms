import java.util.Scanner;

public class DSA02012 {
static int t,n,dem;
static int x[]=new int [20];
static int c[]=new int [20];
static int c1[]=new int [20];
static int c2[]=new int [20];
static void quaylui(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(c[j]==0&&c1[i-j+n-1]==0&&c2[i+j-2]==0)
		{
			x[i]=j;
			c[j]=1;c1[i-j+n-1]=1;c2[i+j-2]=1;
			if(i==n) dem++;
			else quaylui(i+1);
			c[j]=0;c1[i-j+n-1]=0;c2[i+j-2]=0;
		}
	}
}
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	t=sc.nextInt();
	while(t-->0)
	{
		n=sc.nextInt();
		dem=0;
		quaylui(1);
		System.out.println(dem);
	}
}
}
