#include <iostream>
#include <cmath>
 

using namespace std;

 

int main()

{
     
    //P1
    {  //Problem 1:
    
      cout << "Problem 1\n" << endl;
    
      // 1.	Take any number the user enters 

      int num1;

      cout << "Give me a number for problem 1" << endl;

      cin >> num1;
      
      //2. Add 3 to the number

      cout << num1;

      num1 += 3;

      cout << " + 3 = " << num1 << endl;

      //3. Multiply the number by 2

      cout << num1;

      num1 *= 2;

      cout << " * 2 = " << num1 << endl;

      //4. Subtract 6 from the number

      cout << num1;

      num1 -= 6;

      cout << " - 6 = " << num1 << endl;
     
      //5. Divide the number by 2

      cout << num1;

      num1 /= 2;

      cout << " / 2 = " << num1 << endl;

      //6. The result should be the original number

      cout << "final result: " << num1 << endl;
    }

    //P2
    {  //Problem 2:
    
      cout << "\nProblem 2\n" << endl;
    
      // 1.	Enter a random number 

      int num2;
      int extNum2;
      cout << "Give me a random number for problem 2" << endl;

      cin >> num2;
      
      //2. Store the input number for later use (as another variable)

      extNum2 = num2;

      //3. Multiply the number by 5

      cout << num2;

      num2 *= 5;

      cout << " * 5 = " << num2 << endl;

      //4. Add 45 to the number

      cout << num2;

      num2 += 45;

      cout << " + 45 = " << num2 << endl;
      
      //5. Multiply the number by 2

      cout << num2;

      num2 *= 2;

      cout << " * 2 = " << num2 << endl;
     
      //6. Divide the number by 10

      cout << num2;

      num2 /= 10;

      cout << " / 10 = " << num2 << endl;

      //7. Subtract the original number from your previous answer
      
      cout << extNum2;

      extNum2 = num2 - extNum2;

      cout << " - " << num2 << " = " << extNum2 << endl;
      
      //8.	The result should be 9
      
      cout << "final result: " << extNum2 << endl;
    }

    //P3
    {
    // Problem 3: 
    
    cout << "\nProblem 3:\n" << endl;
    
    int num3;
    
    // 1.	Take any 2 digit number from 10 to 82. (You do not have to check the numbers just assume the user will enter a valid number so long as you tell them to).
    
    cout << "Enter any 2 digit number ranging from 10 to 82" << endl;
    
    cin >> num3;
    
    // 2.	Store an extra copy of this number for later (as you did in problem 2)
    
    int extNum3 = num3;

    // 3.  Add 116 to the number.

      cout << num3;

      num3 += 116;

      cout << " + 116 = " << num3 << endl;

    // 4. 	Remove the hundreds place from your number (by modulus operation)

      cout << num3;

      num3 %=  100;

      cout << " % 100 = " << num3 << endl;

    // 5.  Subtract 1 from the number.

      cout << num3;

      num3 -= 1;

      cout << " - 1 = " << num3 << endl;

    // 6.	Subtract this from your original number (stored in step 2).

      cout << extNum3;

      extNum3 = num3 - extNum3;

      cout << " - " << num3 << " = " << extNum3 << endl;

    // 7. 	What is your result?
    
      cout << "The Final Result is: " << extNum3 << endl;

}

    //P4
    {   // Problem 4:
    
    cout << "\nProblem 4:\n" << endl;
    
    int num4_1, num4_2;
    
    // 1. Select two, single digit, numbers, the first being in the range 2 to 6 and the second being in the range 1 to 9.
    
    cout << "Enter the first number (range 2 to 6):" << endl;
    cin >> num4_1;
    
    cout << "Enter the second number (range 1 to 9):" << endl;
    cin >> num4_2;
    
    // 2. Multiply the first number by five.
    
    cout << num4_1;
    num4_1 *= 5;
    cout << " * 5 = " << num4_1 << endl;
    
    // 3. Add three to that number.
    
    cout << num4_1;
    num4_1 += 3;
    cout << " + 3 = " << num4_1 << endl;
    
    // 4. Double the number.
    
    cout << num4_1;
    num4_1 *= 2;
    cout << " * 2 = " << num4_1 << endl;
    
    // 5. Add the second number to your previous step.
    
    cout << num4_1 << " + " << num4_2;
    num4_1 += num4_2;
    cout << " = " << num4_1 << endl;
    
    // 6. Subtract 6 from the new total.
    
    cout << num4_1;
    num4_1 -= 6;
    cout << " - 6 = " << num4_1 << endl;
    
    // The tens place should be the first number given and the ones place should be the second.
    
    int tens_place = num4_1 / 10;
    int ones_place = num4_1 % 10;
    
    cout << "The tens place is: " << tens_place << " (should be the first number given)" << endl;
    cout << "The ones place is: " << ones_place << " (should be the second number given)" << endl;
    }
    
    //P5
    {   // Problem 5:
    
    cout << "\nProblem 5:\n" << endl;
    
    int num5;
    
    // 1. Take a random number from the user
    
    cout << "Enter a random number:" << endl;
    cin >> num5;
    
    // 2. Multiply the number by 4
    
    int result = num5;
    cout << result;
    result *= 4;
    cout << " * 4 = " << result << endl;
    
    // 3. Add 1 to the number
    
    cout << result;
    result += 1;
    cout << " + 1 = " << result << endl;
    
    // 4. Multiply by the original number that the user input
    
    cout << result << " * " << num5;
    result *= num5;
    cout << " = " << result << endl;
    
    // 5. Subtract the original number away
    
    cout << result << " - " << num5;
    result -= num5;
    cout << " = " << result << endl;
    
    // 6. Take the square root of the number
    
    cout << "sqrt(" << result << ")";
    result = sqrt(result);
    cout << " = " << result << endl;
    
    // 7. Divide the number by 2
    
    cout << result;
    result /= 2;
    cout << " / 2 = " << result << endl;
    
    // 8. The result should be the original number
    
    cout << "The Final Result is: " << result << " (It should match the original number)" << endl;

    }

    //P6
    {   // Problem 6:
    
   cout << "\nProblem 6:\n" << endl;
    
    int num6;
    
    // 1. Take a whole number from the user that is larger than 1
    
    cout << "Enter a whole number larger than 1:" << endl;
    cin >> num6;
    
    // 2. Store a copy of the number for later
    
    int storedNum6 = num6;
    
    // 3. Add 2 to the number
    
    cout << num6;
    num6 += 2;
    cout << " + 2 = " << num6 << endl;
    
    // 4. Multiply the number by itself (not the stored copy, but the current value)
    
    cout << num6 << " * " << num6;
    num6 *= num6;
    cout << " = " << num6 << endl;
    
    // 5. Divide the number by 4
    
    cout << num6;
    num6 /= 4;
    cout << " / 4 = " << num6 << endl;
    
    // 6. Subtract away the stored value from step 2
    
    cout << num6 << " - " << storedNum6;
    num6 -= storedNum6;
    cout << " = " << num6 << endl;
    
    // 7. Multiply the number by 4
    
    cout << num6;
    num6 *= 4;
    cout << " * 4 = " << num6 << endl;
    
    // 8. Take the square root of the number
    
    cout << "sqrt(" << num6 << ")";
    num6 = sqrt(num6);
    cout << " = " << num6 << endl;
    
    // 9. The result should be the same for any value specified
    
    cout << "The Final Result is: " << num6 << " (This should be the same for any value specified)" << endl;

    }

    //P7
    {   // Problem 7:
    
   cout << "\nProblem 7:\n" << endl;
    
    int num7;
    
    // 1. Get a random number from the user
    
    cout << "Enter a random number:" << endl;
    cin >> num7;
    
    // 2. Remember the original number
    
    int originalNum7 = num7;
    
    // 3. Add 3 to the number
    
    cout << num7;
    num7 += 3;
    cout << " + 3 = " << num7 << endl;
    
    // 4. Double the number
    
    cout << num7;
    num7 *= 2;
    cout << " * 2 = " << num7 << endl;
    
    // 5. Multiply by 5
    
    cout << num7;
    num7 *= 5;
    cout << " * 5 = " << num7 << endl;
    
    // 6. Knock off the last digit (remove the 1’s place)
    
    cout << num7;
    num7 /= 10;
    cout << " / 10 (remove last digit) = " << num7 << endl;
    
    // 7. Finally remove the original number
    
    cout << num7 << " - " << originalNum7;
    num7 -= originalNum7;
    cout << " = " << num7 << endl;
    
    // 8. What is the result?
    
    cout << "The Final Result is: " << num7 << endl;

    }

    //P8
    {   // Problem 8:
    
   cout << "\nProblem 8:\n" << endl;
    
    int num8;
    int reversed1;
    int reversed2;
    
    // 1. Have the person write down any three digits number with decreasing digits (432 or 875).
    
    cout << "Enter a decreasing three digit number:" << endl;
    cin >> num8;
    
    // 2. Reverse the number you wrote in #1. 
    
    int ones1, tens1, hundred1;
    
    hundred1 = num8 / 100;
    tens1 = (num8 / 10) % 10;
    ones1 = num8 % 10; 
    
    reversed1 = ones1 * 100 + tens1 * 10 + hundred1;
    
    cout << num8 << " reversed is " << reversed1 << endl;
        
    // 3. Subtract the number obtained in #2 from the number you wrote in #1 (#1 - #2)
    
    cout << num8;
    num8 -= reversed1;
    cout << " - " << reversed1 << " = " << num8 << endl;
    
    // 4. Reverse the number obtained in #3
    
    int ones2, tens2, hundred2;
    cout << num8;
    hundred2 = num8 / 100;
    tens2 = (num8 / 10) % 10;
    ones2 = num8 % 10; 
    reversed2 = ones2 * 100 + tens2 * 10 + hundred2;
    
    cout << " reversed is " << reversed2 << endl;
    
    // 5. Add the numbers found in #3 and #4
    
    cout << num8;
    num8 += reversed2;
    cout << " + " << reversed2 << " = " << num8 << endl;
    
    // 6. What is the answer?
    
    cout << "The Final Answer is: " << num8 << endl;
    }

}


