#include <iostream>
#include <cstring> //the header file required for string functions
#include <fstream> //header file for console input/output
using namespace std;
void display();
void display() //function define
{
	cout << "Invalid mark" << endl; //output for the responding function
}
int main()
{
	int i = 0, no_student; //declare i=0 and input for number student
	double algebra[100], multimedia[100], coding[100], coa[100]; //create and declare size for array
	char classroom[10]; //datatype char that can stored until 10 element
	string name[100]; //create and declare size for array
	ofstream data; //create output file
	data.open("FINAL EXAMINATION RESULTS.txt", ios::out); //MARKING AND GRADING PROGRAM.txt file created
	cout << "FINAL EXAMINATION RESULTS" << endl;
	cout << endl << "---------------------------" << endl;
	cout << "Enter classroom name : ";
	cin.getline(classroom, 10); //stored the first 10 character from the text entered into the classroom //last character reserved for the null character
	cout << "Enter number of student : ";
	cin >> no_student; //get number student
	cout << "---------------------------" << endl << endl;
	for (i = 0; i < no_student; i++) //counter variable for loop
	{
		cout << "==================================================" << endl;
		cout << "Enter Student Name : ";
		cin >> name[i]; //get name of the students
		cout << endl;
		cout << "Subject : Linear Algebra and Discrete Mathematics " << endl;
		cout << "Mark : ";
		cin >> algebra[i]; //get mark algebra and store in array
		if (algebra[i] >= 80 && algebra[i] <= 100) //selection statement to determine algebra mark input
		{
		cout << "Grade : A" << endl;
		}
		else if (algebra[i] >= 60 && algebra[i] <= 79) //selection statement to determine algebra mark input
		{
		cout << "Grade : B" << endl;
		}
		else if (algebra[i] >= 50 && algebra[i] <= 59) //selection statement to determine algebra mark input
		{
		cout << "Grade : C" << endl;
		}
		else if (algebra[i] >= 45 && algebra[i] <= 49) //selection statement to determine algebra mark input
		{
		cout << "Grade : D" << endl;
		}
		else if (algebra[i] >= 40 && algebra[i] <= 44) //selection statement to determine algebra mark input
		{
		cout << "Grade : E" << endl;
		}
		else if (algebra[i] >= 0 && algebra[i] <= 39) //selection statement to determine algebra mark input
		{
		cout << "Grade : F" << endl;
		}
		else
		{
			display(); //function call and it will display the message
		}
		cout << " " << endl;
		cout << "Subject : Multimedia System " << endl;
		cout << "Mark : ";
		cin >> multimedia[i]; //get mark multimedia and store in array
		if (multimedia[i] >= 80 && multimedia[i] <= 100) //selection statement to determine multimedia mark input
		{
		cout << "Grade : A" << endl;
		}
		else if (multimedia[i] >= 60 && multimedia[i] <= 79) //selection statement to determine multimedia mark input
		{
		cout << "Grade : B" << endl;
		}
		else if (multimedia[i] >= 50 && multimedia[i] < 59) //selection statement to determine multimedia mark input
		{
		cout << "Grade : C" << endl;
		}
		else if (multimedia[i] >= 45 && multimedia[i] <= 49) //selection statement to determine multimedia mark input
		{
		cout << "Grade : D" << endl;
		}
		else if (multimedia[i] >= 40 && multimedia[i] <= 44) //selection statement to determine multimedia mark input
		{
		cout << "Grade : E" << endl;
		}
		else if (multimedia[i] >= 0 && multimedia[i] <= 39) //selection statement to determine multimedia mark input
		{
		cout << "Grade : F" << endl;
		}
		else
		{
			display(); //function call and it will display the message
		}
		cout << " " << endl;
		cout << "Subject : Programming Technique " << endl;
		cout << "Mark : ";
		cin >> coding[i]; //get mark coding and store in array
		if (coding[i] >= 80 && coding[i] <= 100) //selection statement to determine coding mark input
		{
		cout << "Grade : A" << endl;
		}
		else if (coding[i] >= 60 && coding[i] <= 79) //selection statement to determine coding mark input
		{
		cout << "Grade : B" << endl;
		}
		else if (coding[i] >= 50 && coding[i] <= 59) //selection statement to determine coding mark input
		{
		cout << "Grade : C" << endl;
		}
		else if (coding[i] >= 45 && coding[i] <= 49) //selection statement to determine coding mark input
		{
		cout << "Grade : D" << endl;
		}
		else if (coding[i] >= 40 && coding[i] <= 44) //selection statement to determine coding mark input
		{
		cout << "Grade : E" << endl;
		}
		else if (coding[i] >= 0 && coding[i] <= 39) //selection statement to determine coding mark input
		{
		cout << "Grade : F" << endl;
		}
		else
		{
			display(); //function call and it will display the message
		}
		cout << " " << endl;
		cout << "Subject : Computer Organization and Architecture " << endl;
		cout << "Mark : ";
		cin >> coa[i]; //get mark for coa and store in array
		if (coa[i] >= 80 && coa[i] <= 100) //selection statement to determine coa mark input
		{
		cout << "Grade : A" << endl;
		}
		else if (coa[i] >= 60 && coa[i] <= 79) //selection statement to determine coa mark input
		{
		cout << "Grade : B" << endl;
		}
		else if (coa[i] >= 50 && coa[i] <= 59) //selection statement to determine coa mark input
		{
		cout << "Grade : C" << endl;
		}
		else if (coa[i] >= 45 && coa[i] <= 49) //selection statement to determine coa mark input
		{
		cout << "Grade : D" << endl;
		}
		else if (coa[i] >= 40 && coa[i] <= 44) //selection statement to determine coa mark input
		{
		cout << "Grade : E" << endl;
		}
		else if (coa[i] >= 0 && coa[i] <= 39) //selection statement to determine coa mark input
		{
		cout << "Grade : F" << endl;
		}
		else
		{
			display(); //function call and it will display the message
		}
		cout << "==================================================" << endl <<
			endl;
	}
	for (i = 0; i < no_student; i++) //counter variable for loop
	{
		data << "==================================================" << endl;
		data << "Student's Name" << " " << "Classroom" << endl; //file information
		data << name[i] << " " << classroom << endl; //print name and classroom in file MARKING AND GRADING PROGRAM.txt
			if (algebra[i] > 100) //condition for algebra subject
			{
				data << endl << "Linear Algebra and Discrete Mathematics : Invalid mark" << endl; //print message if number bigger than 100
			}
			else
			{
				data << endl << "Linear Algebra and Discrete Mathematics : " <<
					algebra[i] << endl; //print message and algebra mark in MARKING AND GRADING PROGRAM.txt
			}
		if (multimedia[i] > 100)
		{
			data << endl << "Multimedia System : Invalid mark" << endl;
		}
		else
		{
			data << endl << "Multimedia System : " << multimedia[i] << endl;
			//print message and multimedia mark in MARKING AND GRADING PROGRAM.txt
		}
		if (coding[i] > 100)
		{
			data << endl << "Programming technique : Invalid mark" << endl;
		}
		else
		{
			data << endl << "Programming Technique : " << coding[i] << endl;
			//print message and coding mark in MARKING AND GRADING PROGRAM.txt
		}
		if (coa[i] > 100)
		{
			data << endl << "Computer Organization and Architecture : Invalid mark" << endl;
		}
		else
		{
			data << endl << "Computer Organization and Architecture : " <<
				coa[i] << endl; //print message and coa mark in MARKING AND GRADING PROGRAM.txt
		}
		data << "==================================================" << endl <<
			endl;
	}
	data.close(); //file Grading.txt closed
	return 0;
}