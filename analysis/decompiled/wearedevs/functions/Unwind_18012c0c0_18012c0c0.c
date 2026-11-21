/* Unwind@18012c0c0 @ 18012c0c0 */

void Unwind_18012c0c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f) != '\0') {
    LOCK();
    *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x28) = 0;
    UNLOCK();
  }
  return;
}


