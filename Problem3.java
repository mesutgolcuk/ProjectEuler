package eule;

public class Problem3 {

	public static void main(String[] args) {
		double i=2;
		double max=0;
		double number=600851475143.0;

		int count;
		while(i<number){
			count=0;
			if(number%i==0){
				int j=2;
				while(count == 0 && j<i){
					if(i%j==0){
						count++;
					}
					j++;
				}
				if(count==0){
					max=i;
					System.out.println(max);
				}
					
			}
			i++;
		}
		System.out.println(max);

	}

}
