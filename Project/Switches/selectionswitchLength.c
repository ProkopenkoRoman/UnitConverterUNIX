#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Ñèìâîë '../' - escape-ñèìâîë - èñïîëüçóåòñÿ äëÿ ïåðåõîäà íà îäèí óðîâåíü âûøå;
                                Ýòîò ñèìâîë èñïîëüçóåòñÿ ñòîëüêî ðàç, íà ñêîëüêî óðîâíåé íóæíî ïîäíÿòüñÿ; */


double selectionswitchLength(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
          "1 - Миллиметр;\n"
           "2 - Метр;\n"
           "3 - Сантиметр;\n"
           "4 - Дециметр;\n"
           "5 - Километр;\n"
           "6 - Сажень;\n"
           "7 - Аршин;\n"
           "8 - Миля;\n"
           "9 - Ярд;\n"
           "10 - Фут;\n "
           "11 - Микрометр;\n"
           "12 - Нанометр; \n"
           "13 - Ангстрем;\n"
           "14 - Морская миля;\n \t");
    //scanf("%d", &key.input_choice);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 14 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

   printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
          "1 - Миллиметр;\n"
           "2 - Метр;\n"
           "3 - Сантиметр;\n"
           "4 - Дециметр;\n"
           "5 - Километр;\n"
           "6 - Сажень;\n"
           "7 - Аршин;\n"
           "8 - Миля;\n"
           "9 - Ярд;\n"
           "10 - Фут;\n "
           "11 - Микрометр;\n"
           "12 - Нанометр; \n"
           "13 - Ангстрем;\n"
           "14 - Морская миля;\n \t");
    //scanf("%d", &key.output_choice);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 14 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

  
		key.id = key.input_choice * 100 + key.output_choice;
	//printf("ID равно %d", key.id);
    switch(key.id) {
        //Ìèëëèìåòð
        case 102:
            key.gate = millimeters_TO_meters(MEASUREMENT);
            break;
        case 103:
            key.gate = millimeters_TO_centimeters(MEASUREMENT);
            break;
        case 104:
            key.gate = millimeters_TO_decimeters(MEASUREMENT);
            break;
        case 105:
            key.gate = millimeters_TO_kilometers(MEASUREMENT);
            break;
        case 106:
            key.gate = millimeters_TO_fathoms(MEASUREMENT);
            break;
        case 107:
            key.gate = millimeters_TO_arshins(MEASUREMENT);
            break;
        case 108:
            key.gate = millimeters_TO_miles(MEASUREMENT);
            break;
        case 109:
            key.gate = millimeters_TO_yards(MEASUREMENT);
            break;
        case 1010:
            key.gate = millimeters_TO_foots(MEASUREMENT);
            break;
        case 111:
            key.gate = millimeters_TO_micrometers(MEASUREMENT);
            break;
        case 112:
            key.gate = millimeters_TO_nanometers(MEASUREMENT);
            break;
        case 113:
            key.gate = millimeters_TO_angstroms(MEASUREMENT);
            break;
        case 114:
            key.gate = millimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ìåòð
        case 201:
            key.gate = meters_TO_millimeters(MEASUREMENT);
            break;
        case 203:
            key.gate = meters_TO_centimeters(MEASUREMENT);
            break;
        case 204:
            key.gate = meters_TO_decimeters(MEASUREMENT);
            break;
        case 205:
            key.gate = meters_TO_kilometers(MEASUREMENT);
            break;
        case 206:
            key.gate = meters_TO_fathoms(MEASUREMENT);
            break;
        case 207:
            key.gate = meters_TO_arshins(MEASUREMENT);
            break;
        case 208:
            key.gate = meters_TO_miles(MEASUREMENT);
            break;
        case 209:
            key.gate = meters_TO_yards(MEASUREMENT);
            break;
        case 210:
            key.gate = meters_TO_foots(MEASUREMENT);
            break;
        case 211:
            key.gate = meters_TO_micrometers(MEASUREMENT);
            break;
        case 212:
            key.gate = meters_TO_nanometers(MEASUREMENT);
            break;
        case 213:
            key.gate = meters_TO_angstroms(MEASUREMENT);
            break;
        case 214:
            key.gate = meters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ñàíòèìåòð
        case 302:
            key.gate = centimeters_TO_meters(MEASUREMENT);
            break;
        case 301:
            key.gate = centimeters_TO_millimeters(MEASUREMENT);
            break;
        case 304:
            key.gate = centimeters_TO_decimeters(MEASUREMENT);
            break;
        case 305:
            key.gate = centimeters_TO_kilometers(MEASUREMENT);
            break;
        case 306:
            key.gate = centimeters_TO_fathoms(MEASUREMENT);
            break;
        case 307:
            key.gate = centimeters_TO_arshins(MEASUREMENT);
            break;
        case 308:
            key.gate = centimeters_TO_miles(MEASUREMENT);
            break;
        case 309:
            key.gate = centimeters_TO_yards(MEASUREMENT);
            break;
        case 310:
            key.gate = centimeters_TO_foots(MEASUREMENT);
            break;
        case 311:
            key.gate = centimeters_TO_micrometers(MEASUREMENT);
            break;
        case 312:
            key.gate = centimeters_TO_nanometers(MEASUREMENT);
            break;
        case 313:
            key.gate = centimeters_TO_angstroms(MEASUREMENT);
            break;
        case 314:
            key.gate = centimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Äåöèìåòð
        case 403:
            key.gate = decimeters_TO_centimeters(MEASUREMENT);
            break;
        case 402:
            key.gate = decimeters_TO_meters(MEASUREMENT);
            break;
        case 401:
            key.gate = decimeters_TO_millimeters(MEASUREMENT);
            break;
        case 405:
            key.gate = decimeters_TO_kilometers(MEASUREMENT);
            break;
        case 406:
            key.gate = decimeters_TO_fathoms(MEASUREMENT);
            break;
        case 407:
            key.gate = decimeters_TO_arshins(MEASUREMENT);
            break;
        case 408:
            key.gate = decimeters_TO_miles(MEASUREMENT);
            break;
        case 409:
            key.gate = decimeters_TO_yards(MEASUREMENT);
            break;
        case 410:
            key.gate = decimeters_TO_foots(MEASUREMENT);
            break;
        case 411:
            key.gate = decimeters_TO_micrometers(MEASUREMENT);
            break;
        case 412:
            key.gate = decimeters_TO_nanometers(MEASUREMENT);
            break;
        case 413:
            key.gate = decimeters_TO_angstroms(MEASUREMENT);
            break;
        case 414:
            key.gate = decimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Êèëîìåòð
        case 504:
            key.gate = kilometers_TO_decimeters(MEASUREMENT);
            break;
        case 503:
            key.gate = kilometers_TO_centimeters(MEASUREMENT);
            break;
        case 502:
            key.gate = kilometers_TO_meters(MEASUREMENT);
            break;
        case 501:
            key.gate = kilometers_TO_millimeters(MEASUREMENT);
            break;
        case 506:
            key.gate = kilometers_TO_fathoms(MEASUREMENT);
            break;
        case 507:
            key.gate = kilometers_TO_arshins(MEASUREMENT);
            break;
        case 508:
            key.gate = kilometers_TO_miles(MEASUREMENT);
            break;
        case 509:
            key.gate = kilometers_TO_yards(MEASUREMENT);
            break;
        case 510:
            key.gate = kilometers_TO_foots(MEASUREMENT);
            break;
        case 511:
            key.gate = kilometers_TO_micrometers(MEASUREMENT);
            break;
        case 512:
            key.gate = kilometers_TO_nanometers(MEASUREMENT);
            break;
        case 513:
            key.gate = kilometers_TO_angstroms(MEASUREMENT);
            break;
        case 514:
            key.gate = kilometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ñàæåíü
        case 605:
            key.gate = fathoms_TO_kilometers(MEASUREMENT);
            break;
        case 604:
            key.gate = fathoms_TO_decimeters(MEASUREMENT);
            break;
        case 603:
            key.gate = fathoms_TO_centimeters(MEASUREMENT);
            break;
        case 602:
            key.gate = fathoms_TO_meters(MEASUREMENT);
            break;
        case 601:
            key.gate = fathoms_TO_millimeters(MEASUREMENT);
            break;
        case 607:
            key.gate = fathoms_TO_arshins(MEASUREMENT);
            break;
        case 608:
            key.gate = fathoms_TO_miles(MEASUREMENT);
            break;
        case 609:
            key.gate = fathoms_TO_yards(MEASUREMENT);
            break;
        case 610:
            key.gate = fathoms_TO_foots(MEASUREMENT);
            break;
        case 611:
            key.gate = fathoms_TO_micrometers(MEASUREMENT);
            break;
        case 612:
            key.gate = fathoms_TO_nanometers(MEASUREMENT);
            break;
        case 613:
            key.gate = fathoms_TO_angstroms(MEASUREMENT);
            break;
        case 614:
            key.gate = fathoms_TO_nauticalmiles(MEASUREMENT);
            break;
         //Àðøèí
        case 706:
            key.gate = arshins_TO_fathoms(MEASUREMENT);
            break;
        case 705:
            key.gate = arshins_TO_kilometers(MEASUREMENT);
            break;
        case 704:
            key.gate = arshins_TO_decimeters(MEASUREMENT);
            break;
        case 703:
            key.gate = arshins_TO_centimeters(MEASUREMENT);
            break;
        case 702:
            key.gate = arshins_TO_meters(MEASUREMENT);
            break;
        case 701:
            key.gate = arshins_TO_millimeters(MEASUREMENT);
            break;
        case 708:
            key.gate = arshins_TO_miles(MEASUREMENT);
            break;
        case 709:
            key.gate = arshins_TO_yards(MEASUREMENT);
            break;
        case 710:
            key.gate = arshins_TO_foots(MEASUREMENT);
            break;
        case 711:
            key.gate = arshins_TO_micrometers(MEASUREMENT);
            break;
        case 712:
            key.gate = arshins_TO_nanometers(MEASUREMENT);
            break;
        case 713:
            key.gate = arshins_TO_angstroms(MEASUREMENT);
            break;
        case 714:
            key.gate = arshins_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ìèëÿ
        case 807:
            key.gate = miles_TO_arshins(MEASUREMENT);
            break;
        case 806:
            key.gate = miles_TO_fathoms(MEASUREMENT);
            break;
        case 805:
            key.gate = miles_TO_kilometers(MEASUREMENT);
            break;
        case 804:
            key.gate = miles_TO_decimeters(MEASUREMENT);
            break;
        case 803:
            key.gate = miles_TO_centimeters(MEASUREMENT);
            break;
        case 802:
            key.gate = miles_TO_meters(MEASUREMENT);
            break;
        case 801:
            key.gate = miles_TO_millimeters(MEASUREMENT);
            break;
        case 809:
            key.gate = miles_TO_yards(MEASUREMENT);
            break;
        case 810:
            key.gate = miles_TO_foots(MEASUREMENT);
            break;
        case 811:
            key.gate = miles_TO_micrometers(MEASUREMENT);
            break;
        case 812:
            key.gate = miles_TO_nanometers(MEASUREMENT);
            break;
        case 813:
            key.gate = miles_TO_angstroms(MEASUREMENT);
            break;
        case 814:
            key.gate = miles_TO_nauticalmiles(MEASUREMENT);
            break;
        //ßðä
        case 908:
            key.gate = yards_TO_miles(MEASUREMENT);
            break;
        case 907:
            key.gate = yards_TO_arshins(MEASUREMENT);
            break;
        case 906:
            key.gate = yards_TO_fathoms(MEASUREMENT);
            break;
        case 905:
            key.gate = yards_TO_kilometers(MEASUREMENT);
            break;
        case 904:
            key.gate = yards_TO_decimeters(MEASUREMENT);
            break;
        case 903:
            key.gate = yards_TO_centimeters(MEASUREMENT);
            break;
        case 902:
            key.gate = yards_TO_meters(MEASUREMENT);
            break;
        case 901:
            key.gate = yards_TO_millimeters(MEASUREMENT);
            break;
        case 910:
            key.gate = yards_TO_foots(MEASUREMENT);
            break;
        case 911:
            key.gate = yards_TO_micrometers(MEASUREMENT);
            break;
        case 912:
            key.gate = yards_TO_nanometers(MEASUREMENT);
            break;
        case 913:
            key.gate = yards_TO_angstroms(MEASUREMENT);
            break;
        case 914:
            key.gate = yards_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ôóò
        case 1009:
            key.gate = foots_TO_yards(MEASUREMENT);
            break;
        case 1008:
            key.gate = foots_TO_miles(MEASUREMENT);
            break;
        case 1007:
            key.gate = foots_TO_arshins(MEASUREMENT);
            break;
        case 1006:
            key.gate = foots_TO_fathoms(MEASUREMENT);
            break;
        case 1005:
            key.gate = foots_TO_kilometers(MEASUREMENT);
            break;
        case 1004:
            key.gate = foots_TO_decimeters(MEASUREMENT);
            break;
        case 1003:
            key.gate = foots_TO_centimeters(MEASUREMENT);
            break;
        case 1002:
            key.gate = foots_TO_meters(MEASUREMENT);
            break;
        case 1001:
            key.gate = foots_TO_millimeters(MEASUREMENT);
            break;
        case 1011:
            key.gate = foots_TO_micrometers(MEASUREMENT);
            break;
        case 1012:
            key.gate = foots_TO_nanometers(MEASUREMENT);
            break;
        case 1013:
            key.gate = foots_TO_angstroms(MEASUREMENT);
            break;
        case 1014:
            key.gate = foots_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ìèêðîìåòð
        case 1110:
            key.gate = micrometers_TO_foots(MEASUREMENT);
            break;
        case 1109:
            key.gate = micrometers_TO_yards(MEASUREMENT);
            break;
        case 1108:
            key.gate = micrometers_TO_miles(MEASUREMENT);
            break;
        case 1107:
            key.gate = micrometers_TO_arshins(MEASUREMENT);
            break;
        case 1106:
            key.gate = micrometers_TO_fathoms(MEASUREMENT);
            break;
        case 1105:
            key.gate = micrometers_TO_kilometers(MEASUREMENT);
            break;
        case 1104:
            key.gate = micrometers_TO_decimeters(MEASUREMENT);
            break;
        case 1103:
            key.gate = micrometers_TO_centimeters(MEASUREMENT);
            break;
        case 1102:
            key.gate = micrometers_TO_meters(MEASUREMENT);
            break;
        case 1101:
            key.gate = micrometers_TO_millimeters(MEASUREMENT);
            break;
        case 1112:
            key.gate = micrometers_TO_nanometers(MEASUREMENT);
            break;
        case 1113:
            key.gate = micrometers_TO_angstroms(MEASUREMENT);
            break;
        case 1114:
            key.gate = micrometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Íàíîìåòð
        case 1211:
            key.gate = nanometers_TO_micrometers(MEASUREMENT);
            break;
        case 1210:
            key.gate = nanometers_TO_foots(MEASUREMENT);
            break;
        case 1209:
            key.gate = nanometers_TO_yards(MEASUREMENT);
            break;
        case 1208:
            key.gate = nanometers_TO_miles(MEASUREMENT);
            break;
        case 1207:
            key.gate = nanometers_TO_arshins(MEASUREMENT);
            break;
        case 1206:
            key.gate = nanometers_TO_fathoms(MEASUREMENT);
            break;
        case 1205:
            key.gate = nanometers_TO_kilometers(MEASUREMENT);
            break;
        case 1204:
            key.gate = nanometers_TO_decimeters(MEASUREMENT);
            break;
        case 1203:
            key.gate = nanometers_TO_centimeters(MEASUREMENT);
            break;
        case 1202:
            key.gate = nanometers_TO_meters(MEASUREMENT);
            break;
        case 1201:
            key.gate = nanometers_TO_millimeters(MEASUREMENT);
            break;
        case 1213:
            key.gate = nanometers_TO_angstroms(MEASUREMENT);
            break;
        case 1214:
            key.gate = nanometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Àíãñòðåì
        case 1312:
            key.gate = angstroms_TO_nanometers(MEASUREMENT);
            break;
        case 1311:
            key.gate = angstroms_TO_micrometers(MEASUREMENT);
            break;
        case 1310:
            key.gate = angstroms_TO_foots(MEASUREMENT);
            break;
        case 1309:
            key.gate = angstroms_TO_yards(MEASUREMENT);
            break;
        case 1308:
            key.gate = angstroms_TO_miles(MEASUREMENT);
            break;
        case 1307:
            key.gate = angstroms_TO_arshins(MEASUREMENT);
            break;
        case 1306:
            key.gate = angstroms_TO_fathoms(MEASUREMENT);
            break;
        case 1305:
            key.gate = angstroms_TO_kilometers(MEASUREMENT);
            break;
        case 1304:
            key.gate = angstroms_TO_decimeters(MEASUREMENT);
            break;
        case 1303:
            key.gate = angstroms_TO_centimeters(MEASUREMENT);
            break;
        case 1302:
            key.gate = angstroms_TO_meters(MEASUREMENT);
            break;
        case 1301:
            key.gate = angstroms_TO_millimeter(MEASUREMENT);
            break;
        case 1314:
            key.gate = angstroms_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ìîðñêàÿ ìèëÿ
        case 1413:
            key.gate = nauticalmiles_TO_angstroms(MEASUREMENT);
            break;
        case 1412:
            key.gate = nauticalmiles_TO_nanometers(MEASUREMENT);
            break;
        case 1411:
            key.gate = nauticalmiles_TO_micrometers(MEASUREMENT);
            break;
        case 1410:
            key.gate = nauticalmiles_TO_foots(MEASUREMENT);
            break;
        case 1409:
            key.gate = nauticalmiles_TO_yards(MEASUREMENT);
            break;
        case 1408:
            key.gate = nauticalmiles_TO_miles(MEASUREMENT);
            break;
        case 1407:
            key.gate = nauticalmiles_TO_arshins(MEASUREMENT);
            break;
        case 1406:
            key.gate = nauticalmiles_TO_fathoms(MEASUREMENT);
            break;
        case 1405:
            key.gate = nauticalmiles_TO_kilometers(MEASUREMENT);
            break;
        case 1404:
            key.gate = nauticalmiles_TO_decimeters(MEASUREMENT);
            break;
        case 1403:
            key.gate = nauticalmiles_TO_centimeters(MEASUREMENT);
            break;
        case 1402:
            key.gate = nauticalmiles_TO_meters(MEASUREMENT);
            break;
        case 1401:
            key.gate = nauticalmiles_TO_millimeters(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
