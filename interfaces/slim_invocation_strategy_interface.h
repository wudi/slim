//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_INVOCATION_STRATEGY_INTERFACE_H
#define SLIM_INVOCATION_STRATEGY_INTERFACE_H

extern zend_class_entry *slim_invocation_strategy_interface_ce;
SLIM_MINIT_FUNCTION(invocation_strategy_interface);

#endif //SLIM_INVOCATION_STRATEGY_INTERFACE_H