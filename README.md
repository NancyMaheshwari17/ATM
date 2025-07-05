🏧 ATM Management System – C Project
📌 Project Overview
This is a simple ATM (Automated Teller Machine) simulation written in C language, built for educational purposes. It allows users to perform basic banking operations like:

Cash withdrawal

Deposit

Balance inquiry

PIN change

Fund transfer

It includes a basic PIN-based login with input masked by asterisks (*).

📂 File Structure
File Name	Description
atm.c	Main source code file for the ATM simulation system

💡 Features
🔐 PIN-based secure login

💸 Withdraw and deposit cash

🔁 Fund transfer to a verified account number

🔁 PIN change with confirmation

📊 Balance inquiry

✨ Masked PIN input with * using getch()

Simple text-based interface

🛠️ Technologies Used
C Language

stdio.h, conio.h, stdlib.h libraries

DOS/Console-based UI

▶️ How to Run
Using a C Compiler (e.g., Turbo C / GCC / Code::Blocks):

Open atm.c in your C IDE or compiler.

Compile the file.

Run the executable from the terminal or within the IDE.

Sample Run Flow:

Insert card → Choose account type → Enter 4-digit PIN (masked with *)

Choose transaction type:

1. Withdrawal
2. Deposit
3. Pin Change
4. Fund Transfer
5. Balance Inquiry
Follow the prompts for your selected operation.

🧪 Sample Data
Initial PIN: 1234

Initial Balance: ₹10000

Account Number for Fund Transfer: 1234567890

⚠️ Note
conio.h is a non-standard header used for functions like getch() and getche(), and it may not work in modern Linux/Unix environments.

The code is built for Windows/DOS-based compilers (like Turbo C++).


👩‍💻 Author
Developed by Nancy Maheshwari
📅 Project Date: July 2025

