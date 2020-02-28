import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
	
		public static void main(String[] args) throws NumberFormatException, IOException {
			
			
			BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			
			boolean[] res=new boolean[10001];
			
			for(int i=2; i<Math.sqrt(10000); i++) {
				if(!res[i]) {
					for(int j=2; i*j<10000; j++) {
						res[i*j]=true;
					}
				}
			}
			
			int T=Integer.parseInt(br.readLine());
			
			for(int i=0; i<T; i++) {
				int n=Integer.parseInt(br.readLine());
				n/=2;
				int diff=0;
				while(true) {
					if(!res[n-diff]&&!res[n+diff]) {
						System.out.println((n-diff)+" "+(n+diff));
						break;
					}
					diff++;
				}
			}
			 
			
			
	}	
}