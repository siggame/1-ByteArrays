/**
 * @file
 * @brief  This header file exposes symbols defined in unittests/testdata.a
 *  The unit test executor is linked against the file. Since the implementation
 *  of the unit test may reveal the solution to the problem at hand, the code
 *  is hidden in binary form.
*/
#ifndef TESTDATA_H
#define TESTDATA_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stddef.h>
/**
 * @brief Dump M_PI in a random location in buffer.
 * @param buffer Dump it here
 * @param size The size of buffer
 * @return The index of where it is dumped, or -1 if not dumped.
*/ 
extern int generate_data_find_pi(char *buffer, size_t size);

#ifdef __cplusplus
}
#endif
#endif