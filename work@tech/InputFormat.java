package com.practice;

import java.util.Scanner;

public class InputFormat {
	public static void main(String[] args) {

		String name[] = new String[1];
		int age[] = new int[1];

		Scanner sc = new Scanner(System.in);

		String value[] = sc.nextLine().split(" ");
		name[0] = value[0];
		age[0] = Integer.parseInt(value[1])+1;

		System.out.println("Hello "+ name[0]+"! Next year, you will be "+ age[0] +" years old");
	}
}
