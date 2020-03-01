import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	
		public static void main(String[] args)  {
			
			ArrayList<Integer> list=new ArrayList<Integer>();
			
			Scanner sc=new Scanner(System.in);
			int x=sc.nextInt();
			int y=sc.nextInt();
			int w=sc.nextInt();
			int h=sc.nextInt();
			
			list.add(x);
			list.add(y);
			list.add(w-x);
			list.add(h-y);
			
			Collections.sort(list);
			System.out.println(list.get(0));
	}	
} 