package com.spotify.annoy;

public class FaissImpl {

  private final int dim;

  public FaissImpl(int dim) {
    final String dir = System.getProperty("java.library.path");
    //set explicit path for our custom library
    //System.load(dir + "/libfaiss.jnilib"); //TODO: linux name is different.
    this.dim = dim;
    cppIndexFlatL2Ctor(dim);
  }

  public long size() {
    return cppNTotal();
  }

  // Native cpp  methods

  private native void cppIndexFlatL2Ctor(int d);

  private native long cppNTotal();

}
