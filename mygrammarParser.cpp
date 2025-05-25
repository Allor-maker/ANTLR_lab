
// Generated from mygrammar.g4 by ANTLR 4.13.2


#include "mygrammarVisitor.h"

#include "mygrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MygrammarParserStaticData final {
  MygrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarParserStaticData(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData(MygrammarParserStaticData&&) = delete;
  MygrammarParserStaticData& operator=(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData& operator=(MygrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MygrammarParserStaticData> mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarParserStaticData>(
    std::vector<std::string>{
      "expr", "bool_expr", "assignment", "increment", "decrement", "front_increment", 
      "front_decrement", "init", "operator_if", "cycle_while", "print_", 
      "line", "code"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'*'", "'&&'", "'||'", "'!'", "'++'", "'--'", "'{'", 
      "'}'", "", "';'", "'='", "", "", "", "", "", "'if'", "'else'", "'while'", 
      "'print'", "'def'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "WS", "SEP", "ASSIGN", 
      "TYPE", "INT", "FLOAT", "COMP", "ADDSUB", "IF", "ELSE", "WHILE", "PRINT", 
      "DEF", "NAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,167,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,39,8,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,
  	47,8,0,10,0,12,0,50,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,
  	1,63,8,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,71,8,1,10,1,12,1,74,9,1,1,2,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,3,8,115,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,151,8,11,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,165,8,12,1,12,0,
  	2,0,2,13,0,2,4,6,8,10,12,14,16,18,20,22,24,0,0,178,0,38,1,0,0,0,2,62,
  	1,0,0,0,4,75,1,0,0,0,6,79,1,0,0,0,8,82,1,0,0,0,10,85,1,0,0,0,12,88,1,
  	0,0,0,14,91,1,0,0,0,16,114,1,0,0,0,18,116,1,0,0,0,20,124,1,0,0,0,22,150,
  	1,0,0,0,24,164,1,0,0,0,26,27,6,0,-1,0,27,28,5,1,0,0,28,29,3,0,0,0,29,
  	30,5,2,0,0,30,39,1,0,0,0,31,39,5,24,0,0,32,39,5,15,0,0,33,39,5,16,0,0,
  	34,39,3,6,3,0,35,39,3,8,4,0,36,39,3,12,6,0,37,39,3,10,5,0,38,26,1,0,0,
  	0,38,31,1,0,0,0,38,32,1,0,0,0,38,33,1,0,0,0,38,34,1,0,0,0,38,35,1,0,0,
  	0,38,36,1,0,0,0,38,37,1,0,0,0,39,48,1,0,0,0,40,41,10,9,0,0,41,42,5,3,
  	0,0,42,47,3,0,0,10,43,44,10,8,0,0,44,45,5,18,0,0,45,47,3,0,0,9,46,40,
  	1,0,0,0,46,43,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,1,0,0,0,49,1,
  	1,0,0,0,50,48,1,0,0,0,51,52,6,1,-1,0,52,53,3,0,0,0,53,54,5,17,0,0,54,
  	55,3,0,0,0,55,63,1,0,0,0,56,57,5,6,0,0,57,63,3,2,1,2,58,59,5,1,0,0,59,
  	60,3,2,1,0,60,61,5,2,0,0,61,63,1,0,0,0,62,51,1,0,0,0,62,56,1,0,0,0,62,
  	58,1,0,0,0,63,72,1,0,0,0,64,65,10,4,0,0,65,66,5,4,0,0,66,71,3,2,1,5,67,
  	68,10,3,0,0,68,69,5,5,0,0,69,71,3,2,1,4,70,64,1,0,0,0,70,67,1,0,0,0,71,
  	74,1,0,0,0,72,70,1,0,0,0,72,73,1,0,0,0,73,3,1,0,0,0,74,72,1,0,0,0,75,
  	76,5,24,0,0,76,77,5,13,0,0,77,78,3,0,0,0,78,5,1,0,0,0,79,80,5,24,0,0,
  	80,81,5,7,0,0,81,7,1,0,0,0,82,83,5,24,0,0,83,84,5,8,0,0,84,9,1,0,0,0,
  	85,86,5,7,0,0,86,87,5,24,0,0,87,11,1,0,0,0,88,89,5,8,0,0,89,90,5,24,0,
  	0,90,13,1,0,0,0,91,92,5,14,0,0,92,93,5,24,0,0,93,15,1,0,0,0,94,95,5,19,
  	0,0,95,96,5,1,0,0,96,97,3,2,1,0,97,98,5,2,0,0,98,99,5,9,0,0,99,100,3,
  	24,12,0,100,101,5,10,0,0,101,115,1,0,0,0,102,103,5,19,0,0,103,104,5,1,
  	0,0,104,105,3,2,1,0,105,106,5,2,0,0,106,107,5,9,0,0,107,108,3,24,12,0,
  	108,109,5,10,0,0,109,110,5,20,0,0,110,111,5,9,0,0,111,112,3,24,12,0,112,
  	113,5,10,0,0,113,115,1,0,0,0,114,94,1,0,0,0,114,102,1,0,0,0,115,17,1,
  	0,0,0,116,117,5,21,0,0,117,118,5,1,0,0,118,119,3,2,1,0,119,120,5,2,0,
  	0,120,121,5,9,0,0,121,122,3,24,12,0,122,123,5,10,0,0,123,19,1,0,0,0,124,
  	125,5,22,0,0,125,126,5,1,0,0,126,127,3,0,0,0,127,128,5,2,0,0,128,21,1,
  	0,0,0,129,130,3,14,7,0,130,131,5,12,0,0,131,151,1,0,0,0,132,133,3,12,
  	6,0,133,134,5,12,0,0,134,151,1,0,0,0,135,136,3,10,5,0,136,137,5,12,0,
  	0,137,151,1,0,0,0,138,139,3,4,2,0,139,140,5,12,0,0,140,151,1,0,0,0,141,
  	142,3,6,3,0,142,143,5,12,0,0,143,151,1,0,0,0,144,145,3,8,4,0,145,146,
  	5,12,0,0,146,151,1,0,0,0,147,148,3,20,10,0,148,149,5,12,0,0,149,151,1,
  	0,0,0,150,129,1,0,0,0,150,132,1,0,0,0,150,135,1,0,0,0,150,138,1,0,0,0,
  	150,141,1,0,0,0,150,144,1,0,0,0,150,147,1,0,0,0,151,23,1,0,0,0,152,165,
  	3,16,8,0,153,165,3,18,9,0,154,155,3,18,9,0,155,156,3,24,12,0,156,165,
  	1,0,0,0,157,158,3,16,8,0,158,159,3,24,12,0,159,165,1,0,0,0,160,161,3,
  	22,11,0,161,162,3,24,12,0,162,165,1,0,0,0,163,165,3,22,11,0,164,152,1,
  	0,0,0,164,153,1,0,0,0,164,154,1,0,0,0,164,157,1,0,0,0,164,160,1,0,0,0,
  	164,163,1,0,0,0,165,25,1,0,0,0,9,38,46,48,62,70,72,114,150,164
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = std::move(staticData);
}

}

mygrammarParser::mygrammarParser(TokenStream *input) : mygrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrammarParser::mygrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

mygrammarParser::~mygrammarParser() {
  delete _interpreter;
}

const atn::ATN& mygrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string mygrammarParser::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- ExprContext ------------------------------------------------------------------

mygrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ExprContext::getRuleIndex() const {
  return mygrammarParser::RuleExpr;
}

void mygrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatExprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::FloatExprContext::FLOAT() {
  return getToken(mygrammarParser::FLOAT, 0);
}

mygrammarParser::FloatExprContext::FloatExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::FloatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitFloatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncExprContext ------------------------------------------------------------------

mygrammarParser::Front_incrementContext* mygrammarParser::PreIncExprContext::front_increment() {
  return getRuleContext<mygrammarParser::Front_incrementContext>(0);
}

mygrammarParser::PreIncExprContext::PreIncExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreIncExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreIncExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntExprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IntExprContext::INT() {
  return getToken(mygrammarParser::INT, 0);
}

mygrammarParser::IntExprContext::IntExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIntExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreDecExprContext ------------------------------------------------------------------

mygrammarParser::Front_decrementContext* mygrammarParser::PreDecExprContext::front_decrement() {
  return getRuleContext<mygrammarParser::Front_decrementContext>(0);
}

mygrammarParser::PreDecExprContext::PreDecExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreDecExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::AddSubExprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::AddSubExprContext::ADDSUB() {
  return getToken(mygrammarParser::ADDSUB, 0);
}

mygrammarParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostDecExprContext ------------------------------------------------------------------

mygrammarParser::DecrementContext* mygrammarParser::PostDecExprContext::decrement() {
  return getRuleContext<mygrammarParser::DecrementContext>(0);
}

mygrammarParser::PostDecExprContext::PostDecExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostDecExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulExprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::MulExprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::MulExprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

mygrammarParser::MulExprContext::MulExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

mygrammarParser::ExprContext* mygrammarParser::ParenExprContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

mygrammarParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameExprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::NameExprContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::NameExprContext::NameExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::NameExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitNameExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncExprContext ------------------------------------------------------------------

mygrammarParser::IncrementContext* mygrammarParser::PostIncExprContext::increment() {
  return getRuleContext<mygrammarParser::IncrementContext>(0);
}

mygrammarParser::PostIncExprContext::PostIncExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostIncExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostIncExpr(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ExprContext* mygrammarParser::expr() {
   return expr(0);
}

mygrammarParser::ExprContext* mygrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  mygrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, mygrammarParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(27);
      match(mygrammarParser::T__0);
      setState(28);
      expr(0);
      setState(29);
      match(mygrammarParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NameExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(31);
      match(mygrammarParser::NAME);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IntExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(mygrammarParser::INT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FloatExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(33);
      match(mygrammarParser::FLOAT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PostIncExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(34);
      increment();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<PostDecExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(35);
      decrement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PreDecExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(36);
      front_decrement();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PreIncExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(37);
      front_increment();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(48);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(46);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(40);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(41);
          match(mygrammarParser::T__2);
          setState(42);
          expr(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(43);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(44);
          match(mygrammarParser::ADDSUB);
          setState(45);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(50);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Bool_exprContext ------------------------------------------------------------------

mygrammarParser::Bool_exprContext::Bool_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Bool_exprContext::getRuleIndex() const {
  return mygrammarParser::RuleBool_expr;
}

void mygrammarParser::Bool_exprContext::copyFrom(Bool_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParenBoolExprContext ------------------------------------------------------------------

mygrammarParser::Bool_exprContext* mygrammarParser::ParenBoolExprContext::bool_expr() {
  return getRuleContext<mygrammarParser::Bool_exprContext>(0);
}

mygrammarParser::ParenBoolExprContext::ParenBoolExprContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ParenBoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitParenBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

mygrammarParser::Bool_exprContext* mygrammarParser::NotExprContext::bool_expr() {
  return getRuleContext<mygrammarParser::Bool_exprContext>(0);
}

mygrammarParser::NotExprContext::NotExprContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompExprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::CompExprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::CompExprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::CompExprContext::COMP() {
  return getToken(mygrammarParser::COMP, 0);
}

mygrammarParser::CompExprContext::CompExprContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::CompExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitCompExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrExprContext ------------------------------------------------------------------

std::vector<mygrammarParser::Bool_exprContext *> mygrammarParser::OrExprContext::bool_expr() {
  return getRuleContexts<mygrammarParser::Bool_exprContext>();
}

mygrammarParser::Bool_exprContext* mygrammarParser::OrExprContext::bool_expr(size_t i) {
  return getRuleContext<mygrammarParser::Bool_exprContext>(i);
}

mygrammarParser::OrExprContext::OrExprContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::OrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitOrExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndExprContext ------------------------------------------------------------------

std::vector<mygrammarParser::Bool_exprContext *> mygrammarParser::AndExprContext::bool_expr() {
  return getRuleContexts<mygrammarParser::Bool_exprContext>();
}

mygrammarParser::Bool_exprContext* mygrammarParser::AndExprContext::bool_expr(size_t i) {
  return getRuleContext<mygrammarParser::Bool_exprContext>(i);
}

mygrammarParser::AndExprContext::AndExprContext(Bool_exprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::Bool_exprContext* mygrammarParser::bool_expr() {
   return bool_expr(0);
}

mygrammarParser::Bool_exprContext* mygrammarParser::bool_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::Bool_exprContext *_localctx = _tracker.createInstance<Bool_exprContext>(_ctx, parentState);
  mygrammarParser::Bool_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, mygrammarParser::RuleBool_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CompExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(52);
      expr(0);
      setState(53);
      match(mygrammarParser::COMP);
      setState(54);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      match(mygrammarParser::T__5);
      setState(57);
      bool_expr(2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParenBoolExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(mygrammarParser::T__0);
      setState(59);
      bool_expr(0);
      setState(60);
      match(mygrammarParser::T__1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(70);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AndExprContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(64);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(65);
          match(mygrammarParser::T__3);
          setState(66);
          bool_expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OrExprContext>(_tracker.createInstance<Bool_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBool_expr);
          setState(67);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(68);
          match(mygrammarParser::T__4);
          setState(69);
          bool_expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(74);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

mygrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::AssignmentContext::getRuleIndex() const {
  return mygrammarParser::RuleAssignment;
}

void mygrammarParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignExprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::AssignExprContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

tree::TerminalNode* mygrammarParser::AssignExprContext::ASSIGN() {
  return getToken(mygrammarParser::ASSIGN, 0);
}

mygrammarParser::ExprContext* mygrammarParser::AssignExprContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

mygrammarParser::AssignExprContext::AssignExprContext(AssignmentContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::AssignmentContext* mygrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, mygrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::AssignExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(mygrammarParser::NAME);
    setState(76);
    match(mygrammarParser::ASSIGN);
    setState(77);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementContext ------------------------------------------------------------------

mygrammarParser::IncrementContext::IncrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::IncrementContext::getRuleIndex() const {
  return mygrammarParser::RuleIncrement;
}

void mygrammarParser::IncrementContext::copyFrom(IncrementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PostIncContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::PostIncContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::PostIncContext::PostIncContext(IncrementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostIncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostInc(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::IncrementContext* mygrammarParser::increment() {
  IncrementContext *_localctx = _tracker.createInstance<IncrementContext>(_ctx, getState());
  enterRule(_localctx, 6, mygrammarParser::RuleIncrement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::PostIncContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(mygrammarParser::NAME);
    setState(80);
    match(mygrammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementContext ------------------------------------------------------------------

mygrammarParser::DecrementContext::DecrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::DecrementContext::getRuleIndex() const {
  return mygrammarParser::RuleDecrement;
}

void mygrammarParser::DecrementContext::copyFrom(DecrementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PostDecContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::PostDecContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::PostDecContext::PostDecContext(DecrementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostDec(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::DecrementContext* mygrammarParser::decrement() {
  DecrementContext *_localctx = _tracker.createInstance<DecrementContext>(_ctx, getState());
  enterRule(_localctx, 8, mygrammarParser::RuleDecrement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::PostDecContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(mygrammarParser::NAME);
    setState(83);
    match(mygrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Front_incrementContext ------------------------------------------------------------------

mygrammarParser::Front_incrementContext::Front_incrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Front_incrementContext::getRuleIndex() const {
  return mygrammarParser::RuleFront_increment;
}

void mygrammarParser::Front_incrementContext::copyFrom(Front_incrementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PreIncContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::PreIncContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::PreIncContext::PreIncContext(Front_incrementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreIncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreInc(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::Front_incrementContext* mygrammarParser::front_increment() {
  Front_incrementContext *_localctx = _tracker.createInstance<Front_incrementContext>(_ctx, getState());
  enterRule(_localctx, 10, mygrammarParser::RuleFront_increment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::PreIncContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(mygrammarParser::T__6);
    setState(86);
    match(mygrammarParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Front_decrementContext ------------------------------------------------------------------

mygrammarParser::Front_decrementContext::Front_decrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Front_decrementContext::getRuleIndex() const {
  return mygrammarParser::RuleFront_decrement;
}

void mygrammarParser::Front_decrementContext::copyFrom(Front_decrementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PreDecContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::PreDecContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::PreDecContext::PreDecContext(Front_decrementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreDec(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::Front_decrementContext* mygrammarParser::front_decrement() {
  Front_decrementContext *_localctx = _tracker.createInstance<Front_decrementContext>(_ctx, getState());
  enterRule(_localctx, 12, mygrammarParser::RuleFront_decrement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::PreDecContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(mygrammarParser::T__7);
    setState(89);
    match(mygrammarParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitContext ------------------------------------------------------------------

mygrammarParser::InitContext::InitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::InitContext::getRuleIndex() const {
  return mygrammarParser::RuleInit;
}

void mygrammarParser::InitContext::copyFrom(InitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDeclContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::VarDeclContext::TYPE() {
  return getToken(mygrammarParser::TYPE, 0);
}

tree::TerminalNode* mygrammarParser::VarDeclContext::NAME() {
  return getToken(mygrammarParser::NAME, 0);
}

mygrammarParser::VarDeclContext::VarDeclContext(InitContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::InitContext* mygrammarParser::init() {
  InitContext *_localctx = _tracker.createInstance<InitContext>(_ctx, getState());
  enterRule(_localctx, 14, mygrammarParser::RuleInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::VarDeclContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(mygrammarParser::TYPE);
    setState(92);
    match(mygrammarParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_ifContext ------------------------------------------------------------------

mygrammarParser::Operator_ifContext::Operator_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Operator_ifContext::getRuleIndex() const {
  return mygrammarParser::RuleOperator_if;
}

void mygrammarParser::Operator_ifContext::copyFrom(Operator_ifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IfStmtContext::IF() {
  return getToken(mygrammarParser::IF, 0);
}

mygrammarParser::Bool_exprContext* mygrammarParser::IfStmtContext::bool_expr() {
  return getRuleContext<mygrammarParser::Bool_exprContext>(0);
}

mygrammarParser::CodeContext* mygrammarParser::IfStmtContext::code() {
  return getRuleContext<mygrammarParser::CodeContext>(0);
}

mygrammarParser::IfStmtContext::IfStmtContext(Operator_ifContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseStmtContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IfElseStmtContext::IF() {
  return getToken(mygrammarParser::IF, 0);
}

mygrammarParser::Bool_exprContext* mygrammarParser::IfElseStmtContext::bool_expr() {
  return getRuleContext<mygrammarParser::Bool_exprContext>(0);
}

std::vector<mygrammarParser::CodeContext *> mygrammarParser::IfElseStmtContext::code() {
  return getRuleContexts<mygrammarParser::CodeContext>();
}

mygrammarParser::CodeContext* mygrammarParser::IfElseStmtContext::code(size_t i) {
  return getRuleContext<mygrammarParser::CodeContext>(i);
}

tree::TerminalNode* mygrammarParser::IfElseStmtContext::ELSE() {
  return getToken(mygrammarParser::ELSE, 0);
}

mygrammarParser::IfElseStmtContext::IfElseStmtContext(Operator_ifContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IfElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfElseStmt(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::Operator_ifContext* mygrammarParser::operator_if() {
  Operator_ifContext *_localctx = _tracker.createInstance<Operator_ifContext>(_ctx, getState());
  enterRule(_localctx, 16, mygrammarParser::RuleOperator_if);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammarParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(94);
      match(mygrammarParser::IF);
      setState(95);
      match(mygrammarParser::T__0);
      setState(96);
      bool_expr(0);
      setState(97);
      match(mygrammarParser::T__1);
      setState(98);
      match(mygrammarParser::T__8);
      setState(99);
      code();
      setState(100);
      match(mygrammarParser::T__9);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammarParser::IfElseStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(102);
      match(mygrammarParser::IF);
      setState(103);
      match(mygrammarParser::T__0);
      setState(104);
      bool_expr(0);
      setState(105);
      match(mygrammarParser::T__1);
      setState(106);
      match(mygrammarParser::T__8);
      setState(107);
      code();
      setState(108);
      match(mygrammarParser::T__9);
      setState(109);
      match(mygrammarParser::ELSE);
      setState(110);
      match(mygrammarParser::T__8);
      setState(111);
      code();
      setState(112);
      match(mygrammarParser::T__9);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cycle_whileContext ------------------------------------------------------------------

mygrammarParser::Cycle_whileContext::Cycle_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Cycle_whileContext::getRuleIndex() const {
  return mygrammarParser::RuleCycle_while;
}

void mygrammarParser::Cycle_whileContext::copyFrom(Cycle_whileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::WhileStmtContext::WHILE() {
  return getToken(mygrammarParser::WHILE, 0);
}

mygrammarParser::Bool_exprContext* mygrammarParser::WhileStmtContext::bool_expr() {
  return getRuleContext<mygrammarParser::Bool_exprContext>(0);
}

mygrammarParser::CodeContext* mygrammarParser::WhileStmtContext::code() {
  return getRuleContext<mygrammarParser::CodeContext>(0);
}

mygrammarParser::WhileStmtContext::WhileStmtContext(Cycle_whileContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::Cycle_whileContext* mygrammarParser::cycle_while() {
  Cycle_whileContext *_localctx = _tracker.createInstance<Cycle_whileContext>(_ctx, getState());
  enterRule(_localctx, 18, mygrammarParser::RuleCycle_while);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::WhileStmtContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(mygrammarParser::WHILE);
    setState(117);
    match(mygrammarParser::T__0);
    setState(118);
    bool_expr(0);
    setState(119);
    match(mygrammarParser::T__1);
    setState(120);
    match(mygrammarParser::T__8);
    setState(121);
    code();
    setState(122);
    match(mygrammarParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_Context ------------------------------------------------------------------

mygrammarParser::Print_Context::Print_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::Print_Context::getRuleIndex() const {
  return mygrammarParser::RulePrint_;
}

void mygrammarParser::Print_Context::copyFrom(Print_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::PrintContext::PRINT() {
  return getToken(mygrammarParser::PRINT, 0);
}

mygrammarParser::ExprContext* mygrammarParser::PrintContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

mygrammarParser::PrintContext::PrintContext(Print_Context *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::Print_Context* mygrammarParser::print_() {
  Print_Context *_localctx = _tracker.createInstance<Print_Context>(_ctx, getState());
  enterRule(_localctx, 20, mygrammarParser::RulePrint_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::PrintContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(124);
    match(mygrammarParser::PRINT);
    setState(125);
    match(mygrammarParser::T__0);
    setState(126);
    expr(0);
    setState(127);
    match(mygrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

mygrammarParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::LineContext::getRuleIndex() const {
  return mygrammarParser::RuleLine;
}

void mygrammarParser::LineContext::copyFrom(LineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintLineContext ------------------------------------------------------------------

mygrammarParser::Print_Context* mygrammarParser::PrintLineContext::print_() {
  return getRuleContext<mygrammarParser::Print_Context>(0);
}

tree::TerminalNode* mygrammarParser::PrintLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::PrintLineContext::PrintLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PrintLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPrintLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostDecLineContext ------------------------------------------------------------------

mygrammarParser::DecrementContext* mygrammarParser::PostDecLineContext::decrement() {
  return getRuleContext<mygrammarParser::DecrementContext>(0);
}

tree::TerminalNode* mygrammarParser::PostDecLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::PostDecLineContext::PostDecLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostDecLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostDecLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreDecLineContext ------------------------------------------------------------------

mygrammarParser::Front_decrementContext* mygrammarParser::PreDecLineContext::front_decrement() {
  return getRuleContext<mygrammarParser::Front_decrementContext>(0);
}

tree::TerminalNode* mygrammarParser::PreDecLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::PreDecLineContext::PreDecLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreDecLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreDecLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncLineContext ------------------------------------------------------------------

mygrammarParser::Front_incrementContext* mygrammarParser::PreIncLineContext::front_increment() {
  return getRuleContext<mygrammarParser::Front_incrementContext>(0);
}

tree::TerminalNode* mygrammarParser::PreIncLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::PreIncLineContext::PreIncLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PreIncLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPreIncLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncLineContext ------------------------------------------------------------------

mygrammarParser::IncrementContext* mygrammarParser::PostIncLineContext::increment() {
  return getRuleContext<mygrammarParser::IncrementContext>(0);
}

tree::TerminalNode* mygrammarParser::PostIncLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::PostIncLineContext::PostIncLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PostIncLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPostIncLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclLineContext ------------------------------------------------------------------

mygrammarParser::InitContext* mygrammarParser::DeclLineContext::init() {
  return getRuleContext<mygrammarParser::InitContext>(0);
}

tree::TerminalNode* mygrammarParser::DeclLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::DeclLineContext::DeclLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::DeclLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitDeclLine(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignLineContext ------------------------------------------------------------------

mygrammarParser::AssignmentContext* mygrammarParser::AssignLineContext::assignment() {
  return getRuleContext<mygrammarParser::AssignmentContext>(0);
}

tree::TerminalNode* mygrammarParser::AssignLineContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::AssignLineContext::AssignLineContext(LineContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AssignLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAssignLine(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::LineContext* mygrammarParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 22, mygrammarParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammarParser::DeclLineContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(129);
      init();
      setState(130);
      match(mygrammarParser::SEP);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammarParser::PreDecLineContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(132);
      front_decrement();
      setState(133);
      match(mygrammarParser::SEP);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<mygrammarParser::PreIncLineContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(135);
      front_increment();
      setState(136);
      match(mygrammarParser::SEP);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<mygrammarParser::AssignLineContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(138);
      assignment();
      setState(139);
      match(mygrammarParser::SEP);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<mygrammarParser::PostIncLineContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(141);
      increment();
      setState(142);
      match(mygrammarParser::SEP);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<mygrammarParser::PostDecLineContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(144);
      decrement();
      setState(145);
      match(mygrammarParser::SEP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<mygrammarParser::PrintLineContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(147);
      print_();
      setState(148);
      match(mygrammarParser::SEP);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

mygrammarParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::CodeContext::getRuleIndex() const {
  return mygrammarParser::RuleCode;
}

void mygrammarParser::CodeContext::copyFrom(CodeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfWithCodeContext ------------------------------------------------------------------

mygrammarParser::Operator_ifContext* mygrammarParser::IfWithCodeContext::operator_if() {
  return getRuleContext<mygrammarParser::Operator_ifContext>(0);
}

mygrammarParser::CodeContext* mygrammarParser::IfWithCodeContext::code() {
  return getRuleContext<mygrammarParser::CodeContext>(0);
}

mygrammarParser::IfWithCodeContext::IfWithCodeContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IfWithCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfWithCode(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileOnlyContext ------------------------------------------------------------------

mygrammarParser::Cycle_whileContext* mygrammarParser::WhileOnlyContext::cycle_while() {
  return getRuleContext<mygrammarParser::Cycle_whileContext>(0);
}

mygrammarParser::WhileOnlyContext::WhileOnlyContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::WhileOnlyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitWhileOnly(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfOnlyContext ------------------------------------------------------------------

mygrammarParser::Operator_ifContext* mygrammarParser::IfOnlyContext::operator_if() {
  return getRuleContext<mygrammarParser::Operator_ifContext>(0);
}

mygrammarParser::IfOnlyContext::IfOnlyContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IfOnlyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfOnly(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileWithCodeContext ------------------------------------------------------------------

mygrammarParser::Cycle_whileContext* mygrammarParser::WhileWithCodeContext::cycle_while() {
  return getRuleContext<mygrammarParser::Cycle_whileContext>(0);
}

mygrammarParser::CodeContext* mygrammarParser::WhileWithCodeContext::code() {
  return getRuleContext<mygrammarParser::CodeContext>(0);
}

mygrammarParser::WhileWithCodeContext::WhileWithCodeContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::WhileWithCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitWhileWithCode(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LineWithCodeContext ------------------------------------------------------------------

mygrammarParser::LineContext* mygrammarParser::LineWithCodeContext::line() {
  return getRuleContext<mygrammarParser::LineContext>(0);
}

mygrammarParser::CodeContext* mygrammarParser::LineWithCodeContext::code() {
  return getRuleContext<mygrammarParser::CodeContext>(0);
}

mygrammarParser::LineWithCodeContext::LineWithCodeContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::LineWithCodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitLineWithCode(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SingleLineContext ------------------------------------------------------------------

mygrammarParser::LineContext* mygrammarParser::SingleLineContext::line() {
  return getRuleContext<mygrammarParser::LineContext>(0);
}

mygrammarParser::SingleLineContext::SingleLineContext(CodeContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::SingleLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitSingleLine(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::CodeContext* mygrammarParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 24, mygrammarParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammarParser::IfOnlyContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(152);
      operator_if();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammarParser::WhileOnlyContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(153);
      cycle_while();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<mygrammarParser::WhileWithCodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(154);
      cycle_while();
      setState(155);
      code();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<mygrammarParser::IfWithCodeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(157);
      operator_if();
      setState(158);
      code();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<mygrammarParser::LineWithCodeContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(160);
      line();
      setState(161);
      code();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<mygrammarParser::SingleLineContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(163);
      line();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool mygrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 1: return bool_exprSempred(antlrcpp::downCast<Bool_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::bool_exprSempred(Bool_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void mygrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
