/* FUN_1801db450 @ 1801db450 */

bool FUN_1801db450(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = FUN_1801db250(*param_1,param_2,param_3,0);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  uVar5 = (uint)param_2 & 3;
  switch(uVar5) {
  case 0:
    cVar3 = *(char *)(param_2 + 0x10);
    break;
  case 1:
    if (*(char *)(param_2 + 0xf) != '\v') {
      return true;
    }
    goto LAB_1801db504;
  case 2:
    cVar3 = FUN_1801daa10(param_2 >> 0x20);
    break;
  case 3:
    return param_2 >> 0x20 != 0xb;
  }
  bVar6 = true;
  if ((cVar3 == '\v') && (bVar6 = false, uVar5 == 1)) {
LAB_1801db504:
    uVar1 = *(undefined8 *)(param_2 - 1);
    puVar2 = *(undefined8 **)(param_2 + 7);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    thunk_FUN_1801d3330(param_2 - 1,0x18,8);
    bVar6 = false;
  }
  return bVar6;
}


