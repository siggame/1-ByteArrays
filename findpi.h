/**
 * @file
 *  @brief Find value in byte array
*/
#ifndef FINDPI_H
#define FINDPI_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stddef.h>

/**
 * @brief Find M_PI given a pointer to byte array and the size of byte array.
 * @param bytes A pointer to the search space
 * @param size Size of the search space
 * @return The index given in offset of number of bytes. If M_PI could not be
 *  found, return -1.
*/
int find_pi(const char *bytes, size_t size);

#ifdef __cplusplus
}
#endif
#endif