/* Unwind@1801839e0 @ 1801839e0 */

void Unwind_1801839e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x458);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x46f) = 1;
    *(undefined1 *)(param_2 + 0x46e) = 1;
    FUN_180163ab0(param_2 + 0x30);
  }
  *(undefined1 *)(param_2 + 0x46f) = 1;
  *(undefined1 *)(param_2 + 0x46e) = 1;
  return;
}


