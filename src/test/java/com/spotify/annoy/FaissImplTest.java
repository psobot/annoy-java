package com.spotify.annoy;

import static org.junit.Assert.*;

import org.junit.Test;

public class FaissImplTest {

  @Test
  public void size() throws Exception {
    assertEquals(new FaissImpl(40).size(), 0L);
  }

}
