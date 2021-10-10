#include <json-c/json.h>

json_object *
get_hv_wrapper(void)
{
    json_object *wrapper;

    wrapper = json_object_new_object();

    return wrapper;
}
