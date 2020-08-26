#include <file_reader.hpp>
#include <print_helpers.hpp>
#include <cstdio>
#include <string>

FileReader::FileReader(const std::string &path)
{
    _path = path;
    _isOpen = false;
    _isEof = false;
}

FileReader::~FileReader()
{
    if (_isOpen)
    {
        close();
    }
}

bool FileReader::open()
{
    if (_isOpen)
    {
        close();
    }

    const char *filePath = _path.c_str();

    _file = fopen(filePath, "r");

    if (_file == NULL)
    {
        fprintf(stderr, "Failed to open source file: %s\n", filePath);
        return false;
    }

    return true;
}

void FileReader::close()
{
    if (!_isOpen)
    {
        return;
    }

    fclose(_file);
}

std::string FileReader::readNextLine()
{
    if (_isEof)
    {
        return std::string();
    }

    char *line = NULL;
    size_t len = 0;

    ssize_t charsRead = getline(&line, &len, _file);

    if (charsRead == -1)
    {
        _isEof = true;
        return std::string();
    }

    std::string result = std::string(line);

    if (line)
    {
        free(line);
    }

    return result;
}

bool FileReader::isEof()
{
    if (!_isOpen) {
        print_error("isEof() called on a closed FileReader.");
    }

    return _isEof;
}