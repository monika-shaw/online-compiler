package com.practice;

import java.util.ArrayList;
import java.util.Scanner;

public class Midelement {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testCase = sc.nextInt();

		int userInp[] = new int[testCase];

		for (int i = 0; i < userInp.length; i++) {
			userInp[i] = sc.nextInt();
		}

		int count = 0;

		for (int i = 0; i < userInp.length; i++) {
			if (userInp[i] > 0){
				count++;
			}
		}

//		System.out.println(count);

		ArrayList<Integer> arr = new ArrayList<>();

		for (int i = 0; i < userInp.length; i++) {
				if (userInp[i]>0){
					arr.add(userInp[i]);
			}
		}


		for (int i = 0; i < count; i++) {
			System.out.println(arr.get(0));
		}

	}
}
