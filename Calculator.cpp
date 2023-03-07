#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1, num2,result;
    system("read -n 1 -s -p \"Press any key to continue to the calculator wizard...\"");
    cout << endl;
    string add = "Add";
    string subtract = "Subtract";
    string multiply = "Multiply";
    string divide = "Divide";
    string square_root = "Square_Root";
    string power = "Exponent";
    cout << "Enter a mathematical process:" << endl;
    bool rerun = true;
    string process;
    char rerun_process;
    while(rerun == true){
        cout << "Add\nSubtract\nMultiply\nDivide\nSquare_Root\nExponent" << endl;
        cout << "Enter the process:[Case Sensitive] - ";
        cin >> process;
       if(process == subtract){
            cout << "Enter the first number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = num1 - num2;
            cout << "The result is: " << result << endl;
        }else if(process == add){
            cout << "Enter the first number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = num1 + num2;
            cout << "The result is: " << result << endl;
        }else if(process == multiply){
            cout << "Enter the first number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = num1 * num2;
            cout << "The result is: " << result << endl;
        }else if(process == divide){
            cout << "Enter the first number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = num1 / num2;
            cout << "The result is: " << result << endl;
        }else if(process == square_root){
            cout << "Enter the number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = sqrt(num1);
            cout << "The result is: " << result << endl;
        }else if(process == power){
            cout << "Enter the first number:" << endl;
            cin >> num1;
            cout << "Enter the second number:" << endl;
            cin >> num2;
            result = pow(num1, num2);
            cout << "The result is: " << result << endl;
        }else{
            cout << "Invalid input. Please try again in the next process." << endl;
        }
        cout << "Would you like to run another process? (Y/N)[Non-Case Sensitive]" << endl;
        cin >> rerun_process;
        if(rerun_process == 'Y' || rerun_process == 'y'){
            continue;
        }else if(rerun_process == 'N' || rerun_process == 'n'){
            rerun = false;
            break;
        }else{
            cout << "Invalid input. Please try again in the next process." << endl;
        }
        process = " ";
        num1 = 0; num2 = 0;
    }
    system("read -n 1 -s -p \"Press any key to exit the calculator wizard...\"");
    return 0;
}