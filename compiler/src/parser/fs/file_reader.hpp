#ifndef FILE_READER_HPP
#define FILE_READER_HPP

#include <cstdlib>
#include <string>

class FileReader
{
public:
    FileReader(const std::string &path);
    ~FileReader();

    bool open();
    void close();

    std::string readNextLine();
    bool isEof();

private:
    std::string _path;
    bool _isOpen;
    bool _isEof;
    FILE* _file;
}

#endif //FILE_READER_HPP