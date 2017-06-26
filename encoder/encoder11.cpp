#include <string>
#include <iostream>
#include <time.h>
#include <vector>
#include <encoder11.h>


    void Encoded_message::input_message() //Функция ввода исходного сообщения для кодирования. Сохраняет вводимое сообщение в виде стринга.
        {
            std::cout << "Enter message:" << std::endl;
            std::getline(std::cin, entered_message); // испоьзуем гетлайн для записи в строку.
        }

    void Encoded_message::key_message() // Генерация случайного ключа и сохранения его в виде массива интов.
        {
            srand(time(NULL)); // запускает рандомизацию от системного времени
            for (unsigned int i = 1; i <= entered_message.length(); ++i) // в цикле, генерируем случайный элемент ключа и присваеваем его на позицию массива, начиная с первого элемента, пока не достигнем длины входящего сообщения
            {
                int rand_value = (rand() %100 + 1);//вводим дополнительную переменную для записи одного и того же сгенерированного числа в стринг и массив ключа
                string_key += std::to_string(rand_value) + " "; //формирования стринга с ключем для вывода
                massive_key.push_back(rand_value); //идет работа с динамическим массивом
                //std::cout << massive_key[i-1] << " ";

            }
         }
    void Encoded_message::encoding() // Получение закодированного сообщения, путем преобразования АСКИ кода входящего сообщение поэлементно с ключем.
        {
            for (unsigned int i = 1; i <= entered_message.length(); ++i)
                final_message += std::to_string((static_cast<int> (entered_message[i - 1]) * (massive_key[i-1]))) + " ";
        }
    void Encoded_message::sharing() // Функция передечи (в первом исполнении выводв  окно консоли) закодированного сообщения и ключа.
        {
            std::cout << "Code of the message: " << final_message << std::endl;
            std::cout << "Code of the key: " <<string_key << std::endl;
        }
    void Encoded_message::run_all() //функция для вызова механизма кодирования из паблика
        {
            input_message();
            key_message();
            encoding();
            sharing();
        }

    Encoded_message::Encoded_message()
        {
        entered_message.clear();
        string_key.clear();
        final_message.clear();
        massive_key.clear();
        }
    void Encoded_message::start()
        {
        run_all();
        }


