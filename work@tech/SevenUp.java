package com.practice;

import java.util.Scanner;

public class SevenUp {

	static void checkNumber(int n, int[] arr){

		String result[] = new String[arr.length];

		for (int i = 0; i < arr.length; i++) {
			if(arr[i]>7){
				result[i] = "UP";
			}else if(arr[i] == 7){
				result[i] = "EQUAL";
			}else{
				result[i] = "DOWN";
			}
		}

		for (int i = 0; i < arr.length; i++) {
			System.out.println(result[i]);
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int inpval[] = new int[t];

		for (int i =0 ; i< inpval.length; i++){
			inpval[i] = sc.nextInt();
		}


		checkNumber(t, inpval);

	}
}
