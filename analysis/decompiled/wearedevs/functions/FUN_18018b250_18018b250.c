/* FUN_18018b250 @ 18018b250 */

void FUN_18018b250(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187680(param_1 + 0x68);
    }
  }
  FUN_18018b060(param_1 + 0x18);
  FUN_18018b060(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (((uint)lVar2 & 3) != 1) {
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + -1);
  puVar4 = *(undefined8 **)(lVar2 + 7);
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
  }
  thunk_FUN_1801d3330(lVar2 + -1,0x18,8);
  return;
}


