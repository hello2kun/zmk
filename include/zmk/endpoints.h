#pragma once

#include <zmk/keys.h>

int zmk_endpoints_init();
int zmk_endpoints_send_key_event(struct zmk_key_event key_event);