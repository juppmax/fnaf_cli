/*      This code is written by Jannis Ahrends
        email: ahrendsjannis@gmail.com
*/

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h> // for basic windows functions like keyboard input
#include <conio.h> // For _kbhit() and _getch()
#include <algorithm> // For std::equal and std::copy
#include <thread>

//game libaries
#include "data/game/functions.h"
#include "data/game/doors.h"
#include "data/game/cam.h"

void read_config(std::string& user_input, std::string& user_name) {
    std::ifstream read_user_config("user/config.cfg");
    if (!read_user_config) {
        std::system("mkdir user");
        clear();

        new_player_login();

        std::cin >> user_input;
        user_name = user_input;

        std::ofstream write_user_config("user/config.cfg", std::ios::out);
        write_user_config << user_name << std::endl;
        write_user_config.close();

        clear();
        std::cout << "Welcome " << user_name << std::endl;
        Sleep(2000);
    } else {
        read_user_config >> user_name;
    }
    read_user_config.close();
}


int main() {
    std::string user_input;
    std::string user_name;
    
    /*  0 = left door
        1 = left door animatronic
        2 = right door
        3 = right door animatronic
        4 = is cam active
        5 = which cam is active
    */
    char state[6] = {'0', '0', '0', '0', '0', '0'};
    char previous_state[6] = {'0', '0', '0', '0', '0'};
    /*  for bonnie and chica:
        0 = stage
        1 = main hall 
        2 = hallway 
        3 = door 
    */
    char bonnie_state[4] = {'1', '0', '0', '0'};
    char chica_state[4] = {'1', '0', '0', '0'};
    /*  for foxie 
        0 = his state, it ranges from 0 (standard) to 3 (left his place in a few seconds at your door!)
    */
    char foxie_state[1] = {'0'};
    
    read_config(user_input, user_name);

    // Start main menu and play music
    start_menu();
    
    while (true) {
        // Check if a key has been pressed
        if (_kbhit()) {
            char ch = _getch(); // Get the key pressed

            if (ch == 'd') {
                break;
            } else if (ch == 27) { // ESC key
                exit(0);
            } else if (ch == 'e') {
                std::remove("user/config.cfg");
            }
        }
    }

    // Start the actual game
    büro_level_0();
    while (true) {
        // Input handling
        if (_kbhit()) {
            char ch = _getch();

            if (ch == 'a') {
                if (state[0] == '0'){
                    state[0] = '1';
                }else {
                    state[0] = '0';
                }
            } else if (ch == 'd') {
                if (state[2] == '0'){
                    state[2] = '1';
                }else {
                    state[2] = '0';
                }
            } else if (ch == 'w') {
                if (state[4] == '0'){
                    state[4] = '1';
                }else {
                    state[4] = '0';
                }
            } else if (ch == '0') {
                    state[5] = '0';
            } else if (ch == '1') {
                    state[5] = '1';
            } else if (ch == '2') {
                    state[5] = '2';
            } else if (ch == '3') {
                    state[5] = '3';
            } else if (ch == '4') {
                    state[5] = '4';
            } else if (ch == '5') {
                    state[5] = '5';
            } else if (ch == 27 || ch == 'q') { // 27 is ESC key, this is to quit the game
                exit(0);
            }
        }

        // Check for state changes
        if (!std::equal(std::begin(previous_state), std::end(previous_state), std::begin(state))) {
            if (state[4] == '0'){
                if (state[0] == '0' && state[1] == '0' && state[2] == '0' && state[3] == '0') {
                    büro_level_0();
                } else if (state[0] == '1' && state[1] == '0' && state[2] == '0' && state[3] == '0') {
                    büro_level_l();
                } else if (state[0] == '0' && state[1] == '0' && state[2] == '1' && state[3] == '0') {
                    büro_level_r();
                } else if (state[0] == '1' && state[1] == '0' && state[2] == '1' && state[3] == '0') {
                    büro_level_both();
                }
            } else if (state[4] == '1'){
                if (state[5] == '0'){
                    cam_0();
                } else if (state[5] == '1'){
                    cam_1();
                } else if (state[5] == '2'){
                    cam_2();
                } else if (state[5] == '3'){
                    cam_3_stage1();
                }else if (state[5] == '4'){
                    cam_4();
                } else if (state[5] == '5'){
                    cam_5();
                } else{
                    cam_0();
                }
                state[5] = '0';                      
            }
                
            // Update previous state
            std::copy(std::begin(state), std::end(state), std::begin(previous_state));
        }
    }
    return 0;
}
