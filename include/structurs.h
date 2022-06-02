#ifndef STRUCTURS_H__
#define STRUCTURS_H__

typedef struct {

    uint32_t version;
    char name [10];
    uint32_t token_type;
    uint32_t com_mode;
    uint32_t com_boot;
    uint32_t dumb_terminal;
    uint32_t force_optrom;
    uint32_t guest_login;
    uint32_t fw_download;

} config_ahsm_t; 

#endif /* STRUCTURS_H__ */