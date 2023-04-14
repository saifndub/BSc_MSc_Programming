digit [0-9]
letter [A-Za-z]
%{
#include<stdio.h>
int comm=0;
%}
%%
\".*\" {printf("string : %s\n",yytext);}
"/*"[^\n]+|\n[^\n]+"*/"|"//"[^\n]+ {comm++;}
"if"|"else"|"for"|"do"|"while"|"switch"|"case" {printf("keyword : %s\n",yytext);}
"int" {printf("Integer keyword : %s\n",yytext);}
"float" {printf("Float keyword : %s\n",yytext);}
{digit}+(.{digit}+)?("e^"[+-]?{digit}+)? {printf("Number : %s\n",yytext);}
"="|"+"|"-"|"*"|"/"|"++"|"--"|"%" {printf("Operator :%s \n",yytext);}
{letter}({letter}|{digit})* {printf("Identifier :%s \n",yytext);}
"!"|"@"|"*"|"&"|"^"|"%"|"$"|"#" {printf("Special Character :%s \n",yytext);}
"," {printf("Comma :%s \n",yytext);}
";" {printf("Semicolon :%s \n",yytext);}
"("|"{"|"[" {printf("Opening Bracket :%s \n",yytext);}
")"|"}"|"]" {printf("Closing Bracket :%s \n",yytext);}
"<"|">"|">="|"<="|"=="|"<>"|"!=" {printf("Comparative :%s \n",yytext);}
%%
int yywrap()
{
return 1;
}
int main()
{
printf("Enter a string of data :\n");
yyin = fopen("1myfile.txt","r");
yylex();
return 0;
}