# SuperMarket-Management-System

This is a simple C++ program for managing a shopping system. It allows users to perform various operations such as adding, updating, and deleting products, as well as generating receipts for buyers.

## Features
Administrator Functions:

Add new products to the database.
Modify existing product details.
Delete products from the database.
Buyer Functions:

Buy products and generate receipts.
Data Persistence:

Products are stored in a text file named "database.txt".
Modifications to the database are made directly to this file.
Usage
Compilation: Compile the program using a C++ compiler. For example:

Copy code
g++ shopping_management.cpp -o shopping_management
Execution: Run the compiled program:

bash
Copy code
./shopping_management
Main Menu: Upon execution, the program displays a main menu with options to login as an Administrator, Buyer, or Exit.

Administrator Functions:

Enter the email and password (default: "j" and "8").
Perform desired operations like adding, updating, or deleting products.
Buyer Functions:

Choose to buy products and generate receipts.
Data Management:

All product data is stored in "database.txt".
Modifications are made directly to this file.
Notes
The program uses basic error handling and input validation.
File operations like reading, writing, appending, deleting, and renaming files are utilized for data management.
The code is structured into a class-based approach for better organization.
Caution: This program utilizes the goto statement, which is generally discouraged due to its potential for creating complex and hard-to-follow control flow.
Contributors
[Your Name]
License
This project is licensed under the MIT License.

You may need to adjust or expand this README depending on your specific requirements, such as adding more detailed instructions or information about the system's functionalities.






