/* FUN_18010cd40 @ 18010cd40 */

bool FUN_18010cd40(ulonglong *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = param_5;
  uVar2 = param_1[1];
  if ((uint)uVar2 == 1000000000) {
    bVar3 = false;
  }
  else {
    uVar1 = *param_1;
    local_20 = param_4;
    uVar4 = FUN_1801df680(&local_20);
    bVar3 = uVar1 < uVar4;
    if (uVar4 == uVar1) {
      return (uint)uVar2 < param_2;
    }
  }
  return bVar3;
}


