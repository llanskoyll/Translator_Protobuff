#include "../include/incilDate.h"

void incilDate() {

    void* buffer;
    size_t len = 0;
    size_t wlen = 0;
    FILE *fp;

    fp = fopen("incilProto","wb");
    if(!fp) {
        printf("Файл на удалось открыть"); 
    }

    ConfigAhsmT *config;

    config = (ConfigAhsmT *)malloc(sizeof(ConfigAhsmT));
    
    config_ahsm_t__init(config);

    // инцилизация полей
    config->has_com_boot = 1;
    config->has_com_mode = 1;
    config->has_dumb_terminal = 1;
    config->has_force_optrom = 1;
    config->has_fw_download = 1;
    config->has_guest_login = 1;
    config->has_token_type = 1;
    config->has_version = 1;
    
    // заполнение полеЙ
    config->com_boot = 5;
    config->com_mode = 5;
    config->dumb_terminal = 5;
    config->force_optrom = 5;
    config->fw_download = 5;
    config->guest_login = 5;
    config->token_type = 5;
    config->version = 5;
    config->name = "testChar";

    len = config_ahsm_t__get_packed_size(config);
    buffer = malloc(len);

    config_ahsm_t__pack(config,buffer);

    wlen = fwrite(buffer, 1, len, fp);
    if(wlen != len) {
        printf("Удалось записать только %lu байт из %lu\r\n", wlen, len);
    }
    
    free(buffer);
    free(config);
    fclose(fp);
    //hexdump -C name_file
    printf("Инцилизация прошла успешно!\r\n");
}