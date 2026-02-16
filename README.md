# ft_printf

## 📚 Project Overview
**ft_printf** is a custom implementation of the standard C `printf` function. The goal of this project is to understand variadic functions, format specifiers, and string manipulation in C by re-creating a simplified version of `printf`.

---

## 📌 Requirements
- Must be written in C.  
- Supports the following conversion specifiers:  
  - `%c` – character  
  - `%s` – string  
  - `%p` – pointer address  
  - `%d` / `%i` – signed decimal integer  
  - `%u` – unsigned decimal integer  
  - `%x` / `%X` – hexadecimal (lowercase/uppercase)  
  - `%%` – literal percent sign  
- Proper handling of output and return value (number of printed characters).  
- Correct memory management (no leaks).

---

## ⚙️ Features
- Custom implementation of `printf` handling multiple format specifiers.  
- Supports variadic arguments using `<stdarg.h>`.  
- Handles edge cases like `NULL` strings and zero pointers.  

---

## 🛠 Installation
1. Clone the repository:
```bash
git clone <your-repo-url>
cd ft_printf
```
2. Build the library using the Makefile:
```bash
make
```
3. Optional cleanup:
```bash
make clean   # Removes object files
make fclean  # Removes object files and the library
```
4. Link the library in your C programs:
```bash
gcc your_program.c -L. -lftprintf
```
## 📝 Author
**Juliet Haddadin** - 2024
