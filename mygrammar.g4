grammar mygrammar;

WS : [ \t\r\n]+ -> skip ;

SEP : ';';
ASSIGN : '=';
TYPE : 'int' | 'float';
INT : [0-9]+;
FLOAT : [0-9]+ '.' [0-9]*;
COMP : '<' | '>' | '>=' | '<=' | '==';
ADDSUB : '+' | '-';
IF : 'if'; 
ELSE : 'else';
WHILE : 'while';
PRINT : 'print';
DEF : 'def';

NAME : [A-Za-z]+; 



expr 
    : '(' expr ')'                             #parenExpr
    | expr '*' expr                            #mulExpr
    | expr ADDSUB expr                         #addSubExpr
    | NAME                                     #nameExpr
    | INT                                      #intExpr
    | FLOAT                                    #floatExpr
    | increment                                #postIncExpr
    | decrement                                #postDecExpr
    | front_decrement                          #preDecExpr
    | front_increment                          #preIncExpr
    ;

bool_expr 
    : expr COMP expr                           #compExpr
    | bool_expr '&&' bool_expr                 #andExpr
    | bool_expr '||' bool_expr                 #orExpr
    | '!' bool_expr                            #notExpr
    | '(' bool_expr ')'                        #parenBoolExpr
    ;

assignment
    : NAME ASSIGN expr                         #assignExpr
    ;

increment
    : NAME '++'                                #postInc
    ;

decrement
    : NAME '--'                                #postDec
    ;

front_increment
    : '++' NAME                                #preInc
    ;

front_decrement
    : '--' NAME                                #preDec
    ;

init
    : TYPE NAME                                #varDecl
    ;

operator_if 
    : IF '(' bool_expr ')' '{' code '}'        #ifStmt
    | IF '(' bool_expr ')' '{' code '}' ELSE '{' code '}' #ifElseStmt
    ;

cycle_while
    : WHILE '(' bool_expr ')' '{' code '}'     #whileStmt
    ;

print_
    : PRINT '(' expr ')'               #print
    ;

line
    : init SEP                                 #declLine
    | front_decrement SEP                      #preDecLine
    | front_increment SEP                      #preIncLine
    | assignment SEP                           #assignLine
    | increment SEP                            #postIncLine
    | decrement SEP                            #postDecLine
    | print_ SEP                                #printLine
    ;

code 
    : operator_if                              #ifOnly
    | cycle_while                              #whileOnly
    | cycle_while code                         #whileWithCode
    | operator_if code                         #ifWithCode
    | line code                                #lineWithCode
    | line                                      #singleLine
    ;
