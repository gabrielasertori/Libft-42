<div>
	<p align="center">
		<img src=".img/42logo.svg" alt="ecole42" width="300"/>
	</p>
</div>
<div>
	<p align="center">
		<a href="https://www.linkedin.com/in/gabriela-sertori-50b390189/">
			<img alt="Gabriela Sertori" src="https://img.shields.io/badge/-gabisertori-7ae9c6?style=flat&logo=Linkedin&logoColor=5a5a5a" />
		</a>
		<a aria-label="Completed" href="https://www.42sp.org.br/">
			<img src="https://img.shields.io/badge/libft-completed-7ae9c6?logo="></img>
		</a>
	</p>
</div>

# 42 Cursus - Libft
:rocket: Our first library in c!


## Sumary
[Makefile](let's-make-it-right!) \
[Descriptives](descriptives) \
[Helpfull links](helpfull-links)



## Let's make it right!
So, let's begin with Makefile, huh?


### Variables
1.	Declare a variable that will content the name of your library (you'll need
it every time when compiling).
```Makefile
NAME: libft.a
```

2.	(optional) if you want, then you may declare variables for the compiler and
for the flags.
```Makefile
CC: clang
FLAGS: -Wall -Wextra -Werror
```

3.	**This is important!** You need to put all the .c files that you created for
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

4.	**Another important step for the mankind!** Transform every .c file present
in the previous declaration into .o files. Tadaa! You just created object files.
	a. If there are others .c files that you want to transform and compile
	separated, than you must declare in another variable and transform in .o
	separately.
```Makefile
OBJ: $(MANDATORY:.c=.o)
```


### Rules
5.	First rule: you need to create the .a library, without it you can't compile.

6.	How can I create it? Simple,
	a.	You'll need the objects and code with `ar` command that will create,
	extract and modify archives for you.
	b.	The options `-rc` will... _r: insert the files_ and _c: create the archive._
```Makefile
ar -rc $(NAME) $(OBJ)
```
7.	So, the above code will create and add the files *.o into libft.a.

8.	We can make a rule to clean the objects files as well:
```Makefile
clean:
	rm -f $(OBJ).o
```


### Linking
So, okay, we created the library .a with all the .o files that came from .c files.
How could we test our functions???

9.	Make a rule for it!
```Makefile
main: main.c $(NAME)
	$(CC) $(FLAGS) main.c $(NAME) -o main
	./main
```

10.	The above code are compiling the main.c file with your library and output
this in an executable named main, and then executing it.

---

## Descriptives
**Mandatory part:**
All .c files have comments about how each function works (except the first six
functions)

**Bonus part:**
Bonus also have comments, but I only made until ft_lstadd_back (I'm sorry hehe :D)

**Main tests:**
In this repository you will find a main.c file with functions that I made to
tests my library. Feel free to test with your code.

* You may copy the file and execute with your makefile (that I teach how to do).

* Or you may copy and paste inside your lib function, rename the function to
main(void) and add the return (0) at the end.

---

## Helpfull links
Thanks A LOT to these...

[Ctutor](https://pythontutor.com/c.html#mode=edit)
Online pictoric debbug that helped me a lot to understand what was going on.

[LibftTester](https://github.com/Tripouille/libftTester)
Tripouille tests with unimagined parameters and prevents crash, bugs and errors.

[Makefiles](https://www.youtube.com/watch?v=GExnnTaBELk&list=LL&index=26)
Video that explains how makefiles works on backstage.

[Link to links](https://bumpy-truffle-c97.notion.site/Libft-bf8bfb0a6b974cc58870d592e7425296)
A notion of notions to libft. Super helpfull.

[Memcpy vs memmove](https://www.equestionanswers.com/c/memcpy-vs-memmove.php)
This two functions are super similar, but have some differencies.

[Malloc](https://www.youtube.com/watch?v=EZ2yTJqQ43Y&list=LL&index=19)
Video that explains how malloc function works.

[Recursive Functions](https://www.youtube.com/watch?v=1kBiqUCN888&list=LL&index=10)
Video that explains how recursivity works on c (yeh, you'll need this at some point).

[Strlcpy](https://www.youtube.com/watch?v=7mKfWrNQcj0&list=LL&index=8)
It isn't the strlcpy function, but that is interesting to understand why one is
safer than the other.

[Introduction to list](https://www.youtube.com/watch?v=RUZ2Ti9wFx8&list=LL&index=6)
Yep, that graphic explanation was wow!

[List part 2](https://www.youtube.com/watch?v=jgqg6Qw68_Q&list=LL&index=4&t=62s)
Complementary to the above link, this explanation was incredible and I could
understand so much more!

---

## Have tips?
Hey you!
Have tips that are helpfull too? Please, feel free to make contact!

Give :star: if you like this project, this will help me!

That's it folks!
Stay focused and don't panic!
