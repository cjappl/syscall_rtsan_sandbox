#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include <sys/socket.h>
#include <pthread.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>

void start_recording() {
  return;
}

void stop_recording() {
  return;
}

class ScopedRecorder {
 public:
  ScopedRecorder() {
    start_recording();
  }

  ~ScopedRecorder() {
    stop_recording();
  }

  ScopedRecorder(const ScopedRecorder&) = delete;
  ScopedRecorder& operator=(const ScopedRecorder&) = delete;
  ScopedRecorder(ScopedRecorder&&) = delete;
  ScopedRecorder& operator=(ScopedRecorder&&) = delete;
};



int main() {
  {
    ScopedRecorder recorder;
  }
}

