/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_derecho_QueryResults */

#ifndef _Included_io_derecho_QueryResults
#define _Included_io_derecho_QueryResults
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_derecho_QueryResults
 * Method:    getReplyMapOS
 * Signature: (J)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_io_derecho_QueryResults_getReplyMapOS
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_derecho_QueryResults
 * Method:    getReplyMapP2P
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_derecho_QueryResults_getReplyMapP2P
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif