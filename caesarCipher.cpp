#include <iostream>
#include "caesarCipher.h"

CaesarCipher::CaesarCipher() {}
CaesarCipher::~CaesarCipher() {}

std::string& CaesarCipher::encode(std::string& sentence, std::size_t shiftCount)
{
    int sentenceSize = sentence.size();
    for (int i = 0; i < sentenceSize; ++i)
    {
        int newLetterNumber = sentence[i] + shiftCount;
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            if (newLetterNumber > 'Z')
            {
                sentence[i] = newLetterNumber - ALPHABET_LENGTH;
            }
            else if (newLetterNumber < 'A')
            {
                sentence[i] = newLetterNumber + ALPHABET_LENGTH;
            }
            else
            {
                sentence[i] = newLetterNumber;
            }
        }
        else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            if (newLetterNumber > 'z')
            {
                sentence[i] = newLetterNumber - ALPHABET_LENGTH;
            }
            else if (newLetterNumber < 'a')
            {
                sentence[i] = newLetterNumber + ALPHABET_LENGTH;
            }
            else
            {
                sentence[i] = newLetterNumber;
            }
        }
    }
    return sentence;
}

std::string& CaesarCipher::decode(std::string& sentence, std::size_t shiftCount)
{
    return encode(sentence, -shiftCount);
}