#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "antlr4-runtime.h"	
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarBaseVisitor.h"
#include "mygrammarVisitor.h"

int main()
{
	/*std::string expr = "int x; x = 1+3; print(x);";
	std::string expr1 = "int x;x =1; int b;b = 2; if(b<x){print(b);}else{print(x);}";
	std::stringstream stream(expr1);
	antlr4::ANTLRInputStream input(stream);*/
    antlr4::ANTLRInputStream input;

    std::string file_path = "C:/antlr/ANTLR/ANTRL_lab/examples/while.txt";
    std::ifstream file_stream;
    file_stream.open(file_path);

    if (!file_stream.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл '" << file_path << "'" << std::endl;
        return 1;
    }
    input.load(file_stream);

	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	mygrammarBaseVisitor visitor;

    try {
        visitor.visit(parser.code());
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Ошибка во время выполнения: " << e.what() << std::endl;
        return 1;
    }
    catch (const antlr4::RecognitionException& e) {
        std::cerr << "Ошибка синтаксического анализа: " << e.what() << std::endl;
        return 1;
    }
    catch (const std::bad_any_cast& e) {
        std::cerr << "Ошибка приведения типа (bad_any_cast) в визиторе: " << e.what() << std::endl;
        return 1;
    }

}