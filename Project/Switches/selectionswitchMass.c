#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */
                                

double selectionswitchMass(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Грамм;\n"
           "2 - Килограмм;\n"
           "3 - Центнер;\n"
           "4 - Тонна;\n"
           "5 - Карат;\n"
           "6 - Стоун;\n"
           "7 - Фунт;\n"
           "8 - Унция;\n"
           "9 - Драхма;\n"
           "10 - Гран;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice > 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }
    
    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Грамм;\n"
           "2 - Килограмм;\n"
           "3 - Центнер;\n"
           "4 - Тонна;\n"
           "5 - Карат;\n"
           "6 - Стоун;\n"
           "7 - Фунт;\n"
           "8 - Унция;\n"
           "9 - Драхма;\n"
           "10 - Гран;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice > 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

       key.id = key.input_choice * 100 + key.output_choice;
		
    switch(key.id) {
		//Грамм
        case 102:
            key.gate = Grams_TO_Kilograms(MEASUREMENT);
            break;
        case 103:
            key.gate = Grams_TO_Quintals(MEASUREMENT);
            break;    
        case 104:
            key.gate = Grams_TO_Tonnes(MEASUREMENT);
            break; 
        case 105:
            key.gate = Grams_TO_Carats(MEASUREMENT);
            break;
        case 106:
            key.gate = Grams_TO_Stones(MEASUREMENT);
            break;
        case 107:
            key.gate = Grams_TO_Funts(MEASUREMENT);
            break;
        case 108:
            key.gate = Grams_TO_Ounces(MEASUREMENT);
            break;
        case 109:
            key.gate = Grams_TO_Drachmas(MEASUREMENT);
            break;  
        case 110:
            key.gate = Grams_TO_Grains(MEASUREMENT);
            break;
        //Килограмм
        case 201:
            key.gate = Kilograms_TO_Grams(MEASUREMENT);
            break;
        case 203:
            key.gate = Kilograms_TO_Quintals(MEASUREMENT);
            break;
        case 204:
            key.gate = Kilograms_TO_Tonnes(MEASUREMENT);
            break; 
        case 205:
            key.gate = Kilograms_TO_Carats(MEASUREMENT);
            break;
        case 206:
            key.gate = Kilograms_TO_Stones(MEASUREMENT);
            break;
        case 207:
            key.gate = Kilograms_TO_Funts(MEASUREMENT);
            break;
        case 208:
            key.gate = Kilograms_TO_Ounces(MEASUREMENT);
            break;
        case 209:
            key.gate = Kilograms_TO_Drachmas(MEASUREMENT);
            break;
        case 210:
            key.gate = Kilograms_TO_Grains(MEASUREMENT);
            break;
        //Центнер   
        case 302:
            key.gate = Quintals_TO_Kilograms(MEASUREMENT);
            break;
        case 301:
            key.gate = Quintals_TO_Grams(MEASUREMENT);
            break;
        case 304:
            key.gate = Quintals_TO_Tonnes(MEASUREMENT);
            break;
        case 305:
            key.gate = Quintals_TO_Carats(MEASUREMENT);
            break;
        case 306:
            key.gate = Quintals_TO_Stones(MEASUREMENT);
            break;
        case 307:
            key.gate = Quintals_TO_Funts(MEASUREMENT);
            break;
        case 308:
            key.gate = Quintals_TO_Ounces(MEASUREMENT);
            break;
        case 309:
            key.gate = Quintals_TO_Drachmas(MEASUREMENT);
            break;
        case 310:
            key.gate = Quintals_TO_Grains(MEASUREMENT);
            break;
        //Тонна  
        case 403:
            key.gate = Tonnes_TO_Quintals(MEASUREMENT);
            break;
        case 402:
            key.gate = Tonnes_TO_Kilograms(MEASUREMENT);
            break;
        case 401:
            key.gate = Tonnes_TO_Grams(MEASUREMENT);
            break;
        case 405:
            key.gate = Tonnes_TO_Carat(MEASUREMENT);
            break;
        case 406:
            key.gate = Tonnes_TO_Stone(MEASUREMENT);
            break;
        case 407:
            key.gate = Tonnes_TO_Funts(MEASUREMENT);
            break;
        case 408:
            key.gate = Tonnes_TO_Ounces(MEASUREMENT);
            break;
        case 409:
            key.gate = Tonnes_TO_Drachmas(MEASUREMENT);
            break;
        case 410:
            key.gate = Tonnes_TO_Grains(MEASUREMENT);
            break;
        //Карат 
        case 504:
            key.gate = Carats_TO_Tonnes(MEASUREMENT);
            break;
        case 503:
            key.gate = Carats_TO_Quintals(MEASUREMENT);
            break;
        case 502:
            key.gate = Carats_TO_Kilograms(MEASUREMENT);
            break;
        case 501:
            key.gate = Carats_TO_Grams(MEASUREMENT);
            break;
        case 506:
            key.gate = Carats_TO_Stones(MEASUREMENT);
            break;
        case 507:
            key.gate = Carats_TO_Funts(MEASUREMENT);
            break;
        case 508:
            key.gate = Carats_TO_Ounces(MEASUREMENT);
            break;
        case 509:
            key.gate = Carats_TO_Drachmas(MEASUREMENT);
            break;
        case 510:
            key.gate = Carats_TO_Grains(MEASUREMENT);
            break;
        //Стоун  
        case 605:
            key.gate = Stones_TO_Carats(MEASUREMENT);
            break;
        case 604:
            key.gate = Stones_TO_Tonnes(MEASUREMENT);
            break;
        case 603:
            key.gate = Stones_TO_Quintals(MEASUREMENT);
            break;
        case 602:
            key.gate = Stones_TO_Kilograms(MEASUREMENT);
            break;
        case 601:
            key.gate = Stones_TO_Grams(MEASUREMENT);
            break;
        case 607:
            key.gate = Stones_TO_Funts(MEASUREMENT);
            break;
        case 608:
            key.gate = Stones_TO_Ounces(MEASUREMENT);
            break;
        case 609:
            key.gate = Stones_TO_Drachmas(MEASUREMENT);
            break;
        case 610:
            key.gate = Stones_TO_Grains(MEASUREMENT);
            break;
        //Фунт   
        case 706:
            key.gate = Funts_TO_Stones(MEASUREMENT);
            break;
        case 705:
            key.gate = Funts_TO_Carats(MEASUREMENT);
            break;
        case 704:
            key.gate = Funts_TO_Tonnes(MEASUREMENT);
            break;
        case 703:
            key.gate = Funts_TO_Quintals(MEASUREMENT);
            break;
        case 702:
            key.gate = Funts_TO_Kilograms(MEASUREMENT);
            break;
        case 701:
            key.gate = Funts_TO_Grams(MEASUREMENT);
            break;
        case 708:
            key.gate = Funts_TO_Ounces(MEASUREMENT);
            break;
        case 709:
            key.gate = Funts_TO_Drachmas(MEASUREMENT);
            break;
        case 710:
            key.gate = Funts_TO_Grains(MEASUREMENT);
            break;
        //Унция    
        case 807:
            key.gate = Ounces_TO_Funts(MEASUREMENT);
            break;
        case 806:
            key.gate = Ounces_TO_Stones(MEASUREMENT);
            break;
        case 805:
            key.gate = Ounces_TO_Carats(MEASUREMENT);
            break;
        case 804:
            key.gate = Ounces_TO_Tonnes(MEASUREMENT);
            break;
        case 803:
            key.gate = Ounces_TO_Quintals(MEASUREMENT);
            break;
        case 802:
            key.gate = Ounces_TO_Kilograms(MEASUREMENT);
            break;
        case 801:
            key.gate = Ounces_TO_Grams(MEASUREMENT);
            break;
        case 809:
            key.gate = Ounces_TO_Drachmas(MEASUREMENT);
            break;
        case 810:
            key.gate = Ounces_TO_Grains(MEASUREMENT);
            break;
        //Драхма    
        case 908:
            key.gate = Drachmas_TO_Ounces(MEASUREMENT);
            break;
        case 907:
            key.gate = Drachmas_TO_Funts(MEASUREMENT);
            break;
        case 906:
            key.gate = Drachmas_TO_Stones(MEASUREMENT);
            break;
        case 905:
            key.gate = Drachmas_TO_Carats(MEASUREMENT);
            break;
        case 904:
            key.gate = Drachmas_TO_Tonnes(MEASUREMENT);
            break;
        case 903:
            key.gate = Drachmas_TO_Quintals(MEASUREMENT);
            break;
        case 902:
            key.gate = Drachmas_TO_Kilograms(MEASUREMENT);
            break;
        case 901:
            key.gate = Drachmas_TO_Grams(MEASUREMENT);
            break;
        case 910:
            key.gate = Drachmas_TO_Grains(MEASUREMENT);
            break;
        //Гран   
        case 1009:
            key.gate = Grains_TO_Drachma(MEASUREMENT);
            break;
        case 1008:
            key.gate = Grains_TO_Ounce(MEASUREMENT);
            break;
        case 1007:
            key.gate = Grains_TO_Funts(MEASUREMENT);
            break;
        case 1006:
            key.gate = Grains_TO_Stones(MEASUREMENT);
            break;
        case 1005:
            key.gate = Grains_TO_Carats(MEASUREMENT);
            break;
        case 1004:
            key.gate = Grains_TO_Tonnes(MEASUREMENT);
            break;
        case 1003:
            key.gate = Grains_TO_Quintals(MEASUREMENT);
            break;
        case 1002:
            key.gate = Grains_TO_Kilograms(MEASUREMENT);
            break;
        case 1001:
            key.gate = Grains_TO_Grams(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}                                                                                                                                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                                                                       
