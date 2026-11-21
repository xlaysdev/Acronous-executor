/* FUN_18009e970 @ 18009e970 */

void FUN_18009e970(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 == *(undefined8 **)(param_2 + 0x18)) {
    *(undefined2 *)param_1 = 2;
    return;
  }
  *(undefined8 **)(param_2 + 8) = puVar1 + 4;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}


