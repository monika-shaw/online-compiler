package com.practice;

import java.util.Scanner;

public class HappyBirthday {
	public static void main(String[] args) {
		String name[] = new String[1];
		int age[] = new int[1];

		Scanner sc = new Scanner(System.in);

		String Value[] = sc.nextLine().split(" ");
		name[0] = Value[0];
		age[0] = 2020 - Integer.parseInt(Value[1]);

		System.out.println("Happy Birthday "+name[0]+"! Your current age is " + age[0]);
	}
}
