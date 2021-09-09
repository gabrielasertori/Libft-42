# 42cursus
My codes from 42 cursus

***

## Let's make it right!
So, let's begin with Makefile, huh?

### Variables
1.	Declare a variable that will content the name of your library (you'll need
it every time when compiling).
```Makefile
NAME: libft.a
```
1.	(optional) if you want, then you may declare variables for the compiler and
for the flags.
```Makefile
CC: clang
FLAGS: -Wall -Wextra -Werror
```
1.	**This is important!** You need to put all the .c files that you created for
the lib. Only this files will be transformed as object files and then compile
with the .a
```Makefile
MANDATORY: *.c
```
or
```Makefile
MANDATORY: ft_isprint.c ft_isalpha.c ft_isnum.c ft_isalnum.c ft_isdigit.c \
				ft_memchr. ft_memcmp.c
```
1.	**Another important step for the mankind!** Transform every .c file present
in the previous declaration into .o files. Tadaa! You just created object files.
	1. If there are others .c files that you want to transform and compile
	separated, than you must declare in another variable and transform in .o
	separately.
```Makefile
OBJ: $(MANDATORY:.c=.o)
```

### Rules
1.	First rule: you need to create the .a library, without it you can't compile.
1.	How can I create it? Simple,
	1.	You'll need the objects and code with `ar` command that will create,
	extract and modify archives for you.
	1.	The options `-rc` will... _r: insert the files_ and _c: create the archive._
```Makefile
ar -rc $(NAME) $(OBJ)
```
1.	So, the above code will create and add the files *.o into libft.a.
1.	We can make a rule to clean the objects files as well:
```Makefile
clean:
	rm -f $(OBJ).o
```

### Linking
So, okay, we created the library .a with all the .o files that came from .c files.
How could we test our functions???
1.	Make a rule for it!
```Makefile
main: main.c $(NAME)
	$(CC) $(FLAGS) main.c $(NAME) -o main
	./main
```
1.	The above code are compiling the main.c file with your library and output
this in an executable named main, and then executing it.

And that's it folks!
Stay focused and don't panic!

***
