#ifndef CONFIG_H
#define CONFIG_H

#include "logger.h"
#include "screencast_common.h"

struct config_screencast {
	char *output_name;
	char *chooser_cmd;
	enum xdpw_chooser_types chooser_type;
};

struct xdpw_config {
	struct config_screencast screencast_conf;
};

void print_config(enum LOGLEVEL loglevel, struct xdpw_config *config);
void finish_config(struct xdpw_config *config);
void init_config(char ** const configfile, struct xdpw_config *config);

#endif