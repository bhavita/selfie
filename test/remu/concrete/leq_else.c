// [-c test/remu/concrete/leq_else.c -n 2;<12,8,8,1>;<10,true>]
uint64_t main(uint64_t argc, uint64_t* argv) {
  uint64_t x;
  uint64_t y;
  uint64_t z;
  x = 8;
  y = 2;
  z = x % y;
  if(x <= 7) {
    return z;
  } else {      //false case: x[8;8]
    return x;
  }
}
