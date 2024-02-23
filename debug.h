#ifndef JCHONG_DEBUG_OBJC_H
#define JCHONG_DEBUG_OBJC_H

#define DEBUG(X) _Generic((X),                                                      \
                    char*: NSLog(@"%s-%s: %s = %s\n", __FILE__, __LINE__, #X, X)    \
                    long: NSLog(@"%s-%s: %s = %ld\n", __FILE__, __LINE__, #X, X)    \
                    int: NSLog(@"%s-%s: %s = %d\n", __FILE__, __LINE__, #X, X),     \
                    double: NSLog(@"%s-%s: %s = %f\n", __FILE__, __LINE__, #X, X),  \
                    char: NSLog(@"%s-%s: %s = %c\n", __FILE__, __LINE__, #X, X),    \
                    default: NSLog(@"%s-%s: %s = %@\n", __FILE__, __LINE__, #X, X)  \
                )(X) 

#endif // JCHONG_DEBUG_OBJC_H