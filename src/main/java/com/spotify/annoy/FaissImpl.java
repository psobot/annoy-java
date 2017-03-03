package com.spotify.annoy;

public class FaissImpl {

  private final int dim;

  public FaissImpl(int dim) {
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
