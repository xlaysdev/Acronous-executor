/* Unwind@1801251a0 @ 1801251a0 */

void Unwind_1801251a0(undefined8 param_1,longlong param_2)

{
  LOCK();
  *(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x70) = 0;
  UNLOCK();
  FUN_1800430f0(*(undefined8 *)(param_2 + 0x28));
  return;
}


