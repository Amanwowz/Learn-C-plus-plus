#include<iostream>

using namespace std;

class simpleCalculator{
    protected:
        int a, b;
    public:
        void setNumbers(int, int);
        void displaySimpleMenu();
        int add(int, int);
        int sub(int, int);
        int div(int, int);
        int mult(int, int);
};
void simpleCalculator::setNumbers(int num1, int num2){
        a = num1;
        b = num2;
}
void simpleCalculator::displaySimpleMenu(){
    cout<<"Welcome to Simple calculator"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Division"<<endl;
    cout<<"4. Multiplication"<<endl;
    cout<<"Enter your choice : ";
}
int simpleCalculator::add(int num1, int num2){
    return num1 + num2;
}
int simpleCalculator::sub(int num1, int num2){
    return num1 - num2;
}
int simpleCalculator::div(int num1, int num2){
    if (num2 != 0){
        return num1 / num2;
    }
    else{
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
int simpleCalculator::mult(int num1, int num2){
    return num1 * num2;
}
class scientificCalculator{
    protected:
        float a,b;
int z;
clrscr();
void Power(float,float);
void Sine(float);
void Square(float);
void Cos(float);
void Tan(float);
void Log(float);
void Baselog(float);
        
};

int main(){
    

return 0;
}
/*
1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, /
and displays the results using another function.
2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and
displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?Q
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/