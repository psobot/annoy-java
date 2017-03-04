#include <iostream>
#include <vector>
#include <com_spotify_annoy_FaissImpl.h>
#include <jni.h>
#include <faiss/IndexFlat.h>

using namespace std;

namespace
{
    static faiss::IndexFlatL2 *index;

    inline jintArray vec_to_jintArray(JNIEnv *env, const vector<jint> &vec)
    {
	jintArray outJNIArray = env->NewIntArray(vec.size());  // allocate
	if (NULL == outJNIArray) return NULL;
	env->SetIntArrayRegion(outJNIArray, 0 , vec.size(), &vec[0]);  // copy
	return outJNIArray;
    }
}


/*
 * Class:     com_spotify_annoy_FaissImpl
 * Method:    cppIndexFlatL2Ctor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_spotify_annoy_FaissImpl_cppIndexFlatL2Ctor
  (JNIEnv *, jobject, jint)
{
    
    index = faiss::IndexFlatL2(d);           // call constructor
    printf("is_trained = %s\n", index.is_trained ? "true" : "false");
    index.add(nb, xb);                     // add vectors to the index
    printf("ntotal = %ld\n", index.ntotal);


    return;
}

/*
 * Class:     com_spotify_annoy_FaissImpl
 * Method:    cppNTotal
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_spotify_annoy_FaissImpl_cppNTotal
  (JNIEnv *, jobject) 
{
    return index->ntotal;
}
