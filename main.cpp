#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

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

int main() {

  pthread_t thread;
  pthread_create(&thread, nullptr, [](void*) -> void* {
    start_recording();
    free(nullptr);
    stop_recording();
    return nullptr;
  }, nullptr);

  pthread_join(thread, nullptr);
}

