/* Unwind@180039430 @ 180039430 */

void Unwind_180039430(undefined8 param_1,longlong param_2)

{
  LOCK();
  *(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x48) = 0;
  UNLOCK();
  FUN_18003a460(*(undefined8 *)(param_2 + 0x20));
  return;
}


