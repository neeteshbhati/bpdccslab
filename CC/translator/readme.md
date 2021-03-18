## Important:
The language is case sensitive. The language defines only 2D arrays. The language syntax for the conditional statements includes the "Then" keyword which is missing from the example. However, the keyword is incorporated into the grammar.

## Usage:
    1. flex lexer.l
    2. yacc -dv parser.y
    3. gcc lex.yy.c y.tab.c -lfl -o translator
    4. ./translator < input.pp
    5. indent output.c && cat output.c

## Known Bugs:
    1. Labels: are space sensitive.
    2. Loop conditions and array indexes have to be numeric.
    3. Strings can have alphabets only.

## Unknown Bugs:
Probably hundreds. That's why I have tried a few test cases given in the input.pp file. The file should translate successfully even with slight modifications.

## Developer:
  Neetesh Bhati (2017A7PS0060U)
