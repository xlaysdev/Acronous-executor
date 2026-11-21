/* FUN_180133e20 @ 180133e20 */

undefined8 * FUN_180133e20(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  
  if ((int)param_2 == 0) {
    uVar6 = 0x12;
  }
  else {
    if ((param_2 >> 0x20 & 8) == 0) {
      uVar7 = 0;
      uVar2 = param_3[1];
    }
    else {
      if (param_3[1] == 0) {
        uVar6 = 0x13;
        goto LAB_180133f9b;
      }
      uVar7 = (ulonglong)*(byte *)*param_3;
      FUN_1801b2540(param_3,1);
      uVar2 = param_3[1];
    }
    uVar6 = 0x13;
    if (4 < uVar2) {
      uVar1 = *(uint *)*param_3;
      FUN_1801b2540(param_3,4);
      if (uVar7 != 0) {
        uVar6 = 0xd;
        if ((ulonglong)param_3[1] < uVar7) goto LAB_180133f9b;
        param_3[1] = param_3[1] - uVar7;
      }
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[4] = 8;
      param_1[7] = 8;
      param_1[8] = 0;
      param_1[9] = 2;
      param_1[10] = 0;
      *(undefined2 *)(param_1 + 0xb) = 0;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      param_1[0x24] = *param_3;
      param_1[0x25] = uVar3;
      param_1[0x26] = uVar4;
      param_1[0x27] = uVar5;
      *(undefined1 *)(param_1 + 0xc) = 0xc;
      param_1[0xf] = 0;
      param_1[0x13] = 0;
      param_1[0x17] = 0;
      param_1[0x1b] = 0;
      *(undefined2 *)(param_1 + 0x1f) = 0;
      param_1[0x20] = 0;
      *(undefined1 *)(param_1 + 0x21) = 0;
      *(int *)(param_1 + 0x22) = (int)param_2;
      *(uint *)((longlong)param_1 + 0x114) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
           (uVar1 & 0xffffff7f) << 0x18;
      *(char *)(param_1 + 0x23) = (char)(param_2 >> 0x20);
      return param_1;
    }
  }
LAB_180133f9b:
  *(undefined1 *)(param_1 + 1) = uVar6;
  *param_1 = 3;
  FUN_1801b2a70(param_3);
  return param_1;
}


