#ifndef ENCODER_1_1_H
#define ENCODER_1_1_H
class Encoded_message
{
private:
        std::string entered_message;
        void input_message();
        void key_message();
        void encoding();
        void sharing();
        void run_all();
public:
        Encoded_message();
        void start_encoder();
};
#endif // ENCODER_1_1_H
