/* FUN_1801f8be0 @ 1801f8be0 */

void FUN_1801f8be0(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  uVar2 = 0;
  if (param_2 != (byte *)0x0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if ((*param_2 & 1) != 0) goto LAB_1801f8c19;
  }
  uVar1 = FUN_1801dca90();
LAB_1801f8c19:
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


