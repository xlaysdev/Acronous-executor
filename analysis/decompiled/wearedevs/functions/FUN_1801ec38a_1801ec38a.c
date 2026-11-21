/* FUN_1801ec38a @ 1801ec38a */

undefined8 FUN_1801ec38a(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1 + 1;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - param_3;
  uVar3 = *param_1;
  *param_1 = (ulonglong)((byte)(uVar2 < param_3 | (byte)uVar3) & 1);
  if (uVar2 < param_3 || ((byte)uVar3 & 1) != 0) {
    return 1;
  }
  uVar4 = FUN_1801f0c50(param_1[2]);
  return uVar4;
}


