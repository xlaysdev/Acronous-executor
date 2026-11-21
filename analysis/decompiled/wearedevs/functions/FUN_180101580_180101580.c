/* FUN_180101580 @ 180101580 */

uint * FUN_180101580(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uVar1 = QueryContextAttributesW(param_2,4,&local_28);
  if (uVar1 == 0) {
    param_1[5] = local_18;
    *(undefined8 *)(param_1 + 1) = local_28;
    *(undefined8 *)(param_1 + 3) = uStack_20;
  }
  else {
    *(ulonglong *)(param_1 + 2) = (ulonglong)uVar1 << 0x20 | 2;
  }
  *param_1 = (uint)(uVar1 != 0);
  return param_1;
}


