#include "../include/convert_structur_to_protobuff.h"


void convert_structur_to_protobuff(config_ahsm_t *config_ahsm_t) {

    void *buffer;
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

    // заполнение полей
    config->com_boot = config_ahsm_t->com_boot + 1;
    config->com_mode = config_ahsm_t->com_mode;
    config->dumb_terminal = config_ahsm_t->dumb_terminal + 1;
    config->force_optrom = config_ahsm_t->force_optrom + 1;
    config->fw_download = config_ahsm_t->fw_download + 1;
    config->guest_login = config_ahsm_t->guest_login + 1;
    config->token_type = config_ahsm_t->token_type + 1;
    config->version = config_ahsm_t->version + 1;
    config->name = config_ahsm_t->name;

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

}
