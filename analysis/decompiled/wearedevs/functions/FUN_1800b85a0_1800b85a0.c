/* FUN_1800b85a0 @ 1800b85a0 */

byte FUN_1800b85a0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int local_40;
  
  lVar2 = *param_1;
  if (lVar2 != 2) {
    FUN_180161780(param_1,param_1 + 3);
  }
  puVar3 = (uint *)param_2[1];
  plVar4 = (longlong *)param_2[2];
  FUN_180131f80(*param_2,*puVar3);
  bVar1 = *(byte *)((longlong)plVar4 + 0x2e);
  if (*plVar4 == 0) {
    uVar5 = plVar4[3];
  }
  else {
    if ((int)*plVar4 != 1) goto LAB_1800b861b;
    uVar5 = 0;
    if ((ulonglong)plVar4[3] <= (ulonglong)plVar4[2]) {
      uVar5 = plVar4[2] - plVar4[3];
    }
  }
  if (*puVar3 < uVar5) {
    *(byte *)((longlong)plVar4 + 0x2e) = bVar1 & 0xfe;
  }
LAB_1800b861b:
  local_40 = (int)lVar2;
  if (local_40 != 2) {
    FUN_180161750(param_1,param_1 + 3);
  }
  return bVar1 & 1;
}


