#ifndef ENCODER11_H
#define ENCODER11_H
class Encoded_message
{
    private:
            std::string entered_message; // Переменная для хранения вводимого сообщения.
            std::vector <int> massive_key; //обьявлем массив элементов ИНТ для хранения ключа c длиной равной длине входящего сообщения
            std::string string_key; //добавление переменной для хранения ключа для передачи на декодер (стринг так как нужны пробелы)
            std::string final_message; //обьявляем массив в котором будем хранить закодированное сообщение
            void input_message();
            void key_message();
            void encoding();
            void sharing();
            void run_all();
    public:
            Encoded_message();
            void start();
};
#endif // ENCODER11_H
