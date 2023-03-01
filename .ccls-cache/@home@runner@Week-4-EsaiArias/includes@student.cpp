#include "student.h"
#include <iostream>

int Student::ID = 100;

void Student::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}

void Student::updateName ()
{
  string first, last;
  cout << "Enter first name for student " << studentID <<": ";
  cin >> first;
  cout << "Enter last name for student " << studentID <<": ";
  cin >> last;
  
  setName(first, last);
}

void Student::setScores()
{
  for (int i = 0; i < NBR_SCORES; i++)
    {
      cout << "Enter score " << i+1 << " for student " << studentID << ": " << firstName << " " << lastName << "\n";
      cin >> scores [i];
    }
}

void Student::showScores()
{
  int total = 0;
  cout << "Scores for student " << studentID <<": " << firstName << " " << lastName << " are\n";
  for (int i=0; i < NBR_SCORES; i++)
    {
      total+=scores[i];
      cout << scores [i] << " ";
    }
  cout << "\nThe average is: " << total/NBR_SCORES << "\n";
}


Student::Student(string first, string last)
  {
    studentID = ++ID;
    setName(first, last);
  }