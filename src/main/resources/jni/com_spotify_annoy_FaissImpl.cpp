#include <iostream>
#include <vector>
#include <com_spotify_annoy_FaissImpl.h>
#include <jni.h>
#include <faiss/IndexFlat.h>

using namespace std;

namespace
{
    //static faiss::IndexFlatL2 *faiss_index;
}


/*
 * Class:     com_spotify_annoy_FaissImpl
 * Method:    cppIndexFlatL2Ctor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_spotify_annoy_FaissImpl_cppIndexFlatL2Ctor
  (JNIEnv * env, jobject obj, jint d)
{
    /*
    faiss_index = new faiss::IndexFlatL2(d);           // call constructor
    printf("is_trained = %s\n", faiss_index->is_trained ? "true" : "false");
    //faiss_index->add(nb, xb);                     // add vectors to the faiss_index
    printf("ntotal = %ld\n", faiss_index->ntotal);
    */
    return;
}

/*
 * Class:     com_spotify_annoy_FaissImpl
 * Method:    cppNTotal
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_spotify_annoy_FaissImpl_cppNTotal
  (JNIEnv *env, jobject obj) 
{
    return 0;//faiss_index->ntotal;
}
