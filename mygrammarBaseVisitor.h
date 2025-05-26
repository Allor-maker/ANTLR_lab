
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once
#include <map>
#include<string>
#include <variant>
#include <cmath>
#include "antlr4-runtime.h"
#include "mygrammarVisitor.h"


/**
 * This class provides an empty implementation of mygrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammarBaseVisitor : public mygrammarVisitor {
public:
    std::map<std::string, std::variant<int, float>> variables;
    virtual std::any visitFloatExpr(mygrammarParser::FloatExprContext* ctx) override {
        float val = std::stof(ctx->FLOAT()->getText());
        return std::variant<int, float>{val};
    }

    virtual std::any visitPreIncExpr(mygrammarParser::PreIncExprContext* ctx) override {
        return visit(ctx->front_increment());
    }

    virtual std::any visitIntExpr(mygrammarParser::IntExprContext* ctx) override {
        int val = std::stoi(ctx->INT()->getText());
        return std::variant<int, float>{val};
    }

    virtual std::any visitPreDecExpr(mygrammarParser::PreDecExprContext* ctx) override {
        return visit(ctx->front_decrement());
    }

    virtual std::any visitAddSubExpr(mygrammarParser::AddSubExprContext* ctx) override {
        auto left = std::any_cast<std::variant<int, float>>(visit(ctx->expr(0)));
        auto right = std::any_cast<std::variant<int, float>>(visit(ctx->expr(1)));

        std::variant<int, float> result;
        std::string op = ctx->ADDSUB()->getText();

        if (std::holds_alternative<int>(left) && std::holds_alternative<int>(right)) {
            int l = std::get<int>(left);
            int r = std::get<int>(right);
            result = (op == "+") ? (l + r) : (l - r);
        }
        else {
            float l = std::holds_alternative<int>(left) ? static_cast<float>(std::get<int>(left)) : std::get<float>(left);
            float r = std::holds_alternative<int>(right) ? static_cast<float>(std::get<int>(right)) : std::get<float>(right);
            result = (op == "+") ? (l + r) : (l - r);
        }
        return result;
    }

    virtual std::any visitPostDecExpr(mygrammarParser::PostDecExprContext* ctx) override {
        return visit(ctx->decrement());
    }

    virtual std::any visitMulExpr(mygrammarParser::MulExprContext* ctx) override {
        auto left = std::any_cast<std::variant<int, float>>(visit(ctx->expr(0)));
        auto right = std::any_cast<std::variant<int, float>>(visit(ctx->expr(1)));

        std::variant<int, float> result;
        if (std::holds_alternative<int>(left) && std::holds_alternative<int>(right))
        {
            int l = std::get<int>(left);
            int r = std::get<int>(right);
            result = l * r;
        }
        else
        {
            float l = std::holds_alternative<int>(left) ? static_cast<float>(std::get<int>(left)) : std::get<float>(left);
            float r = std::holds_alternative<int>(right) ? static_cast<float>(std::get<int>(right)) : std::get<float>(right);
            result = l * r;
        }
        return result;
    }

    virtual std::any visitParenExpr(mygrammarParser::ParenExprContext* ctx) override {
        return visit(ctx->expr());
    }

    virtual std::any visitNameExpr(mygrammarParser::NameExprContext* ctx) override {
        std::string var = ctx->NAME()->getText();
        if (variables.count(var)) {
            return variables[var];
        }
        else {
            throw std::runtime_error("Ошибка: переменная '" + var + "' не определена.");
        }
    }

    virtual std::any visitPostIncExpr(mygrammarParser::PostIncExprContext* ctx) override {
        return visit(ctx->increment());
    }

    virtual std::any visitParenBoolExpr(mygrammarParser::ParenBoolExprContext* ctx) override {
        return visit(ctx->bool_expr());
    }

    virtual std::any visitNotExpr(mygrammarParser::NotExprContext* ctx) override {
        bool result = std::any_cast<bool>(visit(ctx->bool_expr()));
        return !result;
    }

    virtual std::any visitCompExpr(mygrammarParser::CompExprContext* ctx) override {
        std::variant<int, float> left = std::any_cast<std::variant<int, float>>(visit(ctx->expr(0)));
        std::variant<int, float> right = std::any_cast<std::variant<int, float>>(visit(ctx->expr(1)));

        float left_val = std::holds_alternative<int>(left) ? static_cast<float>(std::get<int>(left)) : std::get<float>(left);
        float right_val = std::holds_alternative<int>(right) ? static_cast<float>(std::get<int>(right)) : std::get<float>(right);

        std::string op = ctx->COMP()->getText();


        if (op == "<")  return left_val < right_val;
        if (op == ">")  return left_val > right_val;
        if (op == "<=") return left_val <= right_val;
        if (op == ">=") return left_val >= right_val;
        if (op == "==") return std::fabs(left_val - right_val) < 1e-6;

        throw std::runtime_error("Неизвестный оператор сравнения");
    }

    virtual std::any visitOrExpr(mygrammarParser::OrExprContext* ctx) override {
        return std::any_cast<bool>(visit(ctx->bool_expr(0))) || std::any_cast<bool>(visit(ctx->bool_expr(1)));
    }

    virtual std::any visitAndExpr(mygrammarParser::AndExprContext* ctx) override {
        return std::any_cast<bool>(visit(ctx->bool_expr(0))) && std::any_cast<bool>(visit(ctx->bool_expr(1)));
    }

    virtual std::any visitAssignExpr(mygrammarParser::AssignExprContext* ctx) override {
        std::string var = ctx->NAME()->getText();
        std::any result = visit(ctx->expr());

        auto it = variables.find(var);
        if (it == variables.end()) {
            throw std::runtime_error("Ошибка: переменная '" + var + "' не определена.");
        }

        auto value_variant = std::any_cast<std::variant<int, float>>(result);

        if (std::holds_alternative<int>(value_variant)) {
            variables[var] = std::get<int>(value_variant);
        }
        else if (std::holds_alternative<float>(value_variant)) {
            variables[var] = std::get<float>(value_variant);
        }
        else {
            throw std::runtime_error("Ошибка: неподдерживаемый тип переменной.");
        }
    }


    virtual std::any visitPostInc(mygrammarParser::PostIncContext* ctx) override {
        std::string name = ctx->NAME()->getText();

        auto it = variables.find(name);
        if (it == variables.end()) {
            throw std::runtime_error("Ошибка: переменная '" + name + "' не определена.");
        }

        auto& value = it->second;
        std::variant<int, float> result;
        if (std::holds_alternative<int>(value)) {
            int& int_val = std::get<int>(value);
            result = int_val;
            int_val++;
            return result;
        }
        else if (std::holds_alternative<float>(value)) {
            float& float_val = std::get<float>(value);
            result = float_val;
            float_val++;
            return result;
        }
        else {
            throw std::runtime_error("Ошибка: не поддерживаемый тип переменной.");
        }
    }

    virtual std::any visitPostDec(mygrammarParser::PostDecContext* ctx) override {
        std::string name = ctx->NAME()->getText();

        auto it = variables.find(name);
        if (it == variables.end()) {
            throw std::runtime_error("Ошибка: переменная '" + name + "' не определена.");
        }

        auto& value = it->second;
        std::variant<int, float> result;
        if (std::holds_alternative<int>(value)) {
            int& int_val = std::get<int>(value);
            result = int_val;
            int_val--;
            return result;
        }
        else if (std::holds_alternative<float>(value)) {
            float& float_val = std::get<float>(value);
            result = float_val;
            float_val--;
            return result;
        }
        else {
            throw std::runtime_error("Ошибка: не поддерживаемый тип переменной.");
        }
    }

    virtual std::any visitPreInc(mygrammarParser::PreIncContext* ctx) override {
        std::string name = ctx->NAME()->getText();

        auto it = variables.find(name);
        if (it == variables.end()) {
            throw std::runtime_error("Ошибка: переменная '" + name + "' не определена.");
        }

        auto& value = it->second;
        std::variant<int, float> result;
        if (std::holds_alternative<int>(value)) {
            int& int_val = std::get<int>(value);
            ++int_val;
            result = int_val;
            return result;
        }
        else if (std::holds_alternative<float>(value)) {
            float& float_val = std::get<float>(value);
            ++float_val;
            result = float_val;
            return result;
        }
        else {
            throw std::runtime_error("Ошибка: не поддерживаемый тип переменной.");
        }
    }

    virtual std::any visitPreDec(mygrammarParser::PreDecContext* ctx) override {
        std::string name = ctx->NAME()->getText();

        auto it = variables.find(name);
        if (it == variables.end()) {
            throw std::runtime_error("Ошибка: переменная '" + name + "' не определена.");
        }

        auto& value = it->second;
        std::variant<int, float> result;
        if (std::holds_alternative<int>(value)) {
            int& int_val = std::get<int>(value);
            --int_val;
            result = int_val;
            return result;
        }
        else if (std::holds_alternative<float>(value)) {
            float& float_val = std::get<float>(value);
            --float_val;
            result = float_val;
            return result;
        }
        else {
            throw std::runtime_error("Ошибка: не поддерживаемый тип переменной.");
        }
    }

    virtual std::any visitVarDecl(mygrammarParser::VarDeclContext* ctx) override {
        std::string type = ctx->TYPE()->getText();
        std::string name = ctx->NAME()->getText();

        auto it = variables.find(name);
        if (it != variables.end())
        {
            throw std::runtime_error("Ошибка: переменная '" + name + "' уже определена.");
        }
        if (type == "int") {
            variables[name] = 0;
        }
        else if (type == "float") {
            variables[name] = 0.0f;
        }
        else {
            throw std::runtime_error("Неизвестный тип переменной.");
        }

        return 0;
    }

    virtual std::any visitIfStmt(mygrammarParser::IfStmtContext* ctx) override {
        bool condition = std::any_cast<bool>(visit(ctx->bool_expr()));
        if (condition)
        {
            return visit(ctx->code());
        }
        return nullptr;
    }

    virtual std::any visitIfElseStmt(mygrammarParser::IfElseStmtContext* ctx) override {
        bool condition = std::any_cast<bool>(visit(ctx->bool_expr()));
        if (condition)
        {
            return visit(ctx->code(0));
        }
        else {
            return visit(ctx->code(1));
        }
    }

    virtual std::any visitWhileStmt(mygrammarParser::WhileStmtContext* ctx) override {
        while (std::any_cast<bool>(visit(ctx->bool_expr())))
        {
            visit(ctx->code());
        }
        return 0;
    }

    virtual std::any visitDeclLine(mygrammarParser::DeclLineContext* ctx) override {
        return visit(ctx->init());
    }

    virtual std::any visitPreDecLine(mygrammarParser::PreDecLineContext* ctx) override {
        return visit(ctx->front_decrement());
    }

    virtual std::any visitPreIncLine(mygrammarParser::PreIncLineContext* ctx) override {
        return visit(ctx->front_increment());
    }

    virtual std::any visitAssignLine(mygrammarParser::AssignLineContext* ctx) override {
        return visit(ctx->assignment());
    }

    virtual std::any visitPostIncLine(mygrammarParser::PostIncLineContext* ctx) override {
        return visit(ctx->increment());
    }

    virtual std::any visitPostDecLine(mygrammarParser::PostDecLineContext* ctx) override {
        return visit(ctx->decrement());
    }

    virtual std::any visitIfOnly(mygrammarParser::IfOnlyContext* ctx) override {
        return visit(ctx->operator_if());
    }

    virtual std::any visitWhileOnly(mygrammarParser::WhileOnlyContext* ctx) override {
        return visit(ctx->cycle_while());
    }

    virtual std::any visitIfWithCode(mygrammarParser::IfWithCodeContext* ctx) override {
        visit(ctx->operator_if());
        return visit(ctx->code());
    }

    virtual std::any visitLineWithCode(mygrammarParser::LineWithCodeContext* ctx) override {
        visit(ctx->line());
        return visit(ctx->code());
    }

    virtual std::any visitSingleLine(mygrammarParser::SingleLineContext* ctx) override {
        return visit(ctx->line());
    }

    virtual std::any visitPrint(mygrammarParser::PrintContext* ctx) override {
        auto result = std::any_cast<std::variant<int, float>>(visit(ctx->expr()));

        if (std::holds_alternative<int>(result)) {
            std::cout << std::get<int>(result) << std::endl;
        }
        else if (std::holds_alternative<float>(result)) {
            std::cout << std::get<float>(result) << std::endl;
        }
        return nullptr;
    }

    virtual std::any visitPrintLine(mygrammarParser::PrintLineContext* ctx) override {
        return visit(ctx->print_());

    }

    virtual std::any visitWhileWithCode(mygrammarParser::WhileWithCodeContext* ctx) override {

        visit(ctx->cycle_while());
        return visit(ctx->code());
    }
};

