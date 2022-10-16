package com.practice;

import java.util.Scanner;

public class ReverseOrder {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		int inp[] = new int[t];

		for (int i = 0; i < inp.length; i++) {
			inp[i] = sc.nextInt();
		}

		for (int i = inp.length-1; i >= 0; i--) {
			System.out.print(inp[i]+ " ");
		}
	}
}
