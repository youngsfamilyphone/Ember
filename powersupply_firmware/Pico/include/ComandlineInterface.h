#ifndef COMANDLINEINTERFACE_H
#define COMANDLINEINTERFACE_H

#include <string>

class ComandLineInterface{
    private:
        static const int update_freq_us = 1000*10; 
        static int update_timer; 
        static std::string rx_data; 
        static int rx_data_ptr; 

        static void desifre_command(std::string command);

    public: 
        static void Init();
        static void Update();

};

#endif