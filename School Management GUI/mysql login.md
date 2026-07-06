## Mysql login_01.py
```batch

CREATE TABLE `11_secondterminal` (
    idno INT(11) NOT NULL,
    name VARCHAR(255) NOT NULL,
    english INT(11),
    physics INT(11),
    maths INT(11),
    chemistry INT(11),
    computer INT(11),
    pe INT(11),
    total_marks INT(11),
    percentage DECIMAL(10,2),
    PRIMARY KEY (idno)
);

CREATE TABLE `12_firstterminal` (
    idno INT(11) NOT NULL,
    name VARCHAR(255) NOT NULL,
    english INT(11),
    physics INT(11),
    maths INT(11),
    chemistry INT(11),
    computer INT(11),
    pe INT(11),
    total_marks INT(11),
    percentage DECIMAL(10,2),
    PRIMARY KEY (idno)
);
-- Inserting data into 11_secondterminal
INSERT INTO `11_secondterminal` (idno, name, english, physics, maths, chemistry, computer, pe, total_marks, percentage) VALUES
(1, 'jinny', 85, 78, 92, 88, 76, 95, 84, 84.00),
(2, 'monalisa pandey', 75, 85, 82, 78, 90, 88, 82, 82.00),
(3, 'shreyamika rani', 92, 91, 85, 87, 94, 90, 89, 89.00),
(4, 'kessica shrestha', 68, 72, 75, 79, 80, 83, 78, 78.00),
(5, 'saugat pandey', 88, 90, 92, 85, 91, 87, 89, 89.00),
(6, 'harish udas', 76, 84, 81, 80, 78, 82, 80, 80.00),
(7, 'George Clooney', 91, 89, 88, 95, 94, 90, 89, 89.00),
(8, 'Hannah Baker', 78, 79, 80, 82, 76, 85, 81, 81.00),
(9, 'Ian Malcolm', 84, 90, 76, 88, 85, 82, 86, 86.00),
(10, 'Jessica Davis', 95, 92, 90, 91, 94, 90, 92, 92.00);

-- Inserting data into 12_firstterminal
INSERT INTO `12_firstterminal` (idno, name, english, physics, maths, chemistry, computer, pe, total_marks, percentage) VALUES
(1, 'Alice Johnson', 85, 85, 92, 78, 76, 95, 84, 84.00),
(2, 'Bob Smith', 75, 85, 82, 88, 90, 88, 82, 82.00),
(3, 'Charlie Brown', 92, 91, 85, 87, 94, 90, 89, 89.00),
(4, 'Diana Prince', 68, 72, 75, 79, 80, 83, 78, 78.00),
(5, 'Ethan Hunt', 88, 90, 92, 85, 91, 87, 89, 89.00),
(6, 'Fiona Gallagher', 76, 84, 81, 80, 78, 82, 80, 80.00),
(7, 'George Clooney', 91, 89, 88, 95, 94, 90, 89, 89.00),
(8, 'Hannah Baker', 78, 79, 80, 82, 76, 85, 81, 81.00),
(9, 'Ian Malcolm', 84, 77, 76, 90, 85, 82, 86, 86.00),
(10, 'Jessica Jones', 80, 88, 85, 92, 90, 89);
CREATE TABLE `11_firstterminal` (
    idno INT(11) NOT NULL,
    name VARCHAR(255) NOT NULL,
    english INT(11),
    physics INT(11),
    maths INT(11),
    chemistry INT(11),
    computer INT(11),
    pe INT(11),
    total_marks INT(11),
    percentage DECIMAL(10,2),
    PRIMARY KEY (idno)
);

CREATE TABLE `12_secondterminal` (
    idno INT(11) NOT NULL,
    name VARCHAR(255) NOT NULL,
    english INT(11),
    physics INT(11),
    maths INT(11),
    chemistry INT(11),
    computer INT(11),
    pe INT(11),
    total_marks INT(11),
    percentage DECIMAL(10,2),
    PRIMARY KEY (idno)
);
-- Inserting data into 11_firstterminal
INSERT INTO `11_firstterminal` (idno, name, english, physics, maths, chemistry, computer, pe, total_marks, percentage) VALUES
(1, 'Liam Smith', 88, 90, 85, 80, 78, 95, 84, 84.00),
(2, 'Emma Johnson', 75, 82, 90, 88, 85, 87, 83, 83.00),
(3, 'Noah Williams', 92, 85, 87, 91, 90, 89, 88, 88.00),
(4, 'Olivia Brown', 68, 75, 72, 80, 81, 82, 76, 76.00),
(5, 'Ava Jones', 85, 88, 90, 92, 87, 90, 89, 89.00),
(6, 'Sophia Garcia', 76, 81, 78, 80, 79, 84, 80, 80.00),
(7, 'Isabella Martinez', 91, 89, 88, 85, 90, 91, 89, 89.00),
(8, 'Mia Rodriguez', 78, 80, 82, 84, 76, 85, 81, 81.00),
(9, 'Charlotte Davis', 84, 87, 79, 81, 88, 82, 86, 86.00),
(10, 'Amelia Wilson', 95, 92, 90, 93, 94, 90, 92, 92.00);

-- Inserting data into 12_secondterminal
INSERT INTO `12_secondterminal` (idno, name, english, physics, maths, chemistry, computer, pe, total_marks, percentage) VALUES
(1, 'James Taylor', 85, 88, 90, 82, 80, 95, 84, 84.00),
(2, 'Benjamin Anderson', 76, 80, 85, 88, 89, 88, 82, 82.00),
(3, 'Lucas Thomas', 90, 92, 87, 91, 94, 90, 89, 89.00),
(4, 'Henry Jackson', 70, 75, 80, 78, 82, 83, 76, 76.00),
(5, 'Alexander White', 88, 91, 92, 85, 90, 87, 89, 89.00),
(6, 'William Harris', 76, 83, 78, 81, 79, 82, 80, 80.00),
(7, 'Daniel Martin', 90, 89, 88, 86, 94, 91, 89, 89.00),
(8, 'Matthew Thompson', 78, 79, 80, 82, 76, 85, 81, 81.00),
(9, 'Samuel Garcia', 84, 81, 76, 88, 85, 82, 86, 86.00),
(10, 'David Martinez', 92, 90, 89, 91, 94, 90, 92, 92.00);


--- Table Jayesh ---
Create table jayesh(due_bill float(10,2) not null);
insert into jayesh values(1000.00);
```

