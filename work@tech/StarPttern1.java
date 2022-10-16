package com.practice;

import java.util.Scanner;

public class StarPttern1 {


	static void Pattern(int n){
		for(int i=0;i<n;i++){
			for (int j = 0; j <=i; j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}


	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Pattern(n);
	}
}
