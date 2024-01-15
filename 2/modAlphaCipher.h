/** 
 * @file modAlphaCipher.h
 * @author Маслинов А.А.
 * @version 1.0
 * @date 15.01.2024
 * @copyright ИБСТ ПГУ
 * @brief Заголовочный файл для модуля modAlphaCipher
 * @brief Описание класса modAlphaCipher
 */

#include <string>
using namespace std;

/**
* @brief Класс для шифрования и расшифрования текста с помощью алгоритма модифицированного алфавитного шифра
*
* @brief Данный класс предоставляет методы для шифрования и расшифрования текста с помощью алгоритма модифицированного алфавитного шифра.
* @brief Класс имеет встроенный алфавит, состоящий из заглавных букв русского алфавита.
* @brief Ключ шифрования задается при создании объекта класса.
*/
class modAlphaCipher {
private:
    int newkey; ///< Ключ шифрования
    string ValidText(const string& s);
public:
    /// Конструктор класса
    /// @param key - ключ шифрования
    modAlphaCipher(int key);
    
    /// Метод для шифрования текста
    /// @param open_text - открытый текст
    /// @return Зашифрованный текст
    string encrypt(const string& open_text);
    
    /// Метод для расшифрования текста
    /// @param cipher_text - зашифрованный текст
    /// @return Расшифрованный текст
    string decrypt(const string& cipher_text);
};
