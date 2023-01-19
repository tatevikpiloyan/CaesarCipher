#include <iostream>
#include "caesarCipher.h"

int main()
{
    std::string sentence = "The quick brown Fox jumps over the lazy Dog!";
    CaesarCipher code;
    std::cout << code.encode(sentence, 3) << std::endl;
    std::cout << code.decode(sentence, 3) << std::endl;

}