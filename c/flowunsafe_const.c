
int
main(int argc, char **argv) {
  unsigned buffer[20] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  };
  { // neg
    int x = 1;
    int y = 2;
    if (argc) {
      x *= -20;
      y += 2;
    } else {
      x *= 3;
      y -= 1;
    }
    x = 10 + x + y; 
    buffer[x] = -1;
  }
  { // pos
    int x = 1;
    int y = 2;
    if (argc) {
      x *= -2;
      y += 20;
    } else {
      x *= 3;
      y -= 1;
    }
    x = 10 + x + y; 
    buffer[x] = -1;
  }
  { // upper bound
    int x = 3;
    int y = 2;
    if (argc) {
      x *= -2;
      y += 2;
    } else {
      x *= 3;
      y -= 1;
    }
    x = 10 + x + y; 
    buffer[x] = -1;
  }
  { // false positive
    int x = 2;
    int y = 2;
    if (argc) {
      x *= -2;
      y += 2;
    } else {
      x *= 3;
      y -= 1;
    }
    x = 10 + x + y; 
    buffer[x] = -1;
  }
  return 0;
}

