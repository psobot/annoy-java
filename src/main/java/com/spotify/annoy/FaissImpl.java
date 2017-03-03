package com.spotify.annoy;

public class FaissImpl {

  private native void cppIndexFlatL2Ctor(int d);

  private native long cppNTotal();

}
