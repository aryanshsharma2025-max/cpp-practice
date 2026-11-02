# C++ Programming & Language Fundamentals Practice

A structured repository containing 246 verified C++ programs tracking my progression through core systems programming, language mechanics, object-oriented software design, and introductory data structures.

---

## 📌 Repository Purpose

This repository documents hands-on coding exercises, university coursework lab implementations, and self-study projects in modern C++.

Rather than relying on isolated snippets, code is organized into modular directories reflecting progressive language mastery—from basic scalar arithmetic to object-oriented inheritance and memory addressing.

---

## 📚 Structured Modules & File Breakdown (246 Verified Programs)

The repository contains **246 `.cpp` source files** organized into 12 active modules and 3 roadmap modules:

| # | Module Directory | Focus Concepts | Program Count | Status |
|---|---|---|:---:|:---:|
| 1 | **`01_Basics`** | Standard I/O (`cin`/`cout`), primitive types, arithmetic operators, type casting | 13 | Active |
| 2 | **`02_If_Else`** | Relational logic, boolean operators, nested conditional ladders | 21 | Active |
| 3 | **`03_Switch_Case`** | Discrete decision trees, menu-driven CLI workflows, case fallthrough | 13 | Active |
| 4 | **`04_Loops`** | Iteration (`for`, `while`, `do-while`), loop interruption (`break`/`continue`) | 15 | Active |
| 5 | **`05_Patterns`** | 2D coordinate patterns, nested loops, matrix symbol rendering | 0 | Roadmap |
| 6 | **`06_Functions`** | Pass-by-value vs pass-by-reference, function prototypes, recursion, scope | 35 | Active |
| 7 | **`07_Arrays`** | 1D array operations, bounds, linear search, element insertion/deletion | 28 | Active |
| 8 | **`08_Matrices`** | 2D multi-dimensional arrays, matrix addition, multiplication, transposition | 18 | Active |
| 9 | **`09_Strings`** | Character arrays, C-strings vs `std::string`, string manipulation | 52 | Active |
| 10 | **`10_Pointers`** | Memory addresses, pointer dereferencing, pointer arithmetic, dynamic allocation | 17 | Active |
| 11 | **`11_Searching`** | Linear search and binary search implementations with boundary edge cases | 3 | Active |
| 12 | **`12_Sorting`** | Bubble sort, selection sort, and insertion sort algorithms | 7 | Active |
| 13 | **`13_OOP`** | Classes, encapsulation, constructors/destructors, inheritance, polymorphism | 24 | Active |
| 14 | **`14_STL`** | Standard Template Library containers (`vector`, `list`, `map`, `pair`) | 0 | Roadmap |
| 15 | **`15_DSA`** | Stack and queue data structures (array-based, dynamic implementations) | 0 | Roadmap |
| | **Total Tracked Programs** | **Audited directly via `git ls-files "*.cpp"`** | **246** | |

> **Accounting & Integrity Note:** Every file is verified by filesystem inspection. Modules `05_Patterns`, `14_STL`, and `15_DSA` are roadmap directories established for upcoming coursework. The 246 programs are actively implemented across the remaining 12 modules ($13 + 21 + 13 + 15 + 35 + 28 + 18 + 52 + 17 + 3 + 7 + 24 = 246$).

---

## 🎯 Object-Oriented Programming Highlights (`13_OOP`)

The OOP section contains 24 focused exercises exploring modern C++ object mechanics:
- **Encapsulation & Access Modifiers:** Strict data hiding using `private`, `protected`, and `public` boundaries.
- **Constructor Lifecycle:** Default, parameterized, and copy constructors with deterministic destructor cleanup.
- **Inheritance Hierarchies:** Single, multiple, multilevel, and hierarchical inheritance.
- **Polymorphism:** Function overloading (compile-time) and virtual method resolution (`virtual`, `override`).

---

## 🛠️ Compilation & Local Execution

Programs are written in compliance with modern C++ standards (`C++14` / `C++17`).

### Single File Compilation
Compile any exercise with GCC / MinGW `g++`:

```bash
# Example: Compiling an OOP class exercise
g++ -std=c++17 -Wall -Wextra 13_OOP/01_Classes_Objects/001_Student_Class.cpp -o app

# Run binary on Windows:
.\app.exe

# Run binary on Linux/macOS:
./app
```

---

## 🧪 Continuous Integration

The repository includes a GitHub Actions CI workflow (`.github/workflows/cpp-ci.yml`) that verifies clean compilation of representative programs across active modules under GCC with `-std=c++17 -Wall -Wextra`.

---

## 🗺️ Ongoing Study Roadmap

The following topics represent current and upcoming coursework modules:
- [ ] **Standard Template Library (STL):** Sequential containers (`vector`, `deque`, `list`), associative containers (`set`, `map`), and iterators.
- [ ] **Linear & Non-Linear DSA:** Linked lists, dynamic stacks, queues, and binary search trees.
- [ ] **Complexity Analysis:** Formal asymptotic time and space complexity annotations ($O(N)$, $O(\log N)$).

---

## 👤 Author

**Aryansh Sharma**  
B.Tech Computer Science & Engineering (3rd Semester)  
SSIPMT Raipur (CSVTU)
