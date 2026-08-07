@echo off
title C++ Repository Structure Setup
echo ===============================================
echo      Creating Professional C++ Repository
echo ===============================================
echo.

:: Root README
if not exist README.md (
echo # C++ Practice Repository>README.md
echo.>>README.md
echo Daily C++ programs, problem-solving exercises and DSA journey.>>README.md
)

:: .gitignore
(
echo *.exe
echo *.o
echo *.obj
echo *.out
echo *.class
echo *.log
echo .vscode/
echo .idea/
echo bin/
echo Debug/
echo Release/
echo x64/
echo x86/
)>.gitignore

call :CreateFolder "01_Basics" "Variables, Data Types, Input Output, Operators"
call :CreateFolder "02_If_Else" "Decision Making"
call :CreateFolder "03_Switch_Case" "Switch Statements"
call :CreateFolder "04_Loops" "While, Do While, For"
call :CreateFolder "05_Patterns" "Pattern Printing"
call :CreateFolder "06_Functions" "Functions and Recursion"
call :CreateFolder "07_Arrays" "One Dimensional Arrays"
call :CreateFolder "08_Matrices" "Two Dimensional Arrays"
call :CreateFolder "09_Strings" "String Programs"
call :CreateFolder "10_Pointers" "Pointers"
call :CreateFolder "11_Structures" "Structures and Unions"
call :CreateFolder "12_File_Handling" "Files"
call :CreateFolder "13_Searching" "Linear and Binary Search"
call :CreateFolder "14_Sorting" "Sorting Algorithms"
call :CreateFolder "15_Bitwise_Operations" "Bitwise Operators"
call :CreateFolder "16_Number_Programs" "Mathematical Programs"
call :CreateFolder "17_OOP" "Object Oriented Programming"
call :CreateFolder "18_STL" "Standard Template Library"
call :CreateFolder "19_DSA" "Data Structures and Algorithms"
call :CreateFolder "20_Mini_Projects" "Small Console Projects"

:: OOP Subfolders
mkdir "17_OOP\01_Classes_Objects"
mkdir "17_OOP\02_Constructors"
mkdir "17_OOP\03_Destructor"
mkdir "17_OOP\04_Inheritance"
mkdir "17_OOP\05_Polymorphism"
mkdir "17_OOP\06_Abstraction"
mkdir "17_OOP\07_Encapsulation"
mkdir "17_OOP\08_Friend_Function"
mkdir "17_OOP\09_Operator_Overloading"
mkdir "17_OOP\10_Exception_Handling"

:: STL Subfolders
mkdir "18_STL\01_Vector"
mkdir "18_STL\02_List"
mkdir "18_STL\03_Deque"
mkdir "18_STL\04_Stack"
mkdir "18_STL\05_Queue"
mkdir "18_STL\06_Priority_Queue"
mkdir "18_STL\07_Set"
mkdir "18_STL\08_Map"
mkdir "18_STL\09_Pair"
mkdir "18_STL\10_Algorithms"

:: DSA Subfolders
mkdir "19_DSA\01_Linked_List"
mkdir "19_DSA\02_Stack"
mkdir "19_DSA\03_Queue"
mkdir "19_DSA\04_Trees"
mkdir "19_DSA\05_BST"
mkdir "19_DSA\06_Heap"
mkdir "19_DSA\07_Graph"
mkdir "19_DSA\08_Hashing"
mkdir "19_DSA\09_Greedy"
mkdir "19_DSA\10_Dynamic_Programming"

echo.
echo ===============================================
echo Repository Structure Created Successfully!
echo ===============================================
pause
exit

:CreateFolder
mkdir "%~1"
(
echo # %~1
echo.
echo Topic: %~2
echo.
echo ## Programs
echo.
echo - Programs will be added here.
)> "%~1\README.md"
exit /b