package com.practice;

import java.util.Arrays;
import java.util.Scanner;

public class Temp {

	static void tempConvrt(int n ,double arr[]){

		double result[] = new double[n] ;

		for(int i = 0; i< arr.length; i++){
			result[i] = (9*arr[i] / 5) + 32;
		}

		System.out.println(Arrays.toString(result));
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		double arr[] = new double[n];

		for(int i = 0; i< arr.length; i++){
			arr[i] = sc.nextDouble();
		}

		tempConvrt(n,arr);
	}
}
