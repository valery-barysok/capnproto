// Generated code, DO NOT EDIT

#ifndef CAPNP_INCLUDED_28e6ee28b20c751454a4280a478ff746
#define CAPNP_INCLUDED_28e6ee28b20c751454a4280a478ff746

#include <capnp/generated-header-support.h>

namespace capnp {
namespace compiler {


struct Token {
  Token() = delete;

  class Reader;
  class Builder;
  struct Body;

private:
};

struct Token::Body {
  Body() = delete;

  class Reader;
  class Builder;

  enum Which: uint16_t {
    IDENTIFIER = 0,
    STRING_LITERAL = 1,
    INTEGER_LITERAL = 2,
    FLOAT_LITERAL = 3,
    OPERATOR = 4,
    PARENTHESIZED_LIST = 5,
    BRACKETED_LIST = 6,
  };

private:
};

struct Statement {
  Statement() = delete;

  class Reader;
  class Builder;
  struct Block;

private:
};

struct Statement::Block {
  Block() = delete;

  class Reader;
  class Builder;

  enum Which: uint16_t {
    NONE = 0,
    STATEMENTS = 1,
  };

private:
};

struct LexedTokens {
  LexedTokens() = delete;

  class Reader;
  class Builder;

private:
};

struct LexedStatements {
  LexedStatements() = delete;

  class Reader;
  class Builder;

private:
};



}  // namespace
}  // namespace

namespace capnp {
namespace schemas {
extern const ::capnp::_::RawSchema s_91cc55cd57de5419;
extern const ::capnp::_::RawSchema s_c6725e678d60fa37;
extern const ::capnp::_::RawSchema s_9e69a92512b19d18;
extern const ::capnp::_::RawSchema s_a11f97b9d6c73dd4;
}  // namespace schemas
namespace _ {  // private
CAPNP_DECLARE_STRUCT(
    ::capnp::compiler::Token, 91cc55cd57de5419,
    3, 1, INLINE_COMPOSITE);
CAPNP_DECLARE_UNION(
    ::capnp::compiler::Token::Body,
    ::capnp::compiler::Token, 0);
CAPNP_DECLARE_STRUCT(
    ::capnp::compiler::Statement, c6725e678d60fa37,
    2, 3, INLINE_COMPOSITE);
CAPNP_DECLARE_UNION(
    ::capnp::compiler::Statement::Block,
    ::capnp::compiler::Statement, 1);
CAPNP_DECLARE_STRUCT(
    ::capnp::compiler::LexedTokens, 9e69a92512b19d18,
    0, 1, POINTER);
CAPNP_DECLARE_STRUCT(
    ::capnp::compiler::LexedStatements, a11f97b9d6c73dd4,
    0, 1, POINTER);
}  // namespace capnp
}  // namespace _ (private)

namespace capnp {
namespace compiler {



class Token::Reader {
public:
  typedef Token Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline size_t totalSizeInWords() const {
    return _reader.totalSize() / ::capnp::WORDS;
  }

  // union body@0 {  # [0, 16)
  inline Body::Reader getBody() const;

  // startByte@8: UInt32;  # bits[32, 64)
  inline  ::uint32_t getStartByte() const;

  // endByte@9: UInt32;  # bits[128, 160)
  inline  ::uint32_t getEndByte() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Token::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Token::Reader reader) {
  return ::capnp::_::structString<Token>(reader._reader);
}



class Token::Builder {
public:
  typedef Token Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline size_t totalSizeInWords() { return asReader().totalSizeInWords(); }

  // union body@0 {  # [0, 16)
  inline Body::Builder getBody();

  // startByte@8: UInt32;  # bits[32, 64)
  inline  ::uint32_t getStartByte();
  inline void setStartByte( ::uint32_t value);

  // endByte@9: UInt32;  # bits[128, 160)
  inline  ::uint32_t getEndByte();
  inline void setEndByte( ::uint32_t value);
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Token::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Token::Builder builder) {
  return ::capnp::_::structString<Token>(builder._builder.asReader());
}

class Token::Body::Reader {
public:
  typedef Body Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline Which which() const;

  // identifier@1: Text;  # ptr[0], union tag = 0
  inline bool hasIdentifier() const;
  inline  ::capnp::Text::Reader getIdentifier() const;

  // stringLiteral@2: Text;  # ptr[0], union tag = 1
  inline bool hasStringLiteral() const;
  inline  ::capnp::Text::Reader getStringLiteral() const;

  // integerLiteral@3: UInt64;  # bits[64, 128), union tag = 2
  inline  ::uint64_t getIntegerLiteral() const;

  // floatLiteral@4: Float64;  # bits[64, 128), union tag = 3
  inline double getFloatLiteral() const;

  // operator@5: Text;  # ptr[0], union tag = 4
  inline bool hasOperator() const;
  inline  ::capnp::Text::Reader getOperator() const;

  // parenthesizedList@6: List(List(.Token));  # ptr[0], union tag = 5
  inline bool hasParenthesizedList() const;
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader getParenthesizedList() const;

  // bracketedList@7: List(List(.Token));  # ptr[0], union tag = 6
  inline bool hasBracketedList() const;
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader getBracketedList() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Token::Body::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Token::Body::Reader reader) {
  return ::capnp::_::unionString<Token::Body>(reader._reader);
}



class Token::Body::Builder {
public:
  typedef Body Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline Which which();

  // identifier@1: Text;  # ptr[0], union tag = 0
  inline bool hasIdentifier();
  inline  ::capnp::Text::Builder getIdentifier();
  inline void setIdentifier( ::capnp::Text::Reader other);
  inline  ::capnp::Text::Builder initIdentifier(unsigned int size);
  inline void adoptIdentifier(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownIdentifier();

  // stringLiteral@2: Text;  # ptr[0], union tag = 1
  inline bool hasStringLiteral();
  inline  ::capnp::Text::Builder getStringLiteral();
  inline void setStringLiteral( ::capnp::Text::Reader other);
  inline  ::capnp::Text::Builder initStringLiteral(unsigned int size);
  inline void adoptStringLiteral(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownStringLiteral();

  // integerLiteral@3: UInt64;  # bits[64, 128), union tag = 2
  inline  ::uint64_t getIntegerLiteral();
  inline void setIntegerLiteral( ::uint64_t value);

  // floatLiteral@4: Float64;  # bits[64, 128), union tag = 3
  inline double getFloatLiteral();
  inline void setFloatLiteral(double value);

  // operator@5: Text;  # ptr[0], union tag = 4
  inline bool hasOperator();
  inline  ::capnp::Text::Builder getOperator();
  inline void setOperator( ::capnp::Text::Reader other);
  inline  ::capnp::Text::Builder initOperator(unsigned int size);
  inline void adoptOperator(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownOperator();

  // parenthesizedList@6: List(List(.Token));  # ptr[0], union tag = 5
  inline bool hasParenthesizedList();
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder getParenthesizedList();
  inline void setParenthesizedList( ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader other);
  inline void setParenthesizedList(
      std::initializer_list< ::capnp::List< ::capnp::compiler::Token>::Reader> other);
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder initParenthesizedList(unsigned int size);
  inline void adoptParenthesizedList(::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>> disownParenthesizedList();

  // bracketedList@7: List(List(.Token));  # ptr[0], union tag = 6
  inline bool hasBracketedList();
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder getBracketedList();
  inline void setBracketedList( ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader other);
  inline void setBracketedList(
      std::initializer_list< ::capnp::List< ::capnp::compiler::Token>::Reader> other);
  inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder initBracketedList(unsigned int size);
  inline void adoptBracketedList(::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>> disownBracketedList();
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Token::Body::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Token::Body::Builder builder) {
  return ::capnp::_::unionString<Token::Body>(builder._builder.asReader());
}

class Statement::Reader {
public:
  typedef Statement Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline size_t totalSizeInWords() const {
    return _reader.totalSize() / ::capnp::WORDS;
  }

  // union block@1 {  # [0, 16)
  inline Block::Reader getBlock() const;

  // tokens@0: List(.Token);  # ptr[0]
  inline bool hasTokens() const;
  inline  ::capnp::List< ::capnp::compiler::Token>::Reader getTokens() const;

  // docComment@4: Text;  # ptr[2]
  inline bool hasDocComment() const;
  inline  ::capnp::Text::Reader getDocComment() const;

  // startByte@5: UInt32;  # bits[32, 64)
  inline  ::uint32_t getStartByte() const;

  // endByte@6: UInt32;  # bits[64, 96)
  inline  ::uint32_t getEndByte() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Statement::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Statement::Reader reader) {
  return ::capnp::_::structString<Statement>(reader._reader);
}



class Statement::Builder {
public:
  typedef Statement Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline size_t totalSizeInWords() { return asReader().totalSizeInWords(); }

  // union block@1 {  # [0, 16)
  inline Block::Builder getBlock();

  // tokens@0: List(.Token);  # ptr[0]
  inline bool hasTokens();
  inline  ::capnp::List< ::capnp::compiler::Token>::Builder getTokens();
  inline void setTokens( ::capnp::List< ::capnp::compiler::Token>::Reader other);
  inline  ::capnp::List< ::capnp::compiler::Token>::Builder initTokens(unsigned int size);
  inline void adoptTokens(::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>> disownTokens();

  // docComment@4: Text;  # ptr[2]
  inline bool hasDocComment();
  inline  ::capnp::Text::Builder getDocComment();
  inline void setDocComment( ::capnp::Text::Reader other);
  inline  ::capnp::Text::Builder initDocComment(unsigned int size);
  inline void adoptDocComment(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDocComment();

  // startByte@5: UInt32;  # bits[32, 64)
  inline  ::uint32_t getStartByte();
  inline void setStartByte( ::uint32_t value);

  // endByte@6: UInt32;  # bits[64, 96)
  inline  ::uint32_t getEndByte();
  inline void setEndByte( ::uint32_t value);
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Statement::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Statement::Builder builder) {
  return ::capnp::_::structString<Statement>(builder._builder.asReader());
}

class Statement::Block::Reader {
public:
  typedef Block Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline Which which() const;

  // none@2: Void;  # (none), union tag = 0
  inline  ::capnp::Void getNone() const;

  // statements@3: List(.Statement);  # ptr[1], union tag = 1
  inline bool hasStatements() const;
  inline  ::capnp::List< ::capnp::compiler::Statement>::Reader getStatements() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Statement::Block::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(Statement::Block::Reader reader) {
  return ::capnp::_::unionString<Statement::Block>(reader._reader);
}



class Statement::Block::Builder {
public:
  typedef Block Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline Which which();

  // none@2: Void;  # (none), union tag = 0
  inline  ::capnp::Void getNone();
  inline void setNone( ::capnp::Void value);

  // statements@3: List(.Statement);  # ptr[1], union tag = 1
  inline bool hasStatements();
  inline  ::capnp::List< ::capnp::compiler::Statement>::Builder getStatements();
  inline void setStatements( ::capnp::List< ::capnp::compiler::Statement>::Reader other);
  inline  ::capnp::List< ::capnp::compiler::Statement>::Builder initStatements(unsigned int size);
  inline void adoptStatements(::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>> disownStatements();
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(Statement::Block::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(Statement::Block::Builder builder) {
  return ::capnp::_::unionString<Statement::Block>(builder._builder.asReader());
}

class LexedTokens::Reader {
public:
  typedef LexedTokens Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline size_t totalSizeInWords() const {
    return _reader.totalSize() / ::capnp::WORDS;
  }

  // tokens@0: List(.Token);  # ptr[0]
  inline bool hasTokens() const;
  inline  ::capnp::List< ::capnp::compiler::Token>::Reader getTokens() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LexedTokens::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(LexedTokens::Reader reader) {
  return ::capnp::_::structString<LexedTokens>(reader._reader);
}



class LexedTokens::Builder {
public:
  typedef LexedTokens Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline size_t totalSizeInWords() { return asReader().totalSizeInWords(); }

  // tokens@0: List(.Token);  # ptr[0]
  inline bool hasTokens();
  inline  ::capnp::List< ::capnp::compiler::Token>::Builder getTokens();
  inline void setTokens( ::capnp::List< ::capnp::compiler::Token>::Reader other);
  inline  ::capnp::List< ::capnp::compiler::Token>::Builder initTokens(unsigned int size);
  inline void adoptTokens(::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>> disownTokens();
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LexedTokens::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(LexedTokens::Builder builder) {
  return ::capnp::_::structString<LexedTokens>(builder._builder.asReader());
}

class LexedStatements::Reader {
public:
  typedef LexedStatements Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline size_t totalSizeInWords() const {
    return _reader.totalSize() / ::capnp::WORDS;
  }

  // statements@0: List(.Statement);  # ptr[0]
  inline bool hasStatements() const;
  inline  ::capnp::List< ::capnp::compiler::Statement>::Reader getStatements() const;
private:
  ::capnp::_::StructReader _reader;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::_::PointerHelpers;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LexedStatements::Reader reader);
};

inline ::kj::StringTree KJ_STRINGIFY(LexedStatements::Reader reader) {
  return ::capnp::_::structString<LexedStatements>(reader._reader);
}



class LexedStatements::Builder {
public:
  typedef LexedStatements Builds;

  Builder() = default;
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline size_t totalSizeInWords() { return asReader().totalSizeInWords(); }

  // statements@0: List(.Statement);  # ptr[0]
  inline bool hasStatements();
  inline  ::capnp::List< ::capnp::compiler::Statement>::Builder getStatements();
  inline void setStatements( ::capnp::List< ::capnp::compiler::Statement>::Reader other);
  inline  ::capnp::List< ::capnp::compiler::Statement>::Builder initStatements(unsigned int size);
  inline void adoptStatements(::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>> disownStatements();
private:
  ::capnp::_::StructBuilder _builder;
  template <typename T, ::capnp::Kind k>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  friend ::kj::StringTree KJ_STRINGIFY(LexedStatements::Builder builder);
};

inline ::kj::StringTree KJ_STRINGIFY(LexedStatements::Builder builder) {
  return ::capnp::_::structString<LexedStatements>(builder._builder.asReader());
}


inline Token::Body::Reader Token::Reader::getBody() const {
  return Token::Body::Reader(_reader);
}

inline Token::Body::Builder Token::Builder::getBody() {
  return Token::Body::Builder(_builder);
}


// Token::startByte@8: UInt32;  # bits[32, 64)

inline  ::uint32_t Token::Reader::getStartByte() const {
  return _reader.getDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint32_t Token::Builder::getStartByte() {
  return _builder.getDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Token::Builder::setStartByte( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS, value);
}


// Token::endByte@9: UInt32;  # bits[128, 160)

inline  ::uint32_t Token::Reader::getEndByte() const {
  return _reader.getDataField< ::uint32_t>(
      4 * ::capnp::ELEMENTS);
}

inline  ::uint32_t Token::Builder::getEndByte() {
  return _builder.getDataField< ::uint32_t>(
      4 * ::capnp::ELEMENTS);
}
inline void Token::Builder::setEndByte( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      4 * ::capnp::ELEMENTS, value);
}


// Token::Body
inline Token::Body::Which Token::Body::Reader::which() const {
  return _reader.getDataField<Which>(0 * ::capnp::ELEMENTS);
}

inline Token::Body::Which Token::Body::Builder::which() {
  return _builder.getDataField<Which>(0 * ::capnp::ELEMENTS);
}


// Token::Body::identifier@1: Text;  # ptr[0], union tag = 0


inline bool Token::Body::Reader::hasIdentifier() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Token::Body::Builder::hasIdentifier() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Reader Token::Body::Reader::getIdentifier() const {
  KJ_IREQUIRE(which() == Body::IDENTIFIER,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Builder Token::Body::Builder::getIdentifier() {
  KJ_IREQUIRE(which() == Body::IDENTIFIER,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Token::Body::Builder::setIdentifier( ::capnp::Text::Reader value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::IDENTIFIER);
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::Text::Builder Token::Body::Builder::initIdentifier(unsigned int size) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::IDENTIFIER);
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Token::Body::Builder::adoptIdentifier(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::IDENTIFIER);
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::Text> Token::Body::Builder::disownIdentifier() {
  KJ_IREQUIRE(which() == Body::IDENTIFIER,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



// Token::Body::stringLiteral@2: Text;  # ptr[0], union tag = 1


inline bool Token::Body::Reader::hasStringLiteral() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Token::Body::Builder::hasStringLiteral() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Reader Token::Body::Reader::getStringLiteral() const {
  KJ_IREQUIRE(which() == Body::STRING_LITERAL,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Builder Token::Body::Builder::getStringLiteral() {
  KJ_IREQUIRE(which() == Body::STRING_LITERAL,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Token::Body::Builder::setStringLiteral( ::capnp::Text::Reader value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::STRING_LITERAL);
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::Text::Builder Token::Body::Builder::initStringLiteral(unsigned int size) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::STRING_LITERAL);
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Token::Body::Builder::adoptStringLiteral(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::STRING_LITERAL);
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::Text> Token::Body::Builder::disownStringLiteral() {
  KJ_IREQUIRE(which() == Body::STRING_LITERAL,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



// Token::Body::integerLiteral@3: UInt64;  # bits[64, 128), union tag = 2

inline  ::uint64_t Token::Body::Reader::getIntegerLiteral() const {
  KJ_IREQUIRE(which() == Body::INTEGER_LITERAL,
              "Must check which() before get()ing a union member.");
  return _reader.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint64_t Token::Body::Builder::getIntegerLiteral() {
  KJ_IREQUIRE(which() == Body::INTEGER_LITERAL,
              "Must check which() before get()ing a union member.");
  return _builder.getDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Token::Body::Builder::setIntegerLiteral( ::uint64_t value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::INTEGER_LITERAL);
  _builder.setDataField< ::uint64_t>(
      1 * ::capnp::ELEMENTS, value);
}


// Token::Body::floatLiteral@4: Float64;  # bits[64, 128), union tag = 3

inline double Token::Body::Reader::getFloatLiteral() const {
  KJ_IREQUIRE(which() == Body::FLOAT_LITERAL,
              "Must check which() before get()ing a union member.");
  return _reader.getDataField<double>(
      1 * ::capnp::ELEMENTS);
}

inline double Token::Body::Builder::getFloatLiteral() {
  KJ_IREQUIRE(which() == Body::FLOAT_LITERAL,
              "Must check which() before get()ing a union member.");
  return _builder.getDataField<double>(
      1 * ::capnp::ELEMENTS);
}
inline void Token::Body::Builder::setFloatLiteral(double value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::FLOAT_LITERAL);
  _builder.setDataField<double>(
      1 * ::capnp::ELEMENTS, value);
}


// Token::Body::operator@5: Text;  # ptr[0], union tag = 4


inline bool Token::Body::Reader::hasOperator() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Token::Body::Builder::hasOperator() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Reader Token::Body::Reader::getOperator() const {
  KJ_IREQUIRE(which() == Body::OPERATOR,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Builder Token::Body::Builder::getOperator() {
  KJ_IREQUIRE(which() == Body::OPERATOR,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Token::Body::Builder::setOperator( ::capnp::Text::Reader value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::OPERATOR);
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::Text::Builder Token::Body::Builder::initOperator(unsigned int size) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::OPERATOR);
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Token::Body::Builder::adoptOperator(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::OPERATOR);
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::Text> Token::Body::Builder::disownOperator() {
  KJ_IREQUIRE(which() == Body::OPERATOR,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



// Token::Body::parenthesizedList@6: List(List(.Token));  # ptr[0], union tag = 5


inline bool Token::Body::Reader::hasParenthesizedList() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Token::Body::Builder::hasParenthesizedList() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader Token::Body::Reader::getParenthesizedList() const {
  KJ_IREQUIRE(which() == Body::PARENTHESIZED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder Token::Body::Builder::getParenthesizedList() {
  KJ_IREQUIRE(which() == Body::PARENTHESIZED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Token::Body::Builder::setParenthesizedList( ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::PARENTHESIZED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline void Token::Body::Builder::setParenthesizedList(
    std::initializer_list< ::capnp::List< ::capnp::compiler::Token>::Reader> value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::PARENTHESIZED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder Token::Body::Builder::initParenthesizedList(unsigned int size) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::PARENTHESIZED_LIST);
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Token::Body::Builder::adoptParenthesizedList(
    ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>&& value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::PARENTHESIZED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>> Token::Body::Builder::disownParenthesizedList() {
  KJ_IREQUIRE(which() == Body::PARENTHESIZED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



// Token::Body::bracketedList@7: List(List(.Token));  # ptr[0], union tag = 6


inline bool Token::Body::Reader::hasBracketedList() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Token::Body::Builder::hasBracketedList() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader Token::Body::Reader::getBracketedList() const {
  KJ_IREQUIRE(which() == Body::BRACKETED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder Token::Body::Builder::getBracketedList() {
  KJ_IREQUIRE(which() == Body::BRACKETED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Token::Body::Builder::setBracketedList( ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Reader value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::BRACKETED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline void Token::Body::Builder::setBracketedList(
    std::initializer_list< ::capnp::List< ::capnp::compiler::Token>::Reader> value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::BRACKETED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>::Builder Token::Body::Builder::initBracketedList(unsigned int size) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::BRACKETED_LIST);
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Token::Body::Builder::adoptBracketedList(
    ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>&& value) {
  _builder.setDataField<Body::Which>(
      0 * ::capnp::ELEMENTS, Body::BRACKETED_LIST);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>> Token::Body::Builder::disownBracketedList() {
  KJ_IREQUIRE(which() == Body::BRACKETED_LIST,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::capnp::compiler::Token>>>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



inline Statement::Block::Reader Statement::Reader::getBlock() const {
  return Statement::Block::Reader(_reader);
}

inline Statement::Block::Builder Statement::Builder::getBlock() {
  return Statement::Block::Builder(_builder);
}


// Statement::tokens@0: List(.Token);  # ptr[0]


inline bool Statement::Reader::hasTokens() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool Statement::Builder::hasTokens() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Reader Statement::Reader::getTokens() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Builder Statement::Builder::getTokens() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void Statement::Builder::setTokens( ::capnp::List< ::capnp::compiler::Token>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Builder Statement::Builder::initTokens(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void Statement::Builder::adoptTokens(
    ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>> Statement::Builder::disownTokens() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::disown(
      _builder, 0 * ::capnp::POINTERS);
}



// Statement::docComment@4: Text;  # ptr[2]


inline bool Statement::Reader::hasDocComment() const {
  return !_reader.isPointerFieldNull(2 * ::capnp::POINTERS);
}

inline bool Statement::Builder::hasDocComment() {
  return !_builder.isPointerFieldNull(2 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Reader Statement::Reader::getDocComment() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _reader, 2 * ::capnp::POINTERS);
}

inline  ::capnp::Text::Builder Statement::Builder::getDocComment() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(
      _builder, 2 * ::capnp::POINTERS);
}

inline void Statement::Builder::setDocComment( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(
      _builder, 2 * ::capnp::POINTERS, value);
}

inline  ::capnp::Text::Builder Statement::Builder::initDocComment(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(
      _builder, 2 * ::capnp::POINTERS, size);
}


inline void Statement::Builder::adoptDocComment(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(
      _builder, 2 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::Text> Statement::Builder::disownDocComment() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(
      _builder, 2 * ::capnp::POINTERS);
}



// Statement::startByte@5: UInt32;  # bits[32, 64)

inline  ::uint32_t Statement::Reader::getStartByte() const {
  return _reader.getDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS);
}

inline  ::uint32_t Statement::Builder::getStartByte() {
  return _builder.getDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS);
}
inline void Statement::Builder::setStartByte( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      1 * ::capnp::ELEMENTS, value);
}


// Statement::endByte@6: UInt32;  # bits[64, 96)

inline  ::uint32_t Statement::Reader::getEndByte() const {
  return _reader.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}

inline  ::uint32_t Statement::Builder::getEndByte() {
  return _builder.getDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS);
}
inline void Statement::Builder::setEndByte( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      2 * ::capnp::ELEMENTS, value);
}


// Statement::Block
inline Statement::Block::Which Statement::Block::Reader::which() const {
  return _reader.getDataField<Which>(0 * ::capnp::ELEMENTS);
}

inline Statement::Block::Which Statement::Block::Builder::which() {
  return _builder.getDataField<Which>(0 * ::capnp::ELEMENTS);
}


// Statement::Block::none@2: Void;  # (none), union tag = 0

inline  ::capnp::Void Statement::Block::Reader::getNone() const {
  KJ_IREQUIRE(which() == Block::NONE,
              "Must check which() before get()ing a union member.");
  return _reader.getDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS);
}

inline  ::capnp::Void Statement::Block::Builder::getNone() {
  KJ_IREQUIRE(which() == Block::NONE,
              "Must check which() before get()ing a union member.");
  return _builder.getDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS);
}
inline void Statement::Block::Builder::setNone( ::capnp::Void value = ::capnp::Void::VOID) {
  _builder.setDataField<Block::Which>(
      0 * ::capnp::ELEMENTS, Block::NONE);
  _builder.setDataField< ::capnp::Void>(
      0 * ::capnp::ELEMENTS, value);
}


// Statement::Block::statements@3: List(.Statement);  # ptr[1], union tag = 1


inline bool Statement::Block::Reader::hasStatements() const {
  return !_reader.isPointerFieldNull(1 * ::capnp::POINTERS);
}

inline bool Statement::Block::Builder::hasStatements() {
  return !_builder.isPointerFieldNull(1 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Reader Statement::Block::Reader::getStatements() const {
  KJ_IREQUIRE(which() == Block::STATEMENTS,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::get(
      _reader, 1 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Builder Statement::Block::Builder::getStatements() {
  KJ_IREQUIRE(which() == Block::STATEMENTS,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::get(
      _builder, 1 * ::capnp::POINTERS);
}

inline void Statement::Block::Builder::setStatements( ::capnp::List< ::capnp::compiler::Statement>::Reader value) {
  _builder.setDataField<Block::Which>(
      0 * ::capnp::ELEMENTS, Block::STATEMENTS);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::set(
      _builder, 1 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Builder Statement::Block::Builder::initStatements(unsigned int size) {
  _builder.setDataField<Block::Which>(
      0 * ::capnp::ELEMENTS, Block::STATEMENTS);
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::init(
      _builder, 1 * ::capnp::POINTERS, size);
}


inline void Statement::Block::Builder::adoptStatements(
    ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>>&& value) {
  _builder.setDataField<Block::Which>(
      0 * ::capnp::ELEMENTS, Block::STATEMENTS);
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::adopt(
      _builder, 1 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>> Statement::Block::Builder::disownStatements() {
  KJ_IREQUIRE(which() == Block::STATEMENTS,
              "Must check which() before get()ing a union member.");
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::disown(
      _builder, 1 * ::capnp::POINTERS);
}




// LexedTokens::tokens@0: List(.Token);  # ptr[0]


inline bool LexedTokens::Reader::hasTokens() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool LexedTokens::Builder::hasTokens() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Reader LexedTokens::Reader::getTokens() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Builder LexedTokens::Builder::getTokens() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void LexedTokens::Builder::setTokens( ::capnp::List< ::capnp::compiler::Token>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::compiler::Token>::Builder LexedTokens::Builder::initTokens(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void LexedTokens::Builder::adoptTokens(
    ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Token>> LexedTokens::Builder::disownTokens() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Token>>::disown(
      _builder, 0 * ::capnp::POINTERS);
}




// LexedStatements::statements@0: List(.Statement);  # ptr[0]


inline bool LexedStatements::Reader::hasStatements() const {
  return !_reader.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline bool LexedStatements::Builder::hasStatements() {
  return !_builder.isPointerFieldNull(0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Reader LexedStatements::Reader::getStatements() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::get(
      _reader, 0 * ::capnp::POINTERS);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Builder LexedStatements::Builder::getStatements() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::get(
      _builder, 0 * ::capnp::POINTERS);
}

inline void LexedStatements::Builder::setStatements( ::capnp::List< ::capnp::compiler::Statement>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::set(
      _builder, 0 * ::capnp::POINTERS, value);
}

inline  ::capnp::List< ::capnp::compiler::Statement>::Builder LexedStatements::Builder::initStatements(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::init(
      _builder, 0 * ::capnp::POINTERS, size);
}


inline void LexedStatements::Builder::adoptStatements(
    ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::adopt(
      _builder, 0 * ::capnp::POINTERS, kj::mv(value));
}

inline ::capnp::Orphan< ::capnp::List< ::capnp::compiler::Statement>> LexedStatements::Builder::disownStatements() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::compiler::Statement>>::disown(
      _builder, 0 * ::capnp::POINTERS);
}




}  // namespace
}  // namespace
#endif  // CAPNP_INCLUDED_28e6ee28b20c751454a4280a478ff746