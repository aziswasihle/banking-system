# banking-system
Command line banking system in C++ with login, deposit, withdraw, send cash and check balance


# Banking System (C++)

A command line banking system written in C++ for the Introduction to Programming NQF 4 assignment at Gauteng City College.

## About the program
The program stores 3 users in arrays. Each user has a name, account number, PIN and balance. When it starts, it asks for a name, and if the name matches a stored user, that user is logged in. A menu then repeats until the user chooses to exit.

## Features
- Login by name
- Check balance
- Withdraw (cannot withdraw more than the balance)
- Deposit (amount must be more than 0)
- Send cash to an account number that is exactly 8 digits
- Error messages for invalid input
- Menu that repeats until the user chooses Exit

## Menu
```
Enter 1 to Check Balance
Enter 2 to Withdraw
Enter 3 to Deposit
Enter 4 to Send Cash
Enter 5 to exit
```

## Test users
| Name | Starting balance |
|---|---|
| Sihle | R8000 |
| Mbali | R500 |
| Thando | R7000 |

## How to run
1. Download `main.cpp` from this repository.
2. Open it in Code::Blocks, or any C++ compiler.
3. Build and run the program.
4. Type one of the test user names to log in.

## Concepts used
- Arrays to store user details
- Functions for each banking action
- `for` loop to search for the user
- `while` loop to repeat the menu
- `switch` statement for the menu options
- `if` / `else` statements for validation

## Author
Your name and surname
