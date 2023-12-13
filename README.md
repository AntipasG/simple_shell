### Simple Shell

This is a simple UNIX command line interpreter developed as part of a project. The shell supports basic command execution and built-in functionalities.

**Developed by:**
- Antipas Belihu
- Solomon Kassa

### Features

- Displays a prompt and waits for the user to type a command.
- The prompt is displayed again after each command execution.
- Handles command lines with arguments.
- Handles the PATH to locate executables.
- Implements built-in commands: `exit` and `env`.
- Handles errors gracefully.
- Supports the "end of file" condition (Ctrl+D).

### Compilation

To compile the shell, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Usage

Run the compiled shell using the following command:

```bash
./hsh
```

### Examples

```bash
$ ./hsh
# /bin/ls
file1 file2 file3
# /bin/pwd
/home/user
# exit
$
```

### Project Structure

- `shell.h`: Header file containing function prototypes.
- `execute_external_command.c`: File containing the function to execute external commands.
- `execute_builtin_exit.c`: File containing the function to execute the `exit` built-in command.
- `execute_builtin_env.c`: File containing the function to execute the `env` built-in command.
- `execute_command.c`: File containing the main function to execute commands.
