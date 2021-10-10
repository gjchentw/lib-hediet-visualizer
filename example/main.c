#include <stdio.h>
#ifdef DEBUG_HV
#include <json-c/json.h>
#include "hediet-visualizer.h"
#endif

int main(void)
{
#ifdef DEBUG_HV
    json_object *debugHV;
#endif

#ifdef DEBUG_HV
    debugHV = get_hv_wrapper();
#endif
    return 0;
}
