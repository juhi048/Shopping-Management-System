# Shopping Management System

This is a simple C++ program for managing a shopping system. It allows users to perform various operations such as adding, updating, and deleting products, as well as generating receipts for buyers.

## Features

- **Administrator Functions**:
  - Add new products to the database.
  - Modify existing product details.
  - Delete products from the database.

- **Buyer Functions**:
  - Choose products to buy and generate receipts.

- **Data Persistence**:
  - Products are stored in a text file named "database.txt".
  - Modifications to the database are made directly to this file.

## Installation

1. **Clone the Repository**:
   git clone https://github.com/your_username/shopping-management.git


2. **Compile the Program**:
   g++ shopping_management.cpp -o shopping_management

   
3. **Run the Program**:
   ./shopping_management

   
## Usage

Upon execution, the program displays a main menu with options to login as an Administrator, Buyer, or Exit. Follow the on-screen instructions to perform desired operations.

## Contributing

Contributions are welcome! Here's how you can contribute to this project:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your_feature`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature/your_feature`).
6. Create a new Pull Request.

## Notes

- The program uses basic error handling and input validation.
- File operations like reading, writing, appending, deleting, and renaming files are utilized for data management.
- The code is structured into a class-based approach for better organization.
- **Caution**: This program utilizes the `goto` statement, which is generally discouraged due to its potential for creating complex and hard-to-follow control flow.

## License

This project is licensed under the [MIT License](LICENSE).

## Contributors

- [Juhi Rastogi](https://github.com/juhi048)


