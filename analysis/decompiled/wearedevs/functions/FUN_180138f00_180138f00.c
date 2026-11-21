/* FUN_180138f00 @ 180138f00 */

undefined8 FUN_180138f00(uint *param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  uint local_1c;
  uint local_18;
  byte local_11;
  
  uVar1 = *param_1;
  iVar3 = 6;
  if (3 < uVar1) {
    iVar3 = uVar1 - 4;
  }
  uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  switch(iVar3) {
  case 0:
    local_11 = param_2 ^ 1;
    local_18 = param_2 + 7;
    local_1c = 0;
    break;
  default:
    goto switchD_180138f3f_caseD_2;
  case 3:
    if ((char)param_1[1] != '\0') {
      return uVar2;
    }
    local_1c = (uint)*(byte *)((longlong)param_1 + 5);
    local_11 = 1;
    if (param_2 != 0) {
      local_11 = *(byte *)((longlong)param_1 + 5);
    }
    local_18 = param_2 + 7;
    break;
  case 5:
    if ((char)param_1[1] != '\0') {
      return uVar2;
    }
  case 1:
    local_1c = (uint)(param_2 ^ 1) * 9;
    local_11 = 1;
    local_18 = local_1c;
  }
  FUN_180132bb0();
  *param_1 = local_18;
  *(byte *)(param_1 + 1) = local_11;
  *(char *)((longlong)param_1 + 5) = (char)local_1c;
  uVar2 = CONCAT71((uint7)(uint3)(local_1c >> 8),0xd);
switchD_180138f3f_caseD_2:
  return uVar2;
}


