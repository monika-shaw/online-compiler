package com.practice;

import java.util.Scanner;

public class SqreTheNum {
	public static void main(String[] args) {
		Scanner sc =  new Scanner(System.in);
		int test = sc.nextInt();
		int values[] = new int[test];

		for (int i = 0; i < values.length; i++) {
			values[i] = sc.nextInt();
		}

		int sqr[] = new int[test];

		for (int i = 0; i < sqr.length; i++) {
			sqr[i] = values[i] * values[i];
			System.out.println(sqr[i]);
		}
	}
}
