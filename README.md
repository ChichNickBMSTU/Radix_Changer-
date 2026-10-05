# BaseConverter

**BaseConverter** is a console application written in C for converting integer decimal numbers into binary, octal, and hexadecimal number systems.

---

## 📋 Table of Contents

- [Description](#-description)
- [Features](#-features)
- [Project Structure](#-project-structure)
- [Requirements](#-requirements)
- [Build and Run](#-build-and-run)
- [Usage](#-usage)
- [Example](#-example)
- [Known Limitations](#-known-limitations)
- [Possible Improvements](#-possible-improvements)
- [License](#-license)

---

## 📖 Description

**BaseConverter** is an educational project demonstrating number system conversion in C. The program takes an integer decimal number as input and allows the user to convert it into one of three number systems:

- Binary (base 2)
- Octal (base 8)
- Hexadecimal (base 16)

The interface is implemented as a console menu that allows entering multiple numbers without restarting the program.

---

## ✨ Features

- ✅ Converts integers from decimal to **binary**, **octal**, and **hexadecimal**.
- ✅ Convenient two-level menu (choose a number → choose a number system).
- ✅ Ability to process multiple numbers in a single session.
- ✅ Russian language support in the console (`setlocale`).
- ✅ Screen clearing between operations for better readability.

---

## ⚙️ Requirements

- **Compiler:** GCC, Clang, MSVC, or any other C compiler.
- **OS:** Windows (due to the use of `system("cls")` and `system("pause")`), or Linux/macOS with minor adjustments (see below).
- **C Standard:** C89/C90 and above (uses `itoa`, which is non-standard — see the limitations section).

> ⚠️ The `itoa()` function is non-standard and is not supported by all compilers (for example, it is missing in GCC on Linux). For cross-platform compatibility, it is recommended to replace it with `sprintf()` (see the "Possible Improvements" section).

---

## 🛠️ Build and Run

### Windows (MSVC / MinGW)

```bash
gcc main.c Functii.c -o BaseConverter.exe
BaseConverter.exe
```

### Linux / macOS (after replacing `itoa`)

If you have adapted the code to use `sprintf`:

```bash
gcc main.c Functii.c -o BaseConverter
./BaseConverter
```

To run on Linux/macOS, you will also need to replace `system("cls")` with `system("clear")` and `system("pause")` with `getchar()` or `system("read")`.

---

## 🚀 Usage

1. Launch the program.
2. In the main menu, select:
   - `1` — enter a number for conversion;
   - `2` — exit the program.
3. After entering the number, the number system selection menu opens:
   - `1` — convert to binary;
   - `2` — convert to octal;
   - `3` — convert to hexadecimal;
   - `4` — return to entering another number or exit.
4. The result is displayed on the screen, after which you can continue working.

---

## ⚠️ Known Limitations

1. **Only positive integers.** Negative values are handled incorrectly.
2. **Use of the non-standard `itoa()` function.** May not compile on GCC/Linux without replacement.
3. **Platform dependency.** `system("cls")` and `system("pause")` work only on Windows.
4. **Buffer length limit.** The buffer `char buffer[33]` is designed for 32-bit integers; for 64-bit numbers, a larger size is required.
5. **No support for converting from other systems to decimal.** The project only works in the "decimal → other" direction.
6. **No input validation.** Entering letters instead of digits will lead to unpredictable behavior.

---

## 🔧 Possible Improvements

- 🔹 Replace `itoa()` with `sprintf()` or a custom conversion implementation — for portability.
- 🔹 Add support for **reverse conversion** (from 2/8/16 to 10).
- 🔹 Implement **conversion between arbitrary number systems** (from 2 to 36).
- 🔹 Add support for **negative numbers** and **floating-point numbers**.
- 🔹 Introduce **input validation** (check for letters, overflow, empty strings).
- 🔹 Implement **cross-platform screen clearing** via `#ifdef _WIN32`.
- 🔹 Add **unit tests** for the conversion functions.
- 🔹 Enhance the interface with **colored output** or a library like `ncurses`.

---

## 📄 License

This project is distributed freely for educational purposes. You may use, modify, and distribute the code without restrictions.

---

## 👤 Author

An educational project for the "C/C++ Programming" course.

If you have any questions or suggestions, feel free to open an Issue or submit a Pull Request. 🚀

---

# BaseConverter

**BaseConverter** — консольное приложение на C, предназначенное для перевода целых десятичных чисел в двоичную, восьмеричную и шестнадцатеричную системы счисления.

---

## 📋 Содержание

- [Описание](#-описание)
- [Возможности](#-возможности)
- [Структура проекта](#-структура-проекта)
- [Требования](#-требования)
- [Сборка и запуск](#-сборка-и-запуск)
- [Использование](#-использование)
- [Пример работы](#-пример-работы)
- [Известные ограничения](#-известные-ограничения)
- [Возможные улучшения](#-возможные-улучшения)
- [Лицензия](#-лицензия)

---

## 📖 Описание:

**BaseConverter** — это учебный проект, демонстрирующий работу с системами счисления на языке C. Программа принимает на вход целое десятичное число и позволяет последовательно преобразовать его в одну из трёх систем счисления:

- Двоичную (base 2)
- Восьмеричную (base 8)
- Шестнадцатеричную (base 16)

Интерфейс реализован в виде консольного меню с возможностью многократного ввода чисел без перезапуска программы.

---

## ✨ Возможности:

- ✅ Перевод целых чисел из десятичной системы в **двоичную**, **восьмеричную** и **шестнадцатеричную**.
- ✅ Удобное двухуровневое меню (выбор числа → выбор системы счисления).
- ✅ Возможность обрабатывать несколько чисел за один сеанс работы.
- ✅ Поддержка русского языка в консоли (`setlocale`).
- ✅ Очистка экрана между операциями для удобства восприятия.

---

## ⚙️ Требования

- **Компилятор:** GCC, Clang, MSVC или любой другой компилятор C.
- **ОС:** Windows (из-за использования `system("cls")` и `system("pause")`), либо Linux/macOS с небольшой адаптацией (см. ниже).
- **Стандарт C:** C89/C90 и выше (используется `itoa`, которая не входит в стандарт — см. раздел ограничений).

---

## 🚀 Использование

1. Запустите программу.
2. В главном меню выберите:
   - `1` — ввести число для преобразования;
   - `2` — выйти из программы.
3. После ввода числа откроется меню выбора системы счисления:
   - `1` — перевод в двоичную систему;
   - `2` — перевод в восьмеричную систему;
   - `3` — перевод в шестнадцатеричную систему;
   - `4` — вернуться к вводу другого числа или выйти.
4. Результат отобразится на экране, после чего можно продолжить работу.

---

## ⚠️ Известные ограничения

1. **Только целые положительные числа.** Отрицательные значения обрабатываются некорректно.
2. **Использование нестандартной функции `itoa()`.** Может не компилироваться на GCC/Linux без замены.
3. **Платформозависимость.** Команды `system("cls")` и `system("pause")` работают только в Windows.
4. **Ограничение длины буфера.** Буфер `char buffer[33]` рассчитан на 32 бита (`int`); для 64-битных чисел потребуется увеличить размер.
5. **Нет поддержки перевода из других систем в десятичную.** Проект работает только в направлении «десятичная → другая».
6. **Нет проверки корректности ввода.** Ввод букв вместо цифр приведёт к непредсказуемому поведению.

---

## 🔧 Возможные улучшения

- 🔹 Заменить `itoa()` на `sprintf()` или собственную реализацию перевода — для переносимости.
- 🔹 Добавить поддержку **обратного перевода** (из 2/8/16 в 10).
- 🔹 Реализовать **перевод между произвольными системами счисления** (от 2 до 36).
- 🔹 Добавить поддержку **отрицательных чисел** и **чисел с плавающей точкой**.
- 🔹 Ввести **валидацию ввода** (проверка на буквы, переполнение, пустую строку).
- 🔹 Сделать **кроссплатформенную очистку экрана** через `#ifdef _WIN32`.
- 🔹 Добавить **юнит-тесты** для функций перевода.
- 🔹 Оформить интерфейс с помощью **цветного вывода** или библиотеки типа `ncurses`.

---

## 📄 Лицензия

Проект распространяется свободно в учебных целях. Вы можете использовать, изменять и распространять код без ограничений.

---

## 👤 Автор

Учебный проект по курсу «Программирование на C/C++».

Если у вас есть вопросы или предложения — создавайте Issue или Pull Request. 🚀
