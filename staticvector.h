/**
 * @file
 * @brief This header exposes a contiguous static vector object its methods
 * @see ./unittests/test_staticvector.cpp 
*/
#ifndef STATICVECTOR_H
#define STATICVECTOR_H
#ifdef __cplusplus
extern "C" {
#endif
#include <stddef.h>


struct StaticVector {
    int len;        // Number of elements
    int max_len;    // Max number of elements
    int elt_size;   // Size of elements
    char data[];    // Start of data
};

/**
 * @brief Initialize a segment of memory as a static vector. The vector is not
 * resizeable
 * @param elt_size Size of elements
 * @param buffer An array of bytes
 * @param size Size of the array
 * @return 0 in success, -1 on failure
*/
int StaticVector_init(size_t elt_size, char buffer[], size_t buffer_size);

/**
 * @brief Get the pointer at index
 * @param self Pointer to segment of memory initialized by StaticVector_init
 * @param index Index to memory
 * @return Pointer to the element at index, or NULL if error
*/
void *StaticVector_getitem(void *self, int index);

/**
 * @brief Delete the item at index
 * @param self Pointer to segment of memory initialized by StaticVector_init
 * @param index Index to memory
 * @return 0 if Success. -1 if Error
*/
int StaticVector_delitem(void *self, int index);

/**
 * @brief Append item to vector
 * @param self Pointer to segment of memory initialized by StaticVector_init
 * @param element Pointer to element to be inserted
 * @return 0 if Success. -1 if Error
*/
int StaticVector_append(void *self, void *element);


/**
 * @brief Insert item to vector at index
 * @param self Pointer to segment of memory initialized by StaticVector_init
 * @param index Location of insertion
 * @return 0 if Success. -1 if Error
*/
int StaticVector_insert(void *self, int index, void *element);



#ifdef __cplusplus
}
#endif
#endif