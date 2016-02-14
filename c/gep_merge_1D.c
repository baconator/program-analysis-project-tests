
int
main(int argc, char **argv) {
  unsigned buffer[4] = { 0, 0, 0, 0 };
  {
    int index;
    if (argc) {
      index = 5;
    } else {
      index = 1;
    }
    buffer[index] = 2;
  }
  {
    int index;
    if (argc) {
      index = 4;
    } else {
      index = 1;
    }
    buffer[index] = 2;
  }
  {
    int index;
    if (argc) {
      index = argc;
    } else {
      index = 1;
    }
    buffer[index] = 2;
  }
  return 0;
}

