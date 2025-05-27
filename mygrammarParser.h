
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  mygrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, WS = 12, SEP = 13, ASSIGN = 14, 
    TYPE = 15, INT = 16, FLOAT = 17, COMP = 18, ADDSUB = 19, IF = 20, ELSE = 21, 
    WHILE = 22, PRINT = 23, DEF = 24, NAME = 25
  };

  enum {
    RuleExpr = 0, RuleBool_expr = 1, RuleAssignment = 2, RuleIncrement = 3, 
    RuleDecrement = 4, RuleFront_increment = 5, RuleFront_decrement = 6, 
    RuleInit = 7, RuleOperator_if = 8, RuleCycle_while = 9, RulePrint_ = 10, 
    RuleLine = 11, RuleCode = 12
  };

  explicit mygrammarParser(antlr4::TokenStream *input);

  mygrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~mygrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ExprContext;
  class Bool_exprContext;
  class AssignmentContext;
  class IncrementContext;
  class DecrementContext;
  class Front_incrementContext;
  class Front_decrementContext;
  class InitContext;
  class Operator_ifContext;
  class Cycle_whileContext;
  class Print_Context;
  class LineContext;
  class CodeContext; 

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FloatExprContext : public ExprContext {
  public:
    FloatExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIncExprContext : public ExprContext {
  public:
    PreIncExprContext(ExprContext *ctx);

    Front_incrementContext *front_increment();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntExprContext : public ExprContext {
  public:
    IntExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreDecExprContext : public ExprContext {
  public:
    PreDecExprContext(ExprContext *ctx);

    Front_decrementContext *front_decrement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADDSUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostDecExprContext : public ExprContext {
  public:
    PostDecExprContext(ExprContext *ctx);

    DecrementContext *decrement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulExprContext : public ExprContext {
  public:
    MulExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivExprContext : public ExprContext {
  public:
    DivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NameExprContext : public ExprContext {
  public:
    NameExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncExprContext : public ExprContext {
  public:
    PostIncExprContext(ExprContext *ctx);

    IncrementContext *increment();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Bool_exprContext : public antlr4::ParserRuleContext {
  public:
    Bool_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Bool_exprContext() = default;
    void copyFrom(Bool_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParenBoolExprContext : public Bool_exprContext {
  public:
    ParenBoolExprContext(Bool_exprContext *ctx);

    Bool_exprContext *bool_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotExprContext : public Bool_exprContext {
  public:
    NotExprContext(Bool_exprContext *ctx);

    Bool_exprContext *bool_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompExprContext : public Bool_exprContext {
  public:
    CompExprContext(Bool_exprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *COMP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrExprContext : public Bool_exprContext {
  public:
    OrExprContext(Bool_exprContext *ctx);

    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndExprContext : public Bool_exprContext {
  public:
    AndExprContext(Bool_exprContext *ctx);

    std::vector<Bool_exprContext *> bool_expr();
    Bool_exprContext* bool_expr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Bool_exprContext* bool_expr();
  Bool_exprContext* bool_expr(int precedence);
  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentContext() = default;
    void copyFrom(AssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignExprContext : public AssignmentContext {
  public:
    AssignExprContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentContext* assignment();

  class  IncrementContext : public antlr4::ParserRuleContext {
  public:
    IncrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IncrementContext() = default;
    void copyFrom(IncrementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PostIncContext : public IncrementContext {
  public:
    PostIncContext(IncrementContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IncrementContext* increment();

  class  DecrementContext : public antlr4::ParserRuleContext {
  public:
    DecrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DecrementContext() = default;
    void copyFrom(DecrementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PostDecContext : public DecrementContext {
  public:
    PostDecContext(DecrementContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DecrementContext* decrement();

  class  Front_incrementContext : public antlr4::ParserRuleContext {
  public:
    Front_incrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Front_incrementContext() = default;
    void copyFrom(Front_incrementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreIncContext : public Front_incrementContext {
  public:
    PreIncContext(Front_incrementContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Front_incrementContext* front_increment();

  class  Front_decrementContext : public antlr4::ParserRuleContext {
  public:
    Front_decrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Front_decrementContext() = default;
    void copyFrom(Front_decrementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreDecContext : public Front_decrementContext {
  public:
    PreDecContext(Front_decrementContext *ctx);

    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Front_decrementContext* front_decrement();

  class  InitContext : public antlr4::ParserRuleContext {
  public:
    InitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InitContext() = default;
    void copyFrom(InitContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarDeclContext : public InitContext {
  public:
    VarDeclContext(InitContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NAME();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InitContext* init();

  class  Operator_ifContext : public antlr4::ParserRuleContext {
  public:
    Operator_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Operator_ifContext() = default;
    void copyFrom(Operator_ifContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfStmtContext : public Operator_ifContext {
  public:
    IfStmtContext(Operator_ifContext *ctx);

    antlr4::tree::TerminalNode *IF();
    Bool_exprContext *bool_expr();
    CodeContext *code();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseStmtContext : public Operator_ifContext {
  public:
    IfElseStmtContext(Operator_ifContext *ctx);

    antlr4::tree::TerminalNode *IF();
    Bool_exprContext *bool_expr();
    std::vector<CodeContext *> code();
    CodeContext* code(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Operator_ifContext* operator_if();

  class  Cycle_whileContext : public antlr4::ParserRuleContext {
  public:
    Cycle_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Cycle_whileContext() = default;
    void copyFrom(Cycle_whileContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileStmtContext : public Cycle_whileContext {
  public:
    WhileStmtContext(Cycle_whileContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    Bool_exprContext *bool_expr();
    CodeContext *code();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Cycle_whileContext* cycle_while();

  class  Print_Context : public antlr4::ParserRuleContext {
  public:
    Print_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_Context() = default;
    void copyFrom(Print_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintContext : public Print_Context {
  public:
    PrintContext(Print_Context *ctx);

    antlr4::tree::TerminalNode *PRINT();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_Context* print_();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LineContext() = default;
    void copyFrom(LineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintLineContext : public LineContext {
  public:
    PrintLineContext(LineContext *ctx);

    Print_Context *print_();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostDecLineContext : public LineContext {
  public:
    PostDecLineContext(LineContext *ctx);

    DecrementContext *decrement();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreDecLineContext : public LineContext {
  public:
    PreDecLineContext(LineContext *ctx);

    Front_decrementContext *front_decrement();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIncLineContext : public LineContext {
  public:
    PreIncLineContext(LineContext *ctx);

    Front_incrementContext *front_increment();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncLineContext : public LineContext {
  public:
    PostIncLineContext(LineContext *ctx);

    IncrementContext *increment();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclLineContext : public LineContext {
  public:
    DeclLineContext(LineContext *ctx);

    InitContext *init();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignLineContext : public LineContext {
  public:
    AssignLineContext(LineContext *ctx);

    AssignmentContext *assignment();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LineContext* line();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CodeContext() = default;
    void copyFrom(CodeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfWithCodeContext : public CodeContext {
  public:
    IfWithCodeContext(CodeContext *ctx);

    Operator_ifContext *operator_if();
    CodeContext *code();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileOnlyContext : public CodeContext {
  public:
    WhileOnlyContext(CodeContext *ctx);

    Cycle_whileContext *cycle_while();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfOnlyContext : public CodeContext {
  public:
    IfOnlyContext(CodeContext *ctx);

    Operator_ifContext *operator_if();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileWithCodeContext : public CodeContext {
  public:
    WhileWithCodeContext(CodeContext *ctx);

    Cycle_whileContext *cycle_while();
    CodeContext *code();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LineWithCodeContext : public CodeContext {
  public:
    LineWithCodeContext(CodeContext *ctx);

    LineContext *line();
    CodeContext *code();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SingleLineContext : public CodeContext {
  public:
    SingleLineContext(CodeContext *ctx);

    LineContext *line();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CodeContext* code();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

