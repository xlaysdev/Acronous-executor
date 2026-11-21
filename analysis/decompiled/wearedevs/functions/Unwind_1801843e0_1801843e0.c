/* Unwind@1801843e0 @ 1801843e0 */

void Unwind_1801843e0(undefined8 param_1,longlong param_2)

{
  LOCK();
  *(undefined1 *)(*(longlong *)(param_2 + 0x48) + 0x50) = 0;
  UNLOCK();
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x67) = 1;
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


