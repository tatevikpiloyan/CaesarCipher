#ifndef CAESAR_CIPHER
#define CAESAR_CIPHER

class CaesarCipher
{
public:
    static const int ALPHABET_LENGTH = 26;

public:
    CaesarCipher();
    ~CaesarCipher();

public:
    std::string& encode(std::string&, std::size_t = 3);
    std::string& decode(std::string&, std::size_t = 3);
};

#endif // CAESAR_CIPHER