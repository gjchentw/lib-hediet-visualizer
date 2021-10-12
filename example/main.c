#include <stdio.h>
#define DEBUG_HV
#ifdef DEBUG_HV
#include <json-c/json.h>
#include "../include/hediet-visualizer.h"
#endif

int main(void)
{
#ifdef DEBUG_HV
    json_object *debugHV;
    const char *strDebugHV;
#endif

#ifdef DEBUG_HV
    debugHV = get_hv_wrapper();
    strDebugHV = json_object_to_json_string(debugHV);
    printf("%s", strDebugHV);
#endif
    return 0;
}

///usr/bin/gcc -ljson-c -Lbuild -lhediet-visualizer -g /home/gjchen/projects/lib-hediet-visualizer/example/main.c -o /home/gjchen/projects/lib-hediet-visualizer/example/main