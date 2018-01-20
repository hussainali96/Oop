// av.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"iostream"                              //2. Write a program that determines a student’s grade. The program will read three types of scores
	                                            //  (quiz, mid-term, and final scores) and determine the grade based on the following rules:
	                                            //-if the average score = 90 % = >grade = A 
	                                            //- if the average score >= 70 % and <90 % = > grade = B 
	                                            //- if the average score >= 50 % and <70 % = >grade = C 
	                                            //- if the average score<50 % = >grade = F
using namespace std;      

int main()      
{
	int quiz, mid_term, final_score;            
    float sum, avg_score;
	cout << " Quiz = "; cin >> quiz;
	cout << " Mid_term = "; cin >> mid_term;
	cout << " Final_score = "; cin >> final_score;
	cout << endl;
	sum = quiz + mid_term + final_score;
	avg_score = sum / 3;
	if (avg_score >= 90) cout << " Grade = A";
	if (avg_score >=70&& avg_score < 90) cout << " Grade = B";
	if (avg_score >= 50&&avg_score < 70) cout << " Grade = C";
	if (avg_score <50) cout << " Grade = F";
	cout << endl;
    return 0;
}

