#ifndef __MAC_H
#define __MAC_H

typedef unsigned long long u64;

typedef struct mac_t {
   u64 f1;
   u64 f2;
   u64 f3;
}MAC;


typedef struct subject_mac {
    MAC mac_label;
}SUBJECT;

typedef struct object_mac {
    MAC mac_label;
}OBJECT;

int mac_gt(u64 const * subject,u64 const * object);
int mac_lt(u64 const * subject,u64 const * object);
int mac_eq(u64 const * subject,u64 const * object);
int mac_ne(u64 const * subject,u64 const * object);
int mac_subset(u64 const * subject,u64 const * object);
int mac_superset(u64 const * subject,u64 const * object);
#endif
