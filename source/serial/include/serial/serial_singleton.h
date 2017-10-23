/*
 *	Serial Library by Parra Studios
 *	Copyright (C) 2016 - 2017 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A cross-platform library for managing multiple serialization and deserialization formats.
 *
 */

#ifndef SERIAL_SINGLETON_H
#define SERIAL_SINGLETON_H 1

/* -- Headers -- */

#include <configuration/configuration_api.h>

#include <configuration/configuration_object.h>

#ifdef __cplusplus
extern "C" {
#endif

/* -- Forward Declarations -- */

struct configuration_singleton_type;

/* -- Type Definitions -- */

typedef struct configuration_singleton_type * configuration_singleton;

/* -- Methods -- */

/**
*  @brief
*    Initialize configuration singleton
*
*  @param[in] global
*    Reference to global configuration object
*
*  @return
*    Returns zero on correct configuration singleton initialization, distinct from zero otherwise
*
*/
SERIAL_API int configuration_singleton_initialize(configuration global);

/**
*  @brief
*    Register configuration object into scope map
*
*  @param[in] config
*    Pointer to configuration object
*
*  @return
*    Returns zero on correct configuration singleton insertion, distinct from zero otherwise
*
*/
SERIAL_API int configuration_singleton_register(configuration config);

/**
*  @brief
*    Retrieve configuration object from scope map by @name
*
*  @param[in] name
*    Index which references the configuration object to be retrieved
*
*  @return
*    Returns pointer to configuration object if exists, null otherwise
*
*/
SERIAL_API configuration configuration_singleton_get(const char * name);

/**
*  @brief
*    Remove configuration object from scope map
*
*  @param[in] config
*    Pointer to configuration object
*
*  @return
*    Returns zero on correct configuration singleton removing, distinct from zero otherwise
*
*/
SERIAL_API int configuration_singleton_clear(configuration config);

/**
*  @brief
*    Destroy configuration singleton
*
*/
SERIAL_API void configuration_singleton_destroy(void);

#ifdef __cplusplus
}
#endif

#endif /* SERIAL_SINGLETON_H */