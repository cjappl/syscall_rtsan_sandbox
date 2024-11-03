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
  self->record = 1;
}

pid$target::stop_record*:entry
{
  self->record = 0;
}

//pid$target::mmap:entry,
syscall:::entry /self->record/
{
  // print thread name
  printf("\nSyscall '%s' in thread id %d:", probefunc, tid);
  ustack();
  errors++;
}
