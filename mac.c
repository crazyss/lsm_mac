#include "mac.h"

int mac_gt(u64 const * s,u64 const * o)
{
    return  *s > *o;
}
int mac_lt(u64 const * s,u64 const * o)
{
    return  *s < *o;
}
int mac_eq(u64 const * s,u64 const * o)
{
    return  *s == *o;
}
int mac_ne(u64 const * s,u64 const * o)
{
    return *s != *o;
}
int mac_subset(u64 const * s,u64 const * o)
{
    return (*s | *o) == *o;
}
int mac_superset(u64 const * s,u64 const * o)
{
    return (*s | *o) == *s;
}

