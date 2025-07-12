# 📁 File Creator and Opener (C++ Project)

This is a simple console-based C++ project that allows users to **create, write to, and open text files**. It's a beginner-friendly application that demonstrates the use of basic C++ features like file handling, user input, string processing, and system calls.

---

## 🔧 Features

- ✅ Create a new file with any name
- ✅ Write multiple lines of text into the file
- ✅ Stop writing early using `#end`
- ✅ Automatically open the file after creation
- ✅ Open any existing file by providing its path
- ✅ Case-insensitive command inputs (`create`, `Create`, `CREATE` all work)

---

## 🧠 Concepts Used

- File Handling (`ofstream`)
- String manipulation (`transform`, `getline`)
- Conditional statements
- Loops
- `system()` calls for file opening
- `cin`, `cout` for I/O interaction

---

## 🖥️ How It Works

1. **User selects an action**: `create` or `open`.
2. If **create**:
    - Prompts for file name.
    - Asks if the user wants to write in the file.
    - Accepts a fixed number of lines or stops early with `#end`.
    - Saves the file and opens it.
3. If **open**:
    - Prompts for the file path.
    - Opens the file using system default editor (on Windows).

---

## 📌 Example Input Flow
What would you like to do.
To create and open a file type -> 'create'
To open an existing file, type -> open

create
Enter a file name:
myfile.txt
Do you like to write in file? If yes type = "yes"
yes
How many lines do you want to write?
5
(if your work completes early, type "#end" to quit)
Hello world!
This is a C++ program.
#end

