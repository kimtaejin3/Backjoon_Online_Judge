import java.util.*;
import java.io.*;


public class Main {
	
	static String[] a;
	public static void main(String args[]) throws IOException{
		int n,m;
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		String[] s=br.readLine().split(" ");
		n=Integer.parseInt(s[0]);
		m=Integer.parseInt(s[1]);
		
		Map<String,String> map=new HashMap<>();
		
		for(int i=0; i<n; i++)
		{
			String poketmon=br.readLine();
			String number=Integer.toString(i+1);
			map.put(poketmon, number);
			map.put(number,poketmon);
		}
		
		StringBuilder sb=new StringBuilder(m);
		for(int i=0; i<m; i++)
		{
			sb.append(map.get(br.readLine())+"\n");
		}
		System.out.print(sb);
	}	
} 
