#ifndef INTEGERLITERAL_HPP
#define INTEGERLITERAL_HPP

#include "Expression.hpp"
#include "Token.hpp"
#include <string>

using namespace std;

// Expressions
class IntegerLiteral : public Expression {
  public:
    unique_ptr<Token> m_token; // the token.IDENT token
    int64_t m_value;

    string token_literal();
    string to_string();

  public:
    IntegerLiteral(Token &token) : m_token(new Token(token)){};
    IntegerLiteral(Token &token, int64_t value)
        : m_token(new Token(token)), m_value(value){};
};

#endif /* INTEGERLITERAL_HPP */
