# Search Algorithms

## Curriculum

### SE Foundations
- **Average:** 120.25%
- **Captain's Log:** Due before 2024-03-17 (in about 17 hours)! Log it now!

### 0x1E. C - Search Algorithms

#### C - Search Algorithms
- **Algorithm:** By Wilfried Hennuyer
- **Weight:** 1
- **Ongoing Second Chance Project:** Started Mar 11, 2024 6:00 AM, must end by Mar 17, 2024 6:00 AM
- **Auto QA Review:** 0.0/17 mandatory & 0.0/34 optional
  - **Altogether:** 0.0%
  - **Mandatory:** 0.0%
  - **Optional:** 0.0%
  - **Calculation:** 0.0% + (0.0% * 0.0%)

#### Resources
Read or watch:
- Search algorithm
- Space complexity (1)
- Search Algorithms video playlist

#### Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- **General:**
  - What is a search algorithm
  - What is a linear search
  - What is a binary search
  - What is the best search algorithm to use depending on your needs

#### Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

#### Requirements
**General:**
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called search_algos.h
- Don’t forget to push your header file
- All your header files should be include guarded

### Tasks

1. **Linear Search**
   - **Score:** 0.0%
   - Write a function that searches for a value in an array of integers using the Linear search algorithm
   - **Prototype:** `int linear_search(int *array, size_t size, int value);`
   - Where:
     - `array` is a pointer to the first element of the array to search in
     - `size` is the number of elements in array
     - `value` is the value to search for
   - Your function must return the first index where value is located
   - If value is not present in array or if array is NULL, your function must return -1

2. **Binary Search**
   - **Score:** 0.0%
   - Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
   - **Prototype:** `int binary_search(int *array, size_t size, int value);`
   - Where:
     - `array` is a pointer to the first element of the array to search in
     - `size` is the number of elements in array
     - `value` is the value to search for
   - Your function must return the index where value is located
   - You can assume that array will be sorted in ascending order
   - If value is not present in array or if array is NULL, your function must return -1

3. **Big O #0**
   - **Score:** 0.0%
   - What is the time complexity (worst case) of a linear search in an array of size n?

4. **Big O #1**
   - **Score:** 0.0%
   - What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

5. **Big O #2**
   - **Score:** 0.0%
   - What is the time