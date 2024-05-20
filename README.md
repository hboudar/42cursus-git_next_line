<h1 align="center">
	📖 get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Cloneg7/git_next_line?color=lightblue" />
<img alt="Code language count" src="https://img.shields.io/github/languages/count/Cloneg7/git_next_line?color=yellow" />
<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Cloneg7/git_next_line?color=blue" />
</p>

## 📜 Table of Contents

- [💡 Mandatory Part](#m)
- [💡 Bonus Part](#b)

# 💡 Mandatory Part <a name = "m"></a>

> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

	You will understand how files are opened, read and closed in an OS,
	and how they are interpreted by a programming language for further analysis.
	This task is crucial to understand for a future programmer since much of the time is based
	on manipulating files for data management and persistence.
	This project consists of coding a function that returns one line at a time from a text file.

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. To use the function in your code, simply include its header:**

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

##### 📋 Testing
> Simply run this command (change "xx" with desired buffer size) :
````shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c && ./a.out
````
-------
# 💡 Bonus Part <a name = "b"></a>

> As a bonus to the Mandatory requirement, the function should manage multiple file descriptors at the same time.

	For example, if you can read from the file descriptors 3, 4 and 5, you should be
	able to read from a different fd per call without losing the reading thread of each
	file descriptor or returning a line from another fd.
	It means that you should be able to call get_next_line() to read from fd 3, then
	fd 4, then 5, then once again 3, once again 4, and so forth...

**1. To use the function in your code, simply include its header:**

```C
#include "get_next_line_bonus.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=<size>
```

### 📋 Testing
> Simply run this command (change "xx" with desired buffer size) :
```shell
gcc -Wall -Werror -Wextra -D BUFFER_SIZE=xx get_next_line_bonus.c get_next_line_utils_bonus.c && ./a.out
```
