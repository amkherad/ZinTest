#include <lexer.hpp>
#include <file_reader.hpp>

Lexer::Lexer(std::shared_ptr<FileReader> fileReader)
{
    _fileReader = fileReader;
}

Lexer::~Lexer()
{
}