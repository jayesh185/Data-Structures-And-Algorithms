# School Application Management System

This project is a **School Application Management System** built with Python and Tkinter. It provides a comprehensive platform for students to access various features such as account details, assignments, report cards, reading materials, and feedback, all within an interactive user-friendly interface.

## Table of Contents:
1. [Login Form](https://github.com/Kunal022-del/DPS-BPKIHS-SCHOOL/blob/d525e628efab5df11844cd89f77fdd1b2babfc2c/login_01.py)
2. [MySQL Queries](https://github.com/Kunal022-del/DPS-BPKIHS-SCHOOL/blob/d525e628efab5df11844cd89f77fdd1b2babfc2c/mysql%20login.md)
3. [Zudio Html File ](https://github.com/Kunal022-del/DPS-BPKIHS-SCHOOL/blob/e1f8835a7cfeae3fff323e5be88c18c8497ff362/zudio.html)
4. [Image Files](https://github.com/Kunal022-del/DPS-BPKIHS-SCHOOL/tree/241a438d0d7cf6ce3e6da1973897e56a1fa766b0/image)

---

## Features

### 1. **Login System**
- Secure user authentication using:
  - `Student ID`
  - `Password`
  - `Class`
- Grants access only to users with valid credentials.

### 2. **Account Section**
- Displays student-specific details, including:
  - Name
  - Class
  - Section
  - Total due amount (retrieved from the database).
- Supports payment of dues through multiple payment methods.

### 3. **Payment Options**
- Integrated with popular payment gateways:
  - **Esewa**
  - **Khalti**
  - **Mobile Banking**

### 4. **Settings**
- Options include:
  - **Log out**
  - **Calendar Integration**
  - **Switch between Light/Dark Mode**

### 5. **Assignments and Report Card**
- View and manage assignments.
- Access report cards for academic progress.

### 6. **Reading Materials**
- Access curated reading materials for additional learning.

### 7. **Feedback System**
- Submit feedback to improve the application and services.

---

## Database Configuration

- **Host**: `localhost`
- **User**: `root`
- **Password**: (Your database password)
- **Database Name**: `school_app`

The application uses the `jayesh` table to fetch the `due_bill` field for displaying outstanding payment amounts.

---

## Setup Instructions

### 1. **Install Required Packages**:
   - `pymysql`
   - `Pillow`
   - `tkcalendar`
   - Use the command:
     ```bash
     pip install pymysql pillow tkcalendar
     ```

### 2. **Database Setup**:
   - Create a MySQL database named `school_app`.
   - Create a table `jayesh` with a column `due_bill`.
   - Populate the `due_bill` field with appropriate data.

### 3. **Run the Application**:
   - Save the Python file.
   - Execute the script:
     ```bash
     python your_script_name.py
     ```

---

## HTML Code for School Website

Here is the HTML code for a school website that you can use as a part of your system:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>School Website</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        header {
            background-color: #4CAF50;
            color: white;
            padding: 1em 0;
            text-align: center;
        }
        .container {
            padding: 20px;
        }
        .images {
            display: flex;
            justify-content: space-around;
            margin-top: 20px;
        }
        .images img {
            width: 30%;
            border-radius: 10px;
        }
        .message {
            background-color: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(1, 0, 0, 0.1);
        }
        footer {
            text-align: center;
            padding: 10px;
            background-color: #4CAF50;
            color: white;
            position: fixed;
            width: 100%;
            bottom: 0;
        }
    </style>
</head>
<body>
    <header>
        <h1><b>Welcome to Zudio High School</b></h1>
    </header>
    <div class="container">
        <div class="message">
            <p>Welcome to our school where we nurture young minds to achieve their full potential. <br>Our dedicated staff and state-of-the-art facilities provide the perfect environment for learning and growth.</p>
            <p>We believe in fostering a community where students can thrive academically, socially, and emotionally.</p>
            <br><b>Thank You !</b>
            <p><b>--Manish Kundaliya</b></p>
        </div>
        <div class="images">
            <img src="path/to/your/image1.jpg" alt="School Image 1">
            <img src="path/to/your/image2.jpg" alt="School Image 2">
        </div>
    </div>
    <footer>
        &copy; 2024-2025 Our School. All rights reserved.
    </footer>
</body>
</html>
```
---

## Notes:
# Project Setup Instructions
## 1. Update Database Credentials
Update the database credentials in the script to match your local setup.
## 1.1 GUI Optimization
The application’s GUI is optimized for a screen resolution of 1280x720.
## 1.2 Dependencies
Ensure all dependencies are installed before running the application.
## 1.3 Image Paths
Make sure to replace the image paths in the HTML code with correct paths.


