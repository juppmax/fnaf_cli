#include "doors.h"
#include "functions.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void new_player_login(){
    clear();
        cout << R"(
            ##############################
            #                            #
            #    welcome! pleas enter    #
            #          user name         #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            ##############################
        )" << endl;
}
void start_menu(){
    clear();
    cout << R"(
        ##############################
        #                            #
        #                      ##    #
        #  Fnaf cli           #00#   #
        #                      ##    #
        #                    ######  #                            
        #  press             # ## #  #
        #  d to start        # ## #  #
        #                    # ## #  #
        #                    # ## #  #
        #  press e             ##    #
        #  to reset            ##    #
        #                      ##    #
        # By: Jannis           ##    #
        ##############################
    )" << endl;
}
void death(){
    clear();
    cout << R"(
            ##############################
            #                            #
            #                            #
            #         YOU DIED           #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            #
            #    EXIT                    #
            #                            # 
            #                            #
            ##############################
        )" << endl;
}
void you_won(){
    clear();
    cout << R"(
            ##############################
            #                            #
            #                            #
            #          YOU won!          #
            #                            #
            #                            #
            #                            #
            #            :-)             #
            #                            #
            #                            #
            #                            #
            #                            #
            #                            # 
            #                            #
            ##############################
        )" << endl;
}
void büro_level_0(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   #    #
            #   #                   #    #
            #   #           #       #    #
            #   #     ###  #0#      #    #
            #   #     #&#   #       #    #
            #   #     #########     #    #
            #   #     #       #     #    #
            #   #     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_0_bonnie(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   #    #
            #00 #                   #    #
            #   #           #       #    #
            #   #     ###  #0#      #    #
            #   #     #&#   #       #    #
            #   #     #########     #    #
            #   #     #       #     #    #
            #   #     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_0_chica(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   #    #
            #   #                   # 00 #
            #   #           #       #    #
            #   #     ###  #0#      #    #
            #   #     #&#   #       #    #
            #   #     #########     #    #
            #   #     #       #     #    #
            #   #     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_0_both(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   #    #
            #00 #                   # 00 #
            #   #           #       #    #
            #   #     ###  #0#      #    #
            #   #     #&#   #       #    #
            #   #     #########     #    #
            #   #     #       #     #    #
            #   #     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_l(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #####                   #    #
            #####                   #    #
            #####           #       #    #
            #####     ###  #0#      #    #
            #####     #&#   #       #    #
            #####     #########     #    #
            #####     #       #     #    #
            #####     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_l_chica(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #####                   #    #
            #####                   # 00 #
            #####           #       #    #
            #####     ###  #0#      #    #
            #####     #&#   #       #    #
            #####     #########     #    #
            #####     #       #     #    #
            #####     #       #     #    #
            ##############################
        )" << endl;
}
void büro_level_r(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   ######
            #   #                   ######
            #   #           #       ######
            #   #     ###  #0#      ######
            #   #     #&#   #       ######
            #   #     #########     ######
            #   #     #       #     ######
            #   #     #       #     ######
            ##############################
        )" << endl;
}
void büro_level_r_bonnie(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #   #                   ######
            #00 #                   ######
            #   #           #       ######
            #   #     ###  #0#      ######
            #   #     #&#   #       ######
            #   #     #########     ######
            #   #     #       #     ######
            #   #     #       #     ######
            ##############################
        )" << endl;
}
void büro_level_both(){
    clear();
    cout << R"(
            ##############################
            #             #              #
            #             #              #
            #            #%#             #
            #             #              #
            #####                   ######
            #####                   ######
            #####                   ######
            #####           #       ######
            #####     ###  #0#      ######
            #####     #&#   #       ######
            #####     #########     ######
            #####     #       #     ######
            #####     #       #     ######
            ##############################
        )" << endl;
}