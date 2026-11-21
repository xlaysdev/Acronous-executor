/* Unwind@1801c40a0 @ 1801c40a0 */

void Unwind_1801c40a0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  plVar1 = *(longlong **)(param_2 + 0x48);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801c64c0(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x43) = 0;
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}


