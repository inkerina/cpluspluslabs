#include <iostream>
using namespace std;


int main(){

  char name[80];
  double grade1;
  double grade2;
  double grade3;
  cout <<"Enter your first name: "<<endl;
  cin.getline(name, 80);
  cout <<"Enter you first grade: "<<endl;
  cin >> grade1;
  if (cin.peek() == '\n')
    cin.ignore();

  cout <<"Enter your second grade: "<<endl;
  cin >> grade2;
  if (cin.peek() == '\n')
    cin.ignore();

  cout <<"Enter your third grade: "<<endl;
  cin >> grade3;
  if (cin.peek() == '\n')
    cin.ignore();

  double avg = (grade1 + grade2 + grade3) / 3;
  cout << name <<" your average is " << avg <<endl;

  return 0;
}
