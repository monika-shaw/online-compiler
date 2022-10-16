package com.practice;

import java.util.Locale;
import java.util.Scanner;

public class Vowels {
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			int n = sc.nextInt();
			sc.nextLine();

			String names[] = new String[n];

			for (int i = 0; i < names.length; i++) {
				names[i] = sc.nextLine();
			}

			for (int i = 0; i < names.length; i++) {
				int count = 0;
				for (int j = 0; j < names[i].length(); j++) {
					if(names[i].charAt(j) == 'a'|| names[i].charAt(j) == 'e'|| names[i].charAt(j) == 'i' || names[i].charAt(j) == 'o' || names[i].charAt(j) == 'u' || names[i].charAt(j) == 'A'|| names[i].charAt(j) == 'E'|| names[i].charAt(j) == 'I' || names[i].charAt(j) == 'O' || names[i].charAt(j) == 'U' ) {
						count++;
					}
				}
				System.out.println(names[i]);
			}
	}
}
