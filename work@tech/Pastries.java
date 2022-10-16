package com.practice;

import java.util.Scanner;

public class Pastries {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int value[] = new int[2];

		value[0] = sc.nextInt();
		value[1] = sc.nextInt();

		int pastries = value[0];
		int queue = value[1];
		int order[] = new int[queue];

		for (int i = 0; i < queue; i++) {
			order[i] = sc.nextInt();
			int remainingPastries = pastries-order[i];
			if (remainingPastries >= -1){
				System.out.println("Enjoy your dessert!");
			}else {
				System.out.println("Sorry, we are all out!");
			}

			pastries = remainingPastries;
		}
	}
}
