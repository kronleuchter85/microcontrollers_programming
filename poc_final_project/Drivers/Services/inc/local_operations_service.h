/*
 * local_operations_service.h
 *
 *  Created on: 16 Apr 2022
 *      Author: gonzalo
 */

#ifndef SERVICES_INC_LOCAL_OPERATIONS_SERVICE_H_
#define SERVICES_INC_LOCAL_OPERATIONS_SERVICE_H_

#include "stdbool.h"

void local_operations_service_show_sequence_set(bool s);

bool local_operations_service_show_sequence_get();

void local_operations_service_config();

void local_operations_service_execute();

#endif /* SERVICES_INC_LOCAL_OPERATIONS_SERVICE_H_ */
