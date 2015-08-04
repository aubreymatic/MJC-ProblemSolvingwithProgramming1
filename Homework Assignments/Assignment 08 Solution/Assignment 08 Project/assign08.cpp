/*
Chris Golpashin
Assignment 8
3-20-15
Problem Solving with Programming

Problem:
A teacher wants to grade a true/false test. a text file provided with the answer key at the top and has the 
student ID's and asnwers they gave on the test next to their name. blank answers are 0 points, correct
answers are 2 points, and wrong answers are -1 point. the program needs to use file stream and array's.

solution:
I will use 2 arrays to store the answer key and student id's plus a third array that will store 200 rows of 
the student’s answers. I will use one function which I will send the arrays data to be calculated. I also used 
global variables to easily change the amount of answers and questions. I have been getting issues with getting 
data from the infile to be stored correctly. I have worked on getting it fixed for a while, but when I tried 
using getline it caused the command console to just sit there and do nothing, which is why I started to use 
infile.get. When I run the program and it tells me that there are errors and I click yes to continue it crashes 
but on the command console I can see that the student id is being stored in the answers array and it doesn’t 
skip the whitespace between the id’s and answers. The problem is that I don’t know how to properly use infile 
and .get. I also had a hard time figuring out how getline could be used in a loop in a file but it kept causing 
syntax errors in my code which I could not figure out why it was doing that. It feels like I am so close but I’m 
not seeing it. I feel like I need to study the book more. I also need to try to practice more with infile, 
getline, .get, and more arrays.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// global variables which can be used to easily change the amount of students needed and questions
const int NUMBER_OF_QUESTIONS = 20;
const int NUMBER_OF_STUDENTS = 200;

//Function Prototypes
int gradeAnswers(char answers[], string students[], char studentsAnswers[][NUMBER_OF_QUESTIONS]);

int main()
{
	// arrays
	char answers[NUMBER_OF_QUESTIONS]; //stores the answer key that is in the file
	string students[NUMBER_OF_STUDENTS];// there are 200 students
	char studentsAnswers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS];// this array is suppose to store 20 character answers and store 200 of them because there are 200 students

	// opens file stream
	ifstream inFile;
	inFile.open("studentTestData.txt");// opens data file
	
	// for some reason this causes syntax errors in the code
	// gets the correct answers at the top of the text file
	for (int i = 0; i <= NUMBER_OF_QUESTIONS; i++){
		answers[i] = inFile.get();
		cout << answers[i];

	// stores students id's and answers
	for (int i = 0; i <= NUMBER_OF_STUDENTS; i++) {
		inFile >> students[i]; // gets student id's
		inFile.ignore(); 
		for (int j = 0; j <= NUMBER_OF_QUESTIONS; j++)
			studentsAnswers[i][j] = inFile.get(); // gets students answers from file ans stores them in array
	}
	
	inFile.close();// closes data file stream
	
	gradeAnswers(answers, students, studentsAnswers);// gives the function data to calculate
	return 0;
}

int gradeAnswers(char answers[NUMBER_OF_QUESTIONS], string students[], char studentsAnswers[][NUMBER_OF_QUESTIONS])
{
	// checks the students answers
	for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
		int score = 0; //score for the amount of points
		for (int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
			if (studentsAnswers[i][j] == answers[j]){ // compares students answers with correct answers
				score += 2; // correct answers
			}
			else if (studentsAnswers[i][j] != answers[j] && studentsAnswers[i][j] != ' '){
				score -= 1; // wrong answers
			}

			// displays the answer keys answer and next to it are the students answer so the user can compare
			cout << "Correct Answer: " << static_cast<char>(answers[j]) << " Student Answer: " << studentsAnswers[i][j] << endl;
		}

		if (score < 0)
			score = 0; // doesnt take away points if there is no score


		 cout << students[i] << " score = " << score << endl; //displays the total score of the students test
		 return score;
	}
}