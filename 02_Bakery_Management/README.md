# Bakery Order Management System

## Overview
This project is a simple command-line application for managing a bakery's daily orders using C++ Standard Template Library (STL) vectors. It allows users to add, edit, and track orders efficiently.

## Features
- Initialize empty and pre-prepared order lists.
- Add new customer orders dynamically.
- View the first, third, and last order.
- Insert pre-prepared items at the beginning of the order list.
- Edit and remove orders from the list.
- Optimize the storage of the order list.
- Display order list details (size, capacity, etc.).
- Clear all orders at the end of the day.
- Error handling for duplicate entries and invalid removals.

## Requirements
- C++11 or later
- A C++ compiler (GCC, Clang, or MSVC)

## Usage
1. Compile the program using a C++ compiler:
   ```sh
   cd build/
   cmake ..
   make 
   ```
2. Run the executable:
   ```sh
   ./Bakery
   ```
3. Follow the on-screen menu options to manage orders:
   - Press `1` to add new orders.
   - Press `2` to edit the order list.
   - Press `3` to print first, third, and last orders.
   - Press `4` to insert pre-prepared items.
   - Press `5` to print order list information.
   - Press `6` to optimize order storage.
   - Press `7` to clear the list.
   - Press `8` to exit the program.

## Implementation Details
This project utilizes STL vectors to manage bakery orders efficiently. The key implementation aspects include:
- **Vector Initialization:** Vectors are initialized dynamically to store orders, with pre-prepared items stored separately.
- **Order Management:** Orders are added dynamically while preventing duplicates using `std::find()`.
- **Editing & Removing Orders:** Orders can be removed using `std::vector::erase()`, ensuring integrity.
- **Optimizing Storage:** The `shrink_to_fit()` function is used to reduce memory usage after orders are processed.
- **Iterators Usage:** Normal, reverse, and auto iterators are implemented to traverse and manipulate order lists.
- **Error Handling:** Input validation and checks are incorporated to handle incorrect inputs and duplicate entries.

## Future Enhancements
- Implement order status tracking (e.g., "pending," "completed").
- Add file I/O for order persistence.
- Implement a graphical user interface (GUI) for better user experience.

## Author
Developed by Hussien Nasr as part of an STL exercise in C++.

