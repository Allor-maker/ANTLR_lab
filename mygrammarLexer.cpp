
// Generated from mygrammar.g4 by ANTLR 4.13.2


#include "mygrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MygrammarLexerStaticData final {
  MygrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarLexerStaticData(const MygrammarLexerStaticData&) = delete;
  MygrammarLexerStaticData(MygrammarLexerStaticData&&) = delete;
  MygrammarLexerStaticData& operator=(const MygrammarLexerStaticData&) = delete;
  MygrammarLexerStaticData& operator=(MygrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MygrammarLexerStaticData> mygrammarlexerLexerStaticData = nullptr;

void mygrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "WS", "SEP", "ASSIGN", "TYPE", "INT", "FLOAT", "COMP", 
      "ADDSUB", "IF", "ELSE", "WHILE", "PRINT", "DEF", "NAME"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'*'", "'/'", "'&&'", "'||'", "'!'", "'++'", "'--'", 
      "'{'", "'}'", "", "';'", "'='", "", "", "", "", "", "'if'", "'else'", 
      "'while'", "'print'", "'def'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "WS", "SEP", "ASSIGN", 
      "TYPE", "INT", "FLOAT", "COMP", "ADDSUB", "IF", "ELSE", "WHILE", "PRINT", 
      "DEF", "NAME"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,25,155,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,10,1,
  	10,1,11,4,11,79,8,11,11,11,12,11,80,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,97,8,14,1,15,4,15,100,8,15,11,
  	15,12,15,101,1,16,4,16,105,8,16,11,16,12,16,106,1,16,1,16,5,16,111,8,
  	16,10,16,12,16,114,9,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,3,17,123,8,
  	17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,
  	21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,4,
  	24,152,8,24,11,24,12,24,153,0,0,25,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,
  	17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,
  	41,21,43,22,45,23,47,24,49,25,1,0,5,3,0,9,10,13,13,32,32,1,0,48,57,2,
  	0,60,60,62,62,2,0,43,43,45,45,2,0,65,90,97,122,163,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,
  	0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,
  	47,1,0,0,0,0,49,1,0,0,0,1,51,1,0,0,0,3,53,1,0,0,0,5,55,1,0,0,0,7,57,1,
  	0,0,0,9,59,1,0,0,0,11,62,1,0,0,0,13,65,1,0,0,0,15,67,1,0,0,0,17,70,1,
  	0,0,0,19,73,1,0,0,0,21,75,1,0,0,0,23,78,1,0,0,0,25,84,1,0,0,0,27,86,1,
  	0,0,0,29,96,1,0,0,0,31,99,1,0,0,0,33,104,1,0,0,0,35,122,1,0,0,0,37,124,
  	1,0,0,0,39,126,1,0,0,0,41,129,1,0,0,0,43,134,1,0,0,0,45,140,1,0,0,0,47,
  	146,1,0,0,0,49,151,1,0,0,0,51,52,5,40,0,0,52,2,1,0,0,0,53,54,5,41,0,0,
  	54,4,1,0,0,0,55,56,5,42,0,0,56,6,1,0,0,0,57,58,5,47,0,0,58,8,1,0,0,0,
  	59,60,5,38,0,0,60,61,5,38,0,0,61,10,1,0,0,0,62,63,5,124,0,0,63,64,5,124,
  	0,0,64,12,1,0,0,0,65,66,5,33,0,0,66,14,1,0,0,0,67,68,5,43,0,0,68,69,5,
  	43,0,0,69,16,1,0,0,0,70,71,5,45,0,0,71,72,5,45,0,0,72,18,1,0,0,0,73,74,
  	5,123,0,0,74,20,1,0,0,0,75,76,5,125,0,0,76,22,1,0,0,0,77,79,7,0,0,0,78,
  	77,1,0,0,0,79,80,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,81,82,1,0,0,0,82,
  	83,6,11,0,0,83,24,1,0,0,0,84,85,5,59,0,0,85,26,1,0,0,0,86,87,5,61,0,0,
  	87,28,1,0,0,0,88,89,5,105,0,0,89,90,5,110,0,0,90,97,5,116,0,0,91,92,5,
  	102,0,0,92,93,5,108,0,0,93,94,5,111,0,0,94,95,5,97,0,0,95,97,5,116,0,
  	0,96,88,1,0,0,0,96,91,1,0,0,0,97,30,1,0,0,0,98,100,7,1,0,0,99,98,1,0,
  	0,0,100,101,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,32,1,0,0,0,103,
  	105,7,1,0,0,104,103,1,0,0,0,105,106,1,0,0,0,106,104,1,0,0,0,106,107,1,
  	0,0,0,107,108,1,0,0,0,108,112,5,46,0,0,109,111,7,1,0,0,110,109,1,0,0,
  	0,111,114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,34,1,0,0,0,114,
  	112,1,0,0,0,115,123,7,2,0,0,116,117,5,62,0,0,117,123,5,61,0,0,118,119,
  	5,60,0,0,119,123,5,61,0,0,120,121,5,61,0,0,121,123,5,61,0,0,122,115,1,
  	0,0,0,122,116,1,0,0,0,122,118,1,0,0,0,122,120,1,0,0,0,123,36,1,0,0,0,
  	124,125,7,3,0,0,125,38,1,0,0,0,126,127,5,105,0,0,127,128,5,102,0,0,128,
  	40,1,0,0,0,129,130,5,101,0,0,130,131,5,108,0,0,131,132,5,115,0,0,132,
  	133,5,101,0,0,133,42,1,0,0,0,134,135,5,119,0,0,135,136,5,104,0,0,136,
  	137,5,105,0,0,137,138,5,108,0,0,138,139,5,101,0,0,139,44,1,0,0,0,140,
  	141,5,112,0,0,141,142,5,114,0,0,142,143,5,105,0,0,143,144,5,110,0,0,144,
  	145,5,116,0,0,145,46,1,0,0,0,146,147,5,100,0,0,147,148,5,101,0,0,148,
  	149,5,102,0,0,149,48,1,0,0,0,150,152,7,4,0,0,151,150,1,0,0,0,152,153,
  	1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,50,1,0,0,0,8,0,80,96,101,
  	106,112,122,153,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarlexerLexerStaticData = std::move(staticData);
}

}

mygrammarLexer::mygrammarLexer(CharStream *input) : Lexer(input) {
  mygrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mygrammarlexerLexerStaticData->atn, mygrammarlexerLexerStaticData->decisionToDFA, mygrammarlexerLexerStaticData->sharedContextCache);
}

mygrammarLexer::~mygrammarLexer() {
  delete _interpreter;
}

std::string mygrammarLexer::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarLexer::getRuleNames() const {
  return mygrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& mygrammarLexer::getChannelNames() const {
  return mygrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& mygrammarLexer::getModeNames() const {
  return mygrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& mygrammarLexer::getVocabulary() const {
  return mygrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarLexer::getSerializedATN() const {
  return mygrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& mygrammarLexer::getATN() const {
  return *mygrammarlexerLexerStaticData->atn;
}




void mygrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mygrammarlexerLexerOnceFlag, mygrammarlexerLexerInitialize);
#endif
}
