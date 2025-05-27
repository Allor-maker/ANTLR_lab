
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  mygrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, WS = 12, SEP = 13, ASSIGN = 14, 
    TYPE = 15, INT = 16, FLOAT = 17, COMP = 18, ADDSUB = 19, IF = 20, ELSE = 21, 
    WHILE = 22, PRINT = 23, DEF = 24, NAME = 25
  };

  explicit mygrammarLexer(antlr4::CharStream *input);

  ~mygrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

