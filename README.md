# 🔐 Function Chaos Login

A simple C++ console-based login system that allows the user to authenticate using a username and password with a limited number of attempts.

## 💡 Features
- Username and password authentication  
- Maximum of 3 login attempts  
- Account blocking after multiple failed attempts  
- Console-based interaction  
- Beginner-friendly C++ code structure  
- Function-based design  

## 🧠 Example Output
Enter Username, hello  
Enter Password: 123456789  
Logged In  

**OR**

Enter Username, test  
Wrong Username  
Enter Username, hello  
Enter Password: 1111  
Wrong Password  
You no longer have the right to try. Your account has been blocked.

## ⚙️ How to Run
1. Clone or download this project:  
   `git clone https://github.com/wdemirkoll/FunctionChaosLogin.git`

2. Open a terminal in the project directory.

3. Compile the program:  
   `g++ main.cpp -o login`

4. Run the program:  
   `./login`

## 🧩 Code Overview
- **Username Input** → Prompts the user to enter a username  
- **Password Input** → Prompts the user to enter a password  
- **Validation Logic** → Compares user input with predefined credentials  
- **Attempt Counter** → Decreases remaining attempts after each failure  
- **Account Block System** → Blocks access after 3 unsuccessful attempts  

## 🧑‍💻 Author
**wdemirkoll**  
[@wdemirkoll](https://github.com/wdemirkoll)  
Created: December 2025  

⭐ If you like this project, consider giving it a star!
