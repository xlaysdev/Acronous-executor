/* FUN_180091680 @ 180091680 */

void FUN_180091680(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_2e;
  undefined1 local_2d;
  uint local_2c;
  undefined8 local_28;
  
  if (*param_1 == 0) {
    uVar3 = param_1[3];
  }
  else if ((int)*param_1 == 1) {
    uVar3 = 0;
    if ((ulonglong)param_1[3] <= (ulonglong)param_1[2]) {
      uVar3 = param_1[2] - param_1[3];
    }
  }
  else {
    uVar3 = 0;
  }
  if ((ulonglong)param_1[5] < uVar3) {
    uVar3 = param_1[5];
  }
  if ((*(ulonglong *)(param_2 + 8) ^ 0x7fffffffffffffff) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: dst.remaining_mut() >= len",0x2c,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020ec98);
  }
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x46);
  uVar2 = *(uint *)(param_1 + 8);
  local_28 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
             (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
             (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  FUN_1801b2af0(param_2,(longlong)&local_28 + 5,3);
  local_2e = 0;
  FUN_1801b2af0(param_2,&local_2e,1);
  local_2d = uVar1;
  FUN_1801b2af0(param_2,&local_2d,1);
  local_2c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  FUN_1801b2af0(param_2,&local_2c,4);
  FUN_180046ec0(param_2,param_1);
  return;
}


