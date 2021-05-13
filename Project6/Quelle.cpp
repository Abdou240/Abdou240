#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
#include<iostream>
#include <type_traits>
#include <string.h>
using  namespace std;
#define btoa(Status) ((Status)?"true":"false")

//struct Student
//{
//	char name[20];
//	char major[50];
//	int age;
//	double gpa;
//};

//struct Student
//{
//	char Name[50];
//	char Major[50];
//	int Age;
//	double gpa;
//};


//int max(int num1, int num2, int num3) {
//
//	if (num1 > num2) {
//		if (num1 > num3) {
//			return num1;
//		}
//		else
//		{
//			return num3;
//		}
//		
//
////		printf("a Größer b");
//	
//	}
//	else if (num1 < num2) {
////		if (num1 > num3) {
//		
//		if (num2 > num3) {
//			return num2;
//		}
//		else
//		{
//			return num3;
//		}
//
//		}
//		
//		
////		printf("b Größer a");
//		// return num2;
//	/*}
//	else { 
//		return 0;
//	*/	
//		//printf("a gleich groß b");
//	
//	/*}*/
//
//}
//double cube(double Num){
//
//	double result = Num * Num*Num;
//	return result;
//
//}
//
//
//int Mult(int a) {
//	int b;
//	return b = pow(a,3);
//	
//}
//
// void SayHi (char Name [], char Name2 [], int Age  ){
//	 printf("Hello, My Name is %s %s. I am %d Years Old.", Name, Name2, Age);
// 
// }

// erste Zahl Operartor zweite Zahl
//
//int Sum(int Num1, int Num2) {
//
//	return Num1 + Num2;
//}
//int Sub(int Num1, int Num2) {
//
//	return Num1 - Num2;
//}
//int Div(int Num1, int Num2) {
//
//	return Num1 / Num2;
//}
//int Rest_Div(int Num1, int Num2) {
//
//	return Num1 % Num2;
//}
//
//int Mult(int Num1, int Num2) {
//
//	return Num1 * Num2;
//}
//
//int Erg(char OP, int Num1, int Num2) {
//
//	if (OP == '+')
//	{
//	return	Sum(Num1, Num2);
//	}
//	else if (OP == '-')
//	{
//		return	Sub(Num1, Num2);
//
//	}
//	else if (OP == '/')
//	{
//		return	Div(Num1, Num2);
//	}
//	else if (OP == '%')
//	{
//		return	Rest_Div(Num1, Num2);
//	}
//	else if (OP == '*')
//	{
//		return Mult(Num1, Num2);
//	}
//	else
//	{
//		return 0;
//
//	}
//}

//
//void Note(int Gerade) {
//	
//	switch (Gerade)
//	{
// 	case 1:std::cout << "A+"; break;
////	case 1.2 :std::cout << "A"; break;
////	case 1.3:std::cout << "A-"; break;
////	case 1.7:std::cout << "B+"; break;
//	case 2:std::cout << "B"; break;
////	case 2.3:std::cout << "B-"; break;
////	case 2.7:std::cout << "C+"; break;
//	case 3:std::cout << "C"; break;
////	case 3.3 :std::cout << "C-"; break;
////	case 3.7:std::cout << "D+"; break;
//	case 4:std::cout << "D"; break;
////	case 4.3:std::cout << "D-"; break;
//	case 5:std::cout << "F"; break;
//    default:std::cout << "Kein Gültiges Wert"; break;
//	
//	}
//
//}
//
//void Grade(char grade) {
//
//	switch (grade) {
//
//		case'A':cout << "You did Great!" << endl;
//			break;
//		case'B':cout << "You did Alright!" << endl;
//			break;
//		case'C':cout << "You did poorly!" << endl;
//			break;
//		case'D':cout << "You did very Bad!" << endl;
//			break;
//		case'F':cout << "You Failed!" << endl;
//			break;
//	    default :cout << "Invalid Grade!" << endl;
//			break;
//	}
//
//
//}


int main()
{
	/*int index = 1;


	do {

		printf("%d\n", index);
		index++;




	} while (index <= 5);
*/


	int  SecretNummer = 5;
	int Guess =0;
	bool Status = true ;
	do {
	
		printf("Status: %s\n",btoa(Status));
		printf("Schätzen Sie Nummer ein: ");
		scanf(" %d", &Guess);
		 Status = (Guess == SecretNummer);
		printf("Guess: %d \t SecretNummer: %d \t Status: %s\n",Guess,SecretNummer, btoa(Status));

		
		if (Guess != SecretNummer){
	    printf("Sie haben den falschen Nummer erwischt.\n");
	
        }else {
			printf("Sie haben den richtigen Nummer erwischt.");
	}

	} while (Guess != SecretNummer);




	

//	/*struct Student Student1;
//	Student1.Age = 20;
//	Student1.gpa = 3.2;
//	strcpy(Student1.Name,"Jim");
//	strcpy(Student1.Major,"Besiness");
//
//	struct Student Student2;
//	Student2.Age = 23;
//	Student2.gpa = 3.8;
//	strcpy(Student2.Name, "Alex");
//	strcpy(Student2.Major, "BWL");
//
//	printf("%s  %s", Student1.Major,Student2.Major);
//*/


	/*char grade;

	while (true){
	printf("Your Grade is: ");
	scanf(" %c", &grade);

	Grade(grade);

	}*/
	/*struct Student Student1;

	Student1.age = 22;
	Student1.gpa = 20.0;
	strcpy(Student1.name, "Abderrahmen");
    strcpy(Student1.major, "Business");
	printf("%s", Student1.name);*/

	/*int note;

	while (1==1){
	printf("Geben Sie Ihere Schulnote: ");
	scanf("%d", &note);
	Note(note);
	printf("\n");
	}
*/
	/*int a, b;
	char op ;
	while (1==1){
	printf("Geben Sie Erste Zahl:");
	scanf("%d", &a);
	printf("Geben Sie Operator:");
	scanf(" %c", &op);
	printf("Geben Sie Zweite Zahl Zahl:");
	scanf("%d", &b);
	
	printf("Ergebniss ist: %d\n", Erg(op, a, b));


	}*/

	/*int a, b,c;

	while (1==1){

	printf("Geben Sie Erste Zahl:");
		scanf("%d", &a);
		printf("Geben Sie Zweite Zahl:");
		scanf("%d", &b);
		printf("Geben Sie Dritte Zahl:");
		scanf("%d", &c);

		if (max(a,b,c) ==a){

			printf("%d ist groesste Zahl der %d und %d.\n", max(a, b, c), b, c);
		}
		else if (max(a, b, c) == b) {

			printf("%d ist groesste Zahl der %d und %d.\n", max(a, b, c), a, c);
		}
		else  {

			printf("%d ist groesste Zahl der %d und %d.\n", max(a, b, c), a, b);
		}*/
		/*if (max(a,b) != 0) {
			
			if (max(a,b)== a){
			
			printf("Die Zahl %d ist groesser als %d.\n", max(a,b), b);
		}
			else
			{
				printf("Die Zahl %d ist groesser als %d.\n", max(a, b), a);
			}
		}

		else 
		{
			printf("%d und %d sind gleich gross.\n", a,b);
		}
*/
	/*}*/

	/*printf("Answer: %f", cube(3.0));*/
		
	/*
	int Result, Eingabe;

	printf("Bette Geben Sie Die Nummer die Sie Multiplzieren wollen: ");
	scanf("%d", &Eingabe);

	Result = Mult(Eingabe);

	cout << Result << endl;
	int Age;
	char Vorname[20], Nachname [20];
	printf("Geben Sie Ihre Name: ");
	scanf("%s %s", Vorname,Nachname);
	printf("Geben Sie Ihre Älter: ");
	scanf("%d", &Age);
	SayHi(Vorname, Nachname, Age);
*/
	/*int lyckyNummers[] = {4,8,15,16,23,42};
	int sizeofarray = sizeof(lyckyNummers) / sizeof(lyckyNummers[0]);
		for (int i = 0;i<sizeofarray;i++){
	printf("%d\n", lyckyNummers[i]);
	cout << lyckyNummers[i] << endl;
	}
	printf("ggg\n");
	cout << sizeof(lyckyNummers) << endl;
	cout << sizeof(lyckyNummers[0]) << endl;
	int sizeofArray = sizeof(lyckyNummers) / sizeof(lyckyNummers[0]);
	cout << sizeofArray << endl;

*/

	/*char Color[20];
	char  PluralNoun[20];
	char  CelebrityF[20];
	char  CelebrityL[20];
	printf("Enter a color :");
	scanf("%s", Color);
	printf("Enter a Plural Noun :");
	scanf("%s", PluralNoun);
	printf("Enter a Celebrity :");
	scanf("%s%s", CelebrityF, CelebrityL);


	printf("%s are Red\n",Color);
	printf("%s are blue\n",PluralNoun);
	printf("I love %s %s\n",CelebrityF, CelebrityL);*/


	return 0;

	//double Num1, Num2, Result;
	//printf("Geben Sie Erste Zahl: ");
	//scanf("%lf", &Num1);
	//printf("Geben Sie Zweite Zahl: ");
	//scanf("%lf", &Num2);
	//Result = Num1 + Num2;
	//printf("Ergebniss ist: %lf", Result);

	//double gba;
	//int age;
	//char grade;
	//char Name[20];
	//char Name_1[20];
	///*
	//printf(" Enter your Age: ");
	//scanf("%d", &age);
	//printf(" Enter your GBP: ");
 //   scanf("%lf", &gba);
	//*/
	////printf(" Enter your Grade: ");
	////scanf(" %c", &grade);
	////printf(" Enter your Name: ");
	////scanf(" %s", Name);
	//printf(" Enter your Name_1: ");
	//fgets(Name_1,20,stdin);
	////printf("\n Your are %d old.\n Your gba is %f.", age, gba);
	//printf("\n Your Name is %s", Name_1);
	//

	//int F, C;
	//int L = 0;
	//int U = 300;
	//int S = 20;
	//for (F = 0; F <= U; F = F + S) {
	//	C = 5 * (F - 32) / 9;
	//	printf("%d %d\n", F, C);
	//}

}