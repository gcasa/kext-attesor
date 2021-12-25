//
//  attesor.c
//  attesor
//
//  Created by Gregory Casamento on 12/25/21.
//

#include <mach/mach_types.h>

kern_return_t attesor_start(kmod_info_t * ki, void *d);
kern_return_t attesor_stop(kmod_info_t *ki, void *d);

kern_return_t attesor_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t attesor_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
