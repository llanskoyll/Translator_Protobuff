#include "../include/convert_protobuff_to_structur.h"

void convert_protobuff_to_structur(config_ahsm_t *config_struct) {
    
    char *buffer;
    size_t file_size;
    size_t len, wlen = 0;
    FILE *fp;
    struct stat statbuf;

    uint32_t test = 0;

    if (stat("incilProto", &statbuf) != 0) {
        printf("Файл не найден\r\n");
        return;
    }
    
    fp = fopen("incilProto","rb");
    if(!fp) {
        printf("Файл на удалось открыть"); 
    }

    file_size = statbuf.st_size;
    buffer = malloc(file_size);
    wlen = fread(buffer, 1, file_size, fp);

    ConfigAhsmT *config;
    config = config_ahsm_t__unpack(NULL, file_size, buffer);
    if (!config) {
        printf("Не удалось распаковать структуру\r\n");
        free(buffer);
        config_ahsm_t__free_unpacked(config, NULL);
        return;
    }

    //запонление полей struct
    config_struct->com_boot = config->com_boot;
    config_struct->com_mode = config->com_mode;
    config_struct->dumb_terminal = config->dumb_terminal;
    config_struct->force_optrom = config->force_optrom;
    config_struct->fw_download = config->fw_download;
    config_struct->guest_login = config->guest_login;
    // config_struct->name = config->name; <---- ERROR WITH STRING
    config_struct->token_type = config->token_type;
    config_struct->version = config->version;

    printf("\r\n Итоговая структура : \r\n");
    printf("\nCom_boot : %"PRIu32"\r\n",config_struct->com_boot);
    printf("Com_mode : %"PRIu32"\r\n",config_struct->com_mode);
    printf("Dumd_terminal : %"PRIu32"\r\n",config_struct->dumb_terminal);
    printf("Force_optrom : %"PRIu32"\r\n",config_struct->force_optrom);
    printf("Fw_download : %"PRIu32"\r\n",config_struct->fw_download);
    printf("Guest_login : %"PRIu32"\r\n",config_struct->guest_login);
    printf("Token_type : %"PRIu32"\r\n",config_struct->token_type);
    printf("Version : %"PRIu32"\r\n",config_struct->version);
    printf("Загрузка данных в структуру произошло успешно \r\n");

}


