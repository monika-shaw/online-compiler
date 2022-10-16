package com.practice;

import java.util.Scanner;

public class Palindrome {

	static void checkPalindrome(String arr[]){

		for (int i = 0; i < arr.length; i++) {

			String str = arr[i], reverseStr = "";

			int strLength = str.length();

			for (int j = (strLength - 1); j >=0; --j) {
				reverseStr = reverseStr + str.charAt(j);
			}

			if (str.toLowerCase().equals(reverseStr.toLowerCase())) {
				System.out.println("True");
			}
			else {
				System.out.println("False");
			}

		}

	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();

		String arr[] = new String[t];

		for (int i = 0; i < arr.length; i++) {
			arr[i] = sc.nextLine();
		}
		checkPalindrome(arr);

	}
}
