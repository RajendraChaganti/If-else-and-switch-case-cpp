# If-else-and-switch-case-cpp

Aim: To Study and Implement Decision Making statements in C++. 

Tools: GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler          

--------------------------------------------------------------------------------
Program 5A – Check Whether a Number is Even or Odd (Using if-else)
--------------------------------------------------------------------------------

Objective: 

To input a number from the user and check whether it is even or odd using basic if-else condition.

Code Explanation:

- The program begins by taking a single integer input from the user using cin.  
- It uses the modulus operator % to check whether the number is divisible by 2.  
- If number % 2 == 0, it means the number is divisible by 2 and is therefore **even**.  
- Otherwise, it is **odd**.  
- The result is displayed using cout.

--------------------------------------------------------------------------------
Program 5B – Check Whether a Character is Vowel or Consonant (Using if-else)
--------------------------------------------------------------------------------

Objective:  

To determine if the character entered by the user is a vowel or a consonant.

Code Explanation: 

- The program asks the user to input a single character.  
- It then checks whether the character matches any of the 5 vowels: a, e, i, o, u (both lowercase and uppercase).  
- If the character matches any of these, it prints **"It is a vowel."**  
- If it doesn’t match, it assumes the input is a consonant and prints **"It is a consonant."**  
- This is implemented using a long if condition with the logical OR operator ||.

--------------------------------------------------------------------------------
Program 5C – Find the Greatest Among Three Numbers (Using Nested if)
--------------------------------------------------------------------------------

Objective: 

To input three numbers from the user and find the largest among them using nested if statements.

Code Explanation: 

- The program prompts the user to enter three integers.  
- It first compares the first number (a) with the second (b).  
- If a is greater than or equal to b, it then compares a with c.  
- If a >= c, then a is the greatest. Otherwise, c is the greatest.  
- If a is not greater than b, it checks if b >= c. If true, b is greatest; otherwise, c is greatest.  
- This step-by-step approach is a clear way to use **nested if blocks**.

--------------------------------------------------------------------------------
Program 5D – Outdoor Local Game Selection (Using switch-case)
--------------------------------------------------------------------------------

Objective: 

To allow the user to select a local outdoor game by entering a number between 1 and 5.

Code Explanation:  
- The user is asked to enter a number from 1 to 5.  
- Based on the number entered, the program uses a switch statement to print the name of a game:  
  1 → Lagoori  
  2 → Kho Kho  
  3 → Gilli Danda  
  4 → Kabbadi  
  5 → Pakdam Pakdai  
- If the entered number is not from 1 to 5, a default game **"Ice Water"** is printed.  
- This is a practical use of switch-case for menu selection.

--------------------------------------------------------------------------------
Program 5E – Simple Calculator (Using switch-case)
--------------------------------------------------------------------------------
Objective:

To create a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division.

Code Explanation:  
- The program takes two float numbers as input.  
- Then it shows the user a menu with 4 choices:  
  1 → Addition  
  2 → Subtraction  
  3 → Multiplication  
  4 → Division  
- Based on the user's choice (entered as an integer), it performs the corresponding arithmetic operation using a switch statement.  
- For **division**, it also checks if the second number is zero to prevent divide-by-zero errors.  
- The result is stored in a variable and printed using cout.

--------------------------------------------------------------------------------
