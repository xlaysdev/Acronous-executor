/* FUN_18007b720 @ 18007b720 */

void FUN_18007b720(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (1 < *param_1 - 3U) {
    if ((int)*param_1 != 2) {
      lVar1 = param_1[0xf];
      puVar2 = (undefined8 *)param_1[0x10];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
      FUN_1801b2a70(param_1 + 0x12);
      if (param_1[2] != 0) {
        thunk_FUN_1801d3330(param_1[3],param_1[2],1);
      }
      FUN_18007f870();
      if (param_1[6] != 0) {
        thunk_FUN_1801d3330(param_1[7],param_1[6] * 0x50,8);
      }
      FUN_18007ad80(param_1 + 0x17);
      if ((int)param_1[0x40] != 2) {
        FUN_180077610(param_1 + 0x40);
      }
      FUN_1800777b0(param_1 + 0x43);
      FUN_180124e90();
      FUN_18007c1d0(param_1 + 0x46);
      FUN_180076020(param_1[0x4b]);
    }
    lVar1 = param_1[0x4d];
    if (lVar1 != 0) {
      uVar4 = FUN_1801775a0(lVar1 + 0x30);
      if ((uVar4 & 5) == 1) {
        (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(*(undefined8 *)(lVar1 + 0x28));
      }
      plVar3 = (longlong *)param_1[0x4d];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003de40();
          return;
        }
      }
    }
  }
  return;
}


