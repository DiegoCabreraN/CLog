#include "CLog.h"

int main(int argc, char *argv[])
{
  debugf("This is Debug");
  infof("This is Info");
  warnf("This is a Warning");
  errorf("This is an Error");
  panicf("Stopping system due to panic...");
  return 0;
}
