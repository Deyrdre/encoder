#ifndef ENCODER_1_1_H
#define ENCODER_1_1_H
class Encoded_message
{
    private:
            void input_message();
            //std::vector <int> massive_key;
            std::string string_key;
            void key_message();
            std::string final_message;
            void encoding();
            void sharing();
            void run_all();
    public:
            Encoded_message();
            void start();
};
#endif // ENCODER_1_1_H
