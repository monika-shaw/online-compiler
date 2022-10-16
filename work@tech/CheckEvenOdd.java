package com.practice;

import java.util.Scanner;

public class CheckEvenOdd {

	public static String checkEvenOdd(int n){
			String result = " ";
			if (n%2==0){
				result = "EVEN";
			}else {
				result = "ODD";
			}

			return  result;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			int num = sc.nextInt();
			System.out.println(checkEvenOdd(num));
		}
	}
}
