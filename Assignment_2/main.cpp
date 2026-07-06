//
//  main.cpp
//  Assignment_2
//
//  Created by Erik Petersen on 7/5/26.
//


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int age;
    double height;
    string name;
    double weight;
    int score;
    double BMI;
    string  BMIRating;
    string grade;
   
    
    cout << "Enter your first name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;
    while (age <= 0) {
        cout <<"Invalid age. Enter a positive number: ";
        cin >> age;
    }
   
    
    cout << "Enter your height (in meters): ";
    cin >> height;
    while (height <= 0 ) {
        cout <<"Invalid height. Enter a positive number: ";
        cin >> height;
    }
    

    cout << "Enter your weight (in kilograms): ";
    cin >> weight;
    while (weight <= 0 ) {
        cout <<"Invalid weight. Enter a positive number: ";
        cin >> weight;
    }
    cout<< "Enter your test score: ";
    cin >> score;
    while (100<score || score<0 ) {
        cout <<" Invalid Score. Enter number between 0 and 100: ";
        cin >> score;
        
    }
    BMI=weight/(height*height);
    
    if (BMI<18.5)
        BMIRating="(underweight)";
    else if (18.5<=BMI && BMI<=24.9)
        BMIRating="(normal weight)";
    else if ((25<=BMI) && (BMI<=29.9))
        BMIRating="(overweight)";
    else
        BMIRating="(obese)";
        
        if (90<=score)
            grade="A";
        else if (80<=score)
            grade="B";
        else if (70<=score)
            grade="C";
        else if (60<=score)
            grade="D";
        else
            grade="F";
    
    cout << fixed << setprecision(2);
    
    cout <<"Hi " <<name<<", you are " <<age<< " years old with a BMI of " <<BMI<< " " <<BMIRating<< " and your grade is " <<grade<< endl;

    return 0;
}
