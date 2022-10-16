package com.practice;

public class TwoCharLine {
	public static void main(String[] args) {
		String value = "WORKATTECH";

		for (int i = 0; i <value.length() ; i=i+2) {
			System.out.println(value.substring(i, i+2));
		}
	}
}
