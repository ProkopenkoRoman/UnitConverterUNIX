#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchAmount(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Кубический километр;\n"
           "2 - Кубический метр;\n"
           "3 - Кубический дециметр;\n"
           "4 - Кубический сантиметр;\n"
           "5 - Кубический миллиметр;\n"
           "6 - Литр;\n"
           "7 - Миллилитр;\n"
           "8 - Галлон;\n"
           "9 - Баррель;\n"
           "10 - Кварта;\n"
           "11 - Пинта;\n"
           "12 - Жидкая унция; \n\t");
    //scanf("%d", &key.input_choice);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 12 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Кубический километр;\n"
           "2 - Кубический метр;\n"
           "3 - Кубический дециметр;\n"
           "4 - Кубический сантиметр;\n"
           "5 - Кубический миллиметр;\n"
           "6 - Литр;\n"
           "7 - Миллилитр;\n"
           "8 - Галлон;\n"
           "9 - Баррель;\n"
           "10 - Кварта;\n"
           "11 - Пинта;\n"
           "12 - Жидкая унция; \n\t");
    //scanf("%d", &key.output_choice);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 12 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

       key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
        // Кубический километр
        case 102:
            key.gate = squaredkilometers_TO_squaredmeters(MEASUREMENT);
            break;
        case 103:
            key.gate = squaredkilometers_TO_squareddecimeters(MEASUREMENT);
            break;
        case 104:
            key.gate = squaredkilometers_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 105:
            key.gate = squaredkilometers_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 106:
            key.gate = squaredkilometers_TO_liters(MEASUREMENT);
            break;
        case 107:
            key.gate = squaredkilometers_TO_mililiters(MEASUREMENT);
            break;
        case 108:
            key.gate = squaredkilometers_TO_gallons(MEASUREMENT);
            break;
        case 109:
            key.gate = squaredkilometers_TO_barrels(MEASUREMENT);
            break;   
        case 110:
            key.gate = squaredkilometers_TO_quarts(MEASUREMENT);
            break;
        case 111:
            key.gate = squaredkilometers_TO_pints(MEASUREMENT);
            break;
        case 112:
            key.gate = squaredkilometers_TO_flozs(MEASUREMENT);
            break;
        // кубические метры
        case 201:
            key.gate = squaredmeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 203:
            key.gate = squaredmeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 204:
            key.gate = squaredmeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 205:
            key.gate = squaredmeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 206:
            key.gate = squaredmeters_TO_liters(MEASUREMENT);
            break;
        case 207:
            key.gate = squaredmeters_TO_mililiters(MEASUREMENT);
            break;
        case 208:
            key.gate = squaredmeters_TO_gallons(MEASUREMENT);
            break;
        case 209:
            key.gate = squaredmeters_TO_barrels(MEASUREMENT);
            break;
        case 210:
            key.gate = squaredmeters_TO_quarts(MEASUREMENT);
            break;
        case 211:
            key.gate = squaredmeters_TO_pints(MEASUREMENT);
            break;
        case 212:
            key.gate = squaredmeters_TO_flozs(MEASUREMENT);
            break;
        // Кубический дециметр   
        case 302:
            key.gate = squareddecimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 301:
            key.gate = squareddecimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 304:
            key.gate = squareddecimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 305:
            key.gate = squareddecimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 306:
            key.gate = squareddecimeters_TO_liters(MEASUREMENT);
            break;
        case 307:
            key.gate = squareddecimeters_TO_mililiters(MEASUREMENT);
            break;
        case 308:
            key.gate = squareddecimeters_TO_gallons(MEASUREMENT);
            break;
        case 309:
            key.gate = squareddecimeters_TO_barrels(MEASUREMENT);
            break;
        case 310:
            key.gate = squareddecimeters_TO_pints(MEASUREMENT);
            break;
        case 311:
            key.gate = squareddecimeters_TO_quarts(MEASUREMENT);
            break;
        case 312:
            key.gate = squareddecimeters_TO_flozs(MEASUREMENT);
            break;
         // квадратный сантиметр   
        case 403:
            key.gate = squaredcentimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 402:
            key.gate = squaredcentimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 401:
            key.gate = squaredcentimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 405:
            key.gate = squaredcentimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 406:
            key.gate = squaredcentimeters_TO_liters(MEASUREMENT);
            break;
        case 407:
            key.gate = squaredcentimeters_TO_mililiters(MEASUREMENT);
            break;
        case 408:
            key.gate = squaredcentimeters_TO_gallons(MEASUREMENT);
            break;
        case 409:
            key.gate = squaredcentimeters_TO_barrels(MEASUREMENT);
            break;
        case 410:
            key.gate = squaredcentimeters_TO_quarts(MEASUREMENT);
            break;
        case 411:
            key.gate = squaredcentimeters_TO_pints(MEASUREMENT);
            break;
        case 412:
            key.gate = squaredcentimeters_TO_flozs(MEASUREMENT);
            break;
         // Кубический миллиметр   
        case 504:
            key.gate = squaredmillimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 503:
            key.gate = squaredmillimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 502:
            key.gate = squaredmillimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 501:
            key.gate = squaredmillimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 506:
            key.gate = squaredmillimeters_TO_liters(MEASUREMENT);
            break;
        case 507:
            key.gate = squaredmillimeters_TO_mililiters(MEASUREMENT);
            break;
        case 508:
            key.gate = squaredmillimeters_TO_gallons(MEASUREMENT);
            break;
        case 509:
            key.gate = squaredmillimeters_TO_barrels(MEASUREMENT); 
            break;
        case 510:
            key.gate = squaredmillimeters_TO_quarts(MEASUREMENT);
            break;
        case 511:
            key.gate = squaredmillimeters_TO_pints(MEASUREMENT);
            break;
        case 512:
            key.gate = squaredmillimeters_TO_flozs(MEASUREMENT);
            break;
         // Литры   
        case 605:
            key.gate = liters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 604:
            key.gate = liters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 603:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 602:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 601:
            key.gate = liters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 607:
            key.gate = liters_TO_mililiters(MEASUREMENT);
            break;
        case 608:
            key.gate = liters_TO_gallons(MEASUREMENT);
            break;
        case 609:
            key.gate = liters_TO_barrels(MEASUREMENT);
            break;
        case 610:
            key.gate = liters_TO_quarts(MEASUREMENT);
            break;
        case 611:
            key.gate = liters_TO_pints(MEASUREMENT);
            break;
        case 612:
            key.gate = liters_TO_flozs(MEASUREMENT);
            break;
         // Миллилитр   
        case 706:
            key.gate = mililiters_TO_liters(MEASUREMENT);
            break;
        case 705:
            key.gate = mililiters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 704:
            key.gate = mililiters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 703:
            key.gate = mililiters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 702:
            key.gate = mililiters_TO_squaredmeters(MEASUREMENT);
            break;
        case 701:
            key.gate = mililiters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 708:
            key.gate = mililiters_TO_gallons(MEASUREMENT);
            break;
        case 709:
            key.gate = mililiters_TO_barrels(MEASUREMENT);
            break;
        case 710:
            key.gate = mililiters_TO_quarts(MEASUREMENT);
            break;
        case 711:
            key.gate = mililiters_TO_pints(MEASUREMENT);
            break;
        case 712:
            key.gate = mililiters_TO_flozs(MEASUREMENT);
            break;
        // Галлон    
        case 807:
            key.gate = gallons_TO_mililiters(MEASUREMENT);
            break;
        case 806:
            key.gate = gallons_TO_liters(MEASUREMENT);
            break;
        case 805:
            key.gate = gallons_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 804:
            key.gate = gallons_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 803:
            key.gate = gallons_TO_squareddecimeters(MEASUREMENT);
            break;
        case 802:
            key.gate = gallons_TO_squaredmeters(MEASUREMENT);  
            break;
        case 801:
            key.gate = gallons_TO_squaredkilometers(MEASUREMENT);
            break;
        case 809:
            key.gate = gallons_TO_barrels(MEASUREMENT);
            break;
        case 810:
            key.gate = gallons_TO_quarts(MEASUREMENT);
            break;
        case 811:
            key.gate = gallons_TO_pints(MEASUREMENT);
            break;
        case 812:
            key.gate = gallons_TO_flozs(MEASUREMENT);
            break;
        
        //Баррель
        case 908:
            key.gate = barrels_TO_gallons(MEASUREMENT);
            break;
        case 907:
            key.gate = barrels_TO_mililiters(MEASUREMENT);
            break;
        case 906:
            key.gate = barrels_TO_liters(MEASUREMENT);
            break;
        case 905:
            key.gate = barrels_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 904:
            key.gate = barrels_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 903:
            key.gate = barrels_TO_squareddecimeters(MEASUREMENT);
            break;
        case 902:
            key.gate = barrels_TO_squaredmeters(MEASUREMENT);
            break;
        case 901:
            key.gate = barrels_TO_squaredkilometers(MEASUREMENT);
            break;
        case 910:
            key.gate =  barrels_TO_quarts(MEASUREMENT);
            break;
        case 911:
            key.gate =  barrels_TO_pints(MEASUREMENT);
            break;
        case 912:
            key.gate =  barrels_TO_floz(MEASUREMENT);
            break;
         // Кварта    
        case 1009:
            key.gate =  quarts_TO_barrels(MEASUREMENT);
            break;
        case 1008:
            key.gate =  quarts_TO_gallons(MEASUREMENT);
            break;
        case 1007:
            key.gate =  quarts_TO_mililiters(MEASUREMENT);
            break;
        case 1006:
            key.gate =  quarts_TO_liters(MEASUREMENT);
            break;
        case 1005:
            key.gate =  quarts_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1004:
            key.gate =  quarts_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1003:
            key.gate =  quarts_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1002:
            key.gate =  quarts_TO_squaredmeters(MEASUREMENT);
            break;
        case 1001:
            key.gate =  quarts_TO_squaredkilometers(MEASUREMENT);
            break;
        case 1011:
            key.gate =  quarts_TO_pints(MEASUREMENT);
            break;
        case 1012:
            key.gate =  quarts_TO_flozs(MEASUREMENT);
            break;
        // Пинта   
        case 1110:
            key.gate =  pints_TO_quarts(MEASUREMENT);
            break;
        case 1109:
            key.gate =  pints_TO_barrels(MEASUREMENT);
            break;
        case 1108:
            key.gate =  pints_TO_gallons(MEASUREMENT);
            break;
        case 1107:
            key.gate =  pints_TO_mililiters(MEASUREMENT);
            break;
        case 1106:
            key.gate =  pints_TO_liters(MEASUREMENT);
            break;
        case 1105:
            key.gate =  pints_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1104:
            key.gate =  pints_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1103:
            key.gate =  pints_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1102:
            key.gate =  pints_TO_squaredmeters(MEASUREMENT);
            break;
        case 1101:
            key.gate =  pints_TO_squaredkilometers(MEASUREMENT);
            break;
        case 1112:
            key.gate =  pints_TO_flozs(MEASUREMENT);
            break;   
         // Жидкая унция    
        case 1211:
            key.gate =  flozs_TO_pints(MEASUREMENT);
            break;
        case 1210:
            key.gate =  flozs_TO_quarts(MEASUREMENT);
            break;
        case 1209:
            key.gate =  flozs_TO_barrels(MEASUREMENT);
            break;
        case 1208:
            key.gate =  flozs_TO_gallons(MEASUREMENT);
            break;
        case 1207:
            key.gate =  flozs_TO_mililiters(MEASUREMENT);
            break;
        case 1206:
            key.gate =  flozs_TO_liters(MEASUREMENT);
            break;
        case 1205:
            key.gate =  flozs_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1204:
            key.gate =  flozs_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1203:
            key.gate =  flozs_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1202:
            key.gate =  flozs_TO_squaredmeters(MEASUREMENT);
            break;
        case 1201:
            key.gate =  flozs_TO_squaredkilometers(MEASUREMENT);
            break;                                                                                                                                                                            
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
