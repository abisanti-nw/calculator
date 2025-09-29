#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Starter code
void calculator_with_undo() {
 int result = 0;
 vector<int> history_stack; // Store previous results
 
 while (true) {
   cout << "Current result: " << result << endl;
   cout << "Enter 'add [number]', 'subtract [number]', 'undo', or 'quit': ";
   
   string action;
   cin >> action;
   
   if (action == "add") {
     int number;
     cin >> number;
     //Task: Save current result, then add number
     history_stack.push_back(result); // Save current state
     result += number;
     
   } else if (action == "subtract") {
     int number;
     cin >> number;
     // Task: Save current result, then subtract number
     // Fill this in
     
   } else if (action == "undo") {
     // Task: Restore previous result
     // Fill this in
   } else if (action == "quit") {
       break;
   }
   }
  }
  int main() {
   calculator_with_undo();
   return 0;
  }
