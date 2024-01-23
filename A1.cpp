/*
  Steps:
    1. Add the following code to the top of your file
      #include <iostream>
      using namespace std;
      unordered_map<int, string> runTestCases();

    2. Add the runTestCases() function below to the end of your code

  Adding test cases:
    - Make sure to follow the general structure of the previous test cases
    - Make sure your test case works on your device before adding it here
    - Add your test case to the end of the cases

    General format:
      // Test Case 1
      // Test description...
      try{
        expected = ... ;
        actual = function(){}
        if(actual == expected){
          testCases[1] = "PASSED";
        }
        else{
        testCases[1] = "FAILED";
        cout << "Test 1 Failed:" << endl;
        cout << "Expected: " + expected << endl;
        cout << "Actual: " + actual << endl;
        }
      }
      catch (const exception &e) {
        testCases[1] = "FAILED";
        cout << "Test 1 Failed:" << endl;
        cout << "Unexpected Exception: " << e.what() << endl;
    }

*/


// Test Cases Function
unordered_map<int, string> runTestCases(){
  unordered_map<int, string> testCases;

  // Test Case 1: Male, Age: 25, Sedentary Lifestyle
    // The expected result is 2400 calories.
    try {
        int expected = 2400;
        int actual = get_daily_calories(25, "male", "sedentary");

        if (actual == expected) {
            testCases[1] = "PASSED";
        } else {
            testCases[1] = "FAILED";
            cout << "Test 1 Failed:" << endl;
            cout << "Expected: " << expected << endl;
            cout << "Actual: " << actual << endl;
        }
    } catch (const exception &e) {
        testCases[1] = "FAILED";
        cout << "Test 1 Failed:" << endl;
        cout << "Unexpected Exception: " << e.what() << endl;
    }

  return testCases;
}






