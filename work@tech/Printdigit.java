package com.practice;

import java.util.Scanner;

public class Printdigit {

	static void reverse(int n){

		int a =0;

		int rev = 0; // reversed number
		int rem;   // remainder

		while(n>0){
			rem = n%10;
			rev = (rev*10) + rem;
			n = n/10;
		}

		int num;
		num = rev;

		while (num != 0){
			a = num%10;
			num = num/10;
			System.out.print(a + " ");
		}
//		return a;
		System.out.println();
	}



	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			int iptnum = sc.nextInt();
			reverse(iptnum);
		}

	}
}
