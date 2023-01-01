#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate (string name, int matricMarks, int interMarks, int ecatMarks);
void comparison(string name1, int ecat1, string name2, int ecat2);

 

main()
{
system("cls");
int matricMarks1;
int interMarks1;
int matricMarks2;
int interMarks2;
string nameStd1;
string nameStd2;
int ecatMarks2;
int ecatMarks1;

printMenu();

cout << "Enter name of student 1: " ;
cin >> nameStd1 ;

cout << "enter marks of matric out of 1100: ";
cin >> matricMarks1 ;

cout << "enter marks of intermediate out of 1100: ";
cin >> interMarks1 ;

cout << "enter ecat marks out of 400: ";
cin >> ecatMarks1;
calculateAggregate(nameStd1, matricMarks1, interMarks1, ecatMarks1);


cout << "Enter name of student 2: " ;
cin >> nameStd2 ;

cout << "enter marks of matric out of 1100: ";
cin >> matricMarks2 ;

cout << "enter marks of intermediate out of 1100: ";
cin >> interMarks2 ;

cout << "enter ecat marks out of 400: ";
cin >> ecatMarks2 ;

calculateAggregate(nameStd2, matricMarks2, interMarks2, ecatMarks2);

comparison(nameStd1, ecatMarks1, nameStd2, ecatMarks2);

}



void printMenu()
{
system("color 04");
cout << "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz" << endl;
cout << "z                                                               z" << endl;
cout << "z                                                               z" << endl;
cout << "z                   University    Admission                     z" << endl;
cout << "z                                                               z" << endl;
cout << "z                      Management  System                       z" << endl;
cout << "z                                                               z" << endl;
cout << "z                                                               z" << endl;
cout << "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz" << endl;
}

void calculateAggregate (string name, int matricMarks, int interMarks, int ecatMarks)
{
float aggregate =((matricMarks*0.30/1100)+(interMarks*0.30/1100)+(ecatMarks*0.40/400))*100;
cout << "Aggregate of "  << name  << " is: " << aggregate << endl;

}

void comparison(string name1, int ecat1, string name2, int ecat2)

{

 if (ecat1 > ecat2)
   { 
    cout << name1 << " has roll no: 1" << endl ;
    cout << name2 << " has roll no: 2" << endl ;
   }
 if (ecat1 < ecat2)
   { 
    cout << name2 << " has roll no: 1" << endl ;
    cout << name1 << " has roll no: 2" << endl ;
   }

}