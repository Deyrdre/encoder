#include <string>
#include <iostream>
#include <time.h>
#include <vector>

class Encoded_message
{
private:
    std::string entered_message; // Переменная для хранения вводимого сообщения.
    void input_message() //Функция ввода исходного сообщения для кодирования. Сохраняет вводимое сообщение в виде стринга.
        {
            std::cout << "Enter message:" << std::endl;
            std::getline(std::cin, entered_message); // испоьзуем гетлайн для записи в строку.
        }

    std::vector <int> massive_key; //обьявлем массив элементов ИНТ для хранения ключа c длиной равной длине входящего сообщения
    std::string string_key; //добавление переменной для хранения ключа для передачи на декодер (стринг так как нужны пробелы)
    void key_message() // Генерация случайного ключа и сохранения его в виде массива интов.
        {
            srand(time(NULL)); // запускает рандомизацию от системного времени
            for (unsigned int i = 1; i <= entered_message.length(); ++i) // в цикле, генерируем случайный элемент ключа и присваеваем его на позицию массива, начиная с первого элемента, пока не достигнем длины входящего сообщения
                string_key += ((rand() %100 + 1) + " "); //формирования стринга с ключем для вывода
                massive_key.push_back(rand() %100 + 1); //идет работа с динамическим массивом
        }
    std::string final_message; //обьявляем массив в котором будем хранить закодированное сообщение
    void encoding() // Получение закодированного сообщения, путем преобразования АСКИ кода входящего сообщение поэлементно с ключем.
        {
            for (unsigned int i = 1; i <= entered_message.length(); ++i)
                final_message += ((static_cast<int> (entered_message[i - 1])) * (massive_key[i-1]) + " ");
        }
    void sharing() // Функция передечи (в первом исполнении выводв  окно консоли) закодированного сообщения и ключа.
        {
            std::cout << final_message << std::endl;
            std::cout << string_key << std::endl;
        }
    void run_all()
        {
            input_message();
            key_message();
            encoding();
            sharing();
        }
public:
    Encoded_message()
        {
        entered_message.clear();
        }
    void start()
        {
        run_all();
        }

};
