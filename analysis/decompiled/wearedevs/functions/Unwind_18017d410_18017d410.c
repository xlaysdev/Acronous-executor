/* Unwind@18017d410 @ 18017d410 */

void Unwind_18017d410(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x105);
  bVar2 = *(byte *)(param_2 + 0x106);
  if (*(char *)(param_2 + 0x107) != '\0') {
    FUN_18017d8c0(*(undefined8 *)(param_2 + 0x170));
  }
  if (((bVar2 & 1) != 0) && (plVar3 = *(longlong **)(param_2 + 0x168), plVar3 != (longlong *)0x0)) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801e3800(param_2 + 0x168);
    }
  }
  if (((bVar1 & 1) != 0) && ((**(ulonglong **)(param_2 + 0xe0) & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 8),
                        **(ulonglong **)(param_2 + 0xe0),1);
  }
  return;
}


