/* Unwind@180169f30 @ 180169f30 */

void Unwind_180169f30(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = param_2 & 0xffffffffffffff80;
  bVar1 = *(byte *)(uVar5 + 0x6e);
  bVar2 = *(byte *)(uVar5 + 0x6d);
  if ((*(char *)(uVar5 + 0x6c) != '\0') &&
     ((**(ulonglong **)(param_2 + 0x638) & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x638) + 8),
                        **(ulonglong **)(param_2 + 0x638),1);
  }
  if ((bVar2 & 1) == 0) {
    lVar3 = *(longlong *)(uVar5 + 0x90);
  }
  else {
    FUN_180167aa0(*(undefined8 *)(param_2 + 0x628));
    plVar4 = *(longlong **)(uVar5 + 0x80);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180163bb0(uVar5 + 0x80);
    }
    FUN_180167c00(*(undefined8 *)(uVar5 + 0x88));
    lVar3 = *(longlong *)(uVar5 + 0x90);
  }
  if ((bVar1 & 1) != 0) {
    FUN_180167e60(lVar3 + 8);
  }
  return;
}


