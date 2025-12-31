	LEXICAL CONVENSION IN C

There're eight lexical convension in C

1. physical source (file with .c and .h)

2. Trigraph (eg ??/  \) (eg ??=  #)

3. splicing (eg \)

4. preprocessing (eg #)

5. Tokens (eg  6 classes of tokens)

6. comment (/* */ c++ //)

7. white space (eg int main())

8. chaaracter set (eg ascii, unicode)


	what is physical source?

They're files in C language that end with
(.h) and (.c) extension

	(.h) are know as header files where
	     struct, union, enum, extern 
	     variables, global variables and 
	     functions prototypes.
	     

	(.c) are where the function definition
             and program logics are kept


	what is Trigraphs ?

This are preprocessing expressions (??) use to 
represent  eg: 
	??=	#
	??/	\
	??<	{
	??>	}
	??(	[
	??)	]
	??'	^
	??- 	~
	??!	|


	what is splicing ?

Splicing typically refers to cutting, joining or
manipulating data stream, arrays, strings, or
linked structure.   
	
eg --> \ is the splicing symbol in C language

#define MAX(x, y) \
	((x)) > ((y)) ? x : y	
 


	what is preprocessing ?

It the convension used by your processor

	There're three ppreprocesssing stage

1.	macro substitution
	-- #define

2.	condition compilation
	-- #if
	-- #else
	-- #endif
	-- #ifndef
	-- #elif

3. 	inclusion of name files
	-- #include


GOTO --> token directory to study the tokens of C
