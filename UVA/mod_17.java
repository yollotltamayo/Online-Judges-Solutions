import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void mod_17(String[]args){
		Scanner t = new Scanner(System.in);
		BigInteger b1;
		while(t.hasNext()){
			b1 = t.nextBigInteger();  
			if(b1.compareTo(BigInteger.ZERO) == 0)
				break;
			if(b1.mod(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO) == 0)
				System.out.println(1);
			else
				System.out.println(0);
		}
	}
}