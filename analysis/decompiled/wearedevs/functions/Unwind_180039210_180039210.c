/* Unwind@180039210 @ 180039210 */

void Unwind_180039210(undefined8 param_1,longlong param_2)

{
  LOCK();
  *(undefined1 *)(*(longlong *)(param_2 + 0x28) + 0x40) = 0;
  UNLOCK();
  FUN_18003c3c0(param_2 + 0x20);
  return;
}


