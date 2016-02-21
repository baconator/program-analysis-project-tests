
int
foo1(int c, int a, int b) {
  unsigned buffer[20] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  if (c) {
    a *= -20;
    b += 2;
  } else {
    a *= 3;
    b -= 1;
  }
  return buffer[10 + a + b]; 
}

int
foo2(int c, int a, int b) {
  unsigned buffer[20] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  if (c) {
    a *= -2;
    b += 20;
  } else {
    a *= 3;
    b -= 1;
  }
  return buffer[10 + a + b]; 
}

int
foo(int c, int a, int b) {
  unsigned buffer[20] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  if (c) {
    a *= -2;
    b += 2;
  } else {
    a *= 3;
    b -= 1;
  }
  return buffer[10 + a + b]; 
}

int
main(int argc, char **argv) {
  { // neg
    int x = 1;
    int y = 2;
    x = foo1(argc, x, y); 
  }
  { // pos
    int x = 1;
    int y = 2;
    x = foo2(argc, x, y); 
  }
  { // upper bound
    int x = 3;
    int y = 2;
    x = foo(argc, x, y); 
  }
  { // false positive
    int x = 2;
    int y = 2;
    x = foo(argc, x, y); 
  }
  return 0;
}

