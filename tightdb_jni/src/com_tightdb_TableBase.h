/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_TableBase */

#ifndef _Included_com_tightdb_TableBase
#define _Included_com_tightdb_TableBase
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_TableBase
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_createNative
  (JNIEnv *, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeClose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeUpdateFromSpec
 * Signature: (JLcom/tightdb/TableSpec;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeUpdateFromSpec
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetColumnCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeGetColumnCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetTableSpec
 * Signature: (J)Lcom/tightdb/TableSpec;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableBase_nativeGetTableSpec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetColumnName
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableBase_nativeGetColumnName
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetColumnType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_TableBase_nativeGetColumnType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeAddEmptyRow
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeAddEmptyRow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeRemove
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeRemove
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeRemoveLast
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeRemoveLast
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertByteBuffer
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeInsertDone
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeInsertDone
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetBoolean
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_TableBase_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetDateTime
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeGetDateTime
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetString
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableBase_nativeGetString
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetByteBuffer
 * Signature: (JJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableBase_nativeGetByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetByteArray
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_TableBase_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetMixedType
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_TableBase_nativeGetMixedType
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetMixed
 * Signature: (JJJ)Lcom/tightdb/Mixed;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableBase_nativeGetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetSubTable
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeGetSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeGetSubTableSize
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeGetSubTableSize
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeClearSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeClearSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetByteBuffer
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetByteBuffer
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeAddInt
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeAddInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSetIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeSetIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeHasIndex
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_TableBase_nativeHasIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeSum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeSum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeMaximum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeMaximum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeMinimum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeMinimum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeAverage
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeAverage
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindFirstInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindFirstInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindFirstBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindFirstBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindFirstDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindFirstDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindFirstString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindFirstString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindAllInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindAllInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindAllBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindAllBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindAllDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindAllDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeFindAllString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableBase_nativeFindAllString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableBase
 * Method:    nativeOptimize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableBase_nativeOptimize
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
