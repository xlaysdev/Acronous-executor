/* Unwind@180039610 @ 180039610 */

void Unwind_180039610(undefined8 param_1,longlong param_2)

{
  LOCK();
  *(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x18) = 0;
  UNLOCK();
  FUN_18003b640(*(undefined8 *)(param_2 + 0x20));
  return;
}


