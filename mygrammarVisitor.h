
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammarParser.
 */
class  mygrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammarParser.
   */
    virtual std::any visitFloatExpr(mygrammarParser::FloatExprContext *context) = 0;

    virtual std::any visitPreIncExpr(mygrammarParser::PreIncExprContext *context) = 0;

    virtual std::any visitIntExpr(mygrammarParser::IntExprContext *context) = 0;

    virtual std::any visitPreDecExpr(mygrammarParser::PreDecExprContext *context) = 0;

    virtual std::any visitAddSubExpr(mygrammarParser::AddSubExprContext *context) = 0;

    virtual std::any visitPostDecExpr(mygrammarParser::PostDecExprContext *context) = 0;

    virtual std::any visitMulExpr(mygrammarParser::MulExprContext *context) = 0;

    virtual std::any visitParenExpr(mygrammarParser::ParenExprContext *context) = 0;

    virtual std::any visitNameExpr(mygrammarParser::NameExprContext *context) = 0;

    virtual std::any visitPostIncExpr(mygrammarParser::PostIncExprContext *context) = 0;

    virtual std::any visitParenBoolExpr(mygrammarParser::ParenBoolExprContext *context) = 0;

    virtual std::any visitNotExpr(mygrammarParser::NotExprContext *context) = 0;

    virtual std::any visitCompExpr(mygrammarParser::CompExprContext *context) = 0;

    virtual std::any visitOrExpr(mygrammarParser::OrExprContext *context) = 0;

    virtual std::any visitAndExpr(mygrammarParser::AndExprContext *context) = 0;

    virtual std::any visitAssignExpr(mygrammarParser::AssignExprContext *context) = 0;

    virtual std::any visitPostInc(mygrammarParser::PostIncContext *context) = 0;

    virtual std::any visitPostDec(mygrammarParser::PostDecContext *context) = 0;

    virtual std::any visitPreInc(mygrammarParser::PreIncContext *context) = 0;

    virtual std::any visitPreDec(mygrammarParser::PreDecContext *context) = 0;

    virtual std::any visitVarDecl(mygrammarParser::VarDeclContext *context) = 0;

    virtual std::any visitIfStmt(mygrammarParser::IfStmtContext *context) = 0;

    virtual std::any visitIfElseStmt(mygrammarParser::IfElseStmtContext *context) = 0;

    virtual std::any visitWhileStmt(mygrammarParser::WhileStmtContext *context) = 0;

    virtual std::any visitPrint(mygrammarParser::PrintContext *context) = 0;

    virtual std::any visitDeclLine(mygrammarParser::DeclLineContext *context) = 0;

    virtual std::any visitPreDecLine(mygrammarParser::PreDecLineContext *context) = 0;

    virtual std::any visitPreIncLine(mygrammarParser::PreIncLineContext *context) = 0;

    virtual std::any visitAssignLine(mygrammarParser::AssignLineContext *context) = 0;

    virtual std::any visitPostIncLine(mygrammarParser::PostIncLineContext *context) = 0;

    virtual std::any visitPostDecLine(mygrammarParser::PostDecLineContext *context) = 0;

    virtual std::any visitPrintLine(mygrammarParser::PrintLineContext *context) = 0;

    virtual std::any visitIfOnly(mygrammarParser::IfOnlyContext *context) = 0;

    virtual std::any visitWhileOnly(mygrammarParser::WhileOnlyContext *context) = 0;

    virtual std::any visitWhileWithCode(mygrammarParser::WhileWithCodeContext *context) = 0;

    virtual std::any visitIfWithCode(mygrammarParser::IfWithCodeContext *context) = 0;

    virtual std::any visitLineWithCode(mygrammarParser::LineWithCodeContext *context) = 0;

    virtual std::any visitSingleLine(mygrammarParser::SingleLineContext *context) = 0;


};

