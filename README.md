# queue-implementation

**Overview**

This C++ program simulates a scheduling system for meetings based on arrival times and meeting durations of students. The program reads input data from a file named "personin.txt" and implements two different scheduling strategies: "The unfair way" using a stack and "The fair way" using a queue. The unfair way prioritizes students who arrive earlier, while the fair way schedules meetings in a first-come-first-served manner.

**Classes**

Student: This class represents a student with attributes such as name, arrival time, and meeting duration.

**Attributes:**

name: a string representing the student's name.
arrtime: an integer representing the arrival time of the student.
meetduration: an integer representing the requested meeting duration.
Methods:
readqueue(): Reads data from the file "personin.txt" and schedules meetings using a queue, implementing the fair way.
readstack(): Reads data from the file "personin.txt" and schedules meetings using a stack, implementing the unfair way.
File Input
The program reads input data from a file named "personin.txt". The file format should consist of three columns separated by whitespace, representing the name, arrival time, and meeting duration of each student.

**Scheduling Strategies**

1.  The Fair Way (readqueue())

This strategy uses a queue to schedule meetings in a fair, first-come-first-served manner. Students are scheduled based on their arrival time, and meetings are conducted consecutively without prioritizing early arrivals.

3.  The Unfair Way (readstack())

This strategy uses a stack to schedule meetings in an unfair manner. Students who arrive earlier are given priority, and their meetings are scheduled before those who arrive later.

**Main Function**

The main() function creates an instance of the Student class and demonstrates both scheduling strategies by calling the readstack() and readqueue() methods.

**Running the Program**

1.  Ensure the input file "personin.txt" is present and properly formatted.
2.  Compile the program using a C++ compiler (e.g., g++).
3.  Execute the compiled program.
