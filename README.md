# Simple Shell

Run a shell designed to mimic sh. Execute commands and interact with the kernel.

simplesh [script files]

## Current features

* Run commands in $PATH
* Environment and local variables
* $? return values, $$ pid
* Run script files, as well as commands from standard input

Built-ins:
* help
* exit [status]
* setenv
* unsetenv
* env (listing environment functionality only)
* cd

### Compilation
Your shell will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

### Testing

Your shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

## Authors

* **Kevin Rentas**
* **Gadiel Rivera**
