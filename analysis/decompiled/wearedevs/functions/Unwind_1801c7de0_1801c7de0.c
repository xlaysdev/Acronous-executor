/* Unwind@1801c7de0 @ 1801c7de0 */

void Unwind_1801c7de0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x195);
  bVar2 = *(byte *)(param_2 + 0x196);
  if (*(char *)(param_2 + 0x197) != '\0') {
    FUN_1801c54b0(*(undefined8 *)(param_2 + 0x200));
  }
  if (((bVar2 & 1) != 0) && (plVar3 = *(longlong **)(param_2 + 0x1f8), plVar3 != (longlong *)0x0)) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801e3800(param_2 + 0x1f8);
    }
  }
  if (((bVar1 & 1) != 0) && ((**(ulonglong **)(param_2 + 0x170) & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x170) + 8),
                        **(ulonglong **)(param_2 + 0x170),1);
  }
  return;
}


