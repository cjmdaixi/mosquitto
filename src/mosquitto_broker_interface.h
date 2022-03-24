#ifndef MOSQUITTO_BROKER_INTERFACE_H
#define MOSQUITTO_BROKER_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif

int start_mosquitto_main();
int start_mosquitto(int argc, char *argv[]);

#ifdef __cplusplus
}
#endif
#endif
