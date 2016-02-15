
int
foo1(int c, int a, int b) {
  if (c) {
    a *= -20;
    b += 2;
  } else {
    a *= 3;
    b -= 1;
  }
  return 10 + a + b; 
}

int
foo2(int c, int a, int b) {
  if (c) {
    a *= -2;
    b += 20;
  } else {
    a *= 3;
    b -= 1;
  }
  return 10 + a + b; 
}

int
foo(int c, int a, int b) {
  if (c) {
    a *= -2;
    b += 2;
  } else {
    a *= 3;
    b -= 1;
  }
  return 10 + a + b; 
}

int
main(int argc, char **argv) {
  unsigned buffer[20] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  { // neg
    int x = 1;
    int y = 2;
    x = foo1(argc, x, y); 
    buffer[x] = -1;
  }
  { // pos
    int x = 1;
    int y = 2;
    x = foo2(argc, x, y); 
    buffer[x] = -1;
  }
  { // upper bound
    int x = 3;
    int y = 2;
    x = foo(argc, x, y); 
    buffer[x] = -1;
  }
  { // false positive
    int x = 2;
    int y = 2;
    x = foo(argc, x, y); 
    buffer[x] = -1;
  }
  return 0;
}

