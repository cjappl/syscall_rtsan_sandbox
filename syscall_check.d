dtrace:::BEGIN
{
  printf("Starting trace\n");
  errors = 0;
}

dtrace:::END
{
  printf("Total errors: %d", errors);
  exit(errors);
}


pid$target::start_record*:return
{
  self->is_recording = 1;
}

pid$target::stop_record*:entry
{
  self->is_recording = 0;
}

syscall:::entry /self->is_recording/
{
  printf("\nSyscall '%s' in thread id %d:", probefunc, tid);
  ustack();
  errors++;
}
