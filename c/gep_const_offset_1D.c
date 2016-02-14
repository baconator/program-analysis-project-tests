
int
main(int argc, char **argv) {
  {
    char tmp;
    char buffer[4] = { 0, 0, 0, 0 };
    buffer[2] = 1;
    tmp = buffer[2];
    buffer[-1] = 2;
    tmp = buffer[-1];
    buffer[5] = 3;
    tmp = buffer[5];
    buffer[4] = 4;
    tmp = buffer[4];
  }
  {
    unsigned tmp;
    float buffer[4] = { 0, 0, 0, 0};
    buffer[2] = 1;
    tmp = buffer[2];
    buffer[-1] = 2;
    tmp = buffer[-1];
    buffer[5] = 3;
    tmp = buffer[5];
    buffer[4] = 4;
    tmp = buffer[4];
  }
  return 0;
}

