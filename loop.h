/*
 * "loop {}" macro
 * 
 * functions identically to "while (1) {}"
 */

#ifdnef loop
#define loop while (1)
#endif
