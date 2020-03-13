import java.util.Arrays;
import java.util.Scanner;

public class Main {
	
	static int[] time;
	static int[] save;

	public static void main(String args[]){
		
		Scanner sc=new Scanner(System.in);
		int sum=0;
		int min=0;
		int n=sc.nextInt();
		
		time=new int[n+1];
		
		for(int i=1; i<=n; i++)
		{
			time[i]=sc.nextInt();
		}
		
		Arrays.sort(time);
		
		for(int i=1; i<=n; i++)
		{
			min+=time[i];
			sum+=min;
		}
		
		System.out.println(sum);
		
		sc.close();	
	}	
	
} 