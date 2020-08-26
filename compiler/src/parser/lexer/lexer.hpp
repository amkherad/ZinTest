#ifndef LEXER_HPP
#define LEXER_HPP

#include<memory>

class FileReader;

struct LexerToken;

class Lexer
{
public:
    Lexer(std::shared_ptr<FileReader> fileReader);
    ~Lexer();


    LexerToken read();
    LexerToken next();


private:
    std::shared_ptr<FileReader> _fileReader;
}

#endif //LEXER_HPP