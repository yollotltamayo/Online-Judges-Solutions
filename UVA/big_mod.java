import java.math.BigInteger;
import java.util.Scanner;

public class big_mod{
	public static void main(String[]args){
		Scanner t = new Scanner(System.in);
		BigInteger b,p,m;
		String a = " ";
		while(t.hasNext()){
			b = t.nextBigInteger();
			p = t.nextBigInteger();
			m = t.nextBigInteger();
			System.out.println(b.modPow(p,m)); 
		}

	
	}
}