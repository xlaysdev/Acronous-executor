/* FUN_1801f0c70 @ 1801f0c70 */

undefined2 * FUN_1801f0c70(undefined2 *param_1,char *param_2,longlong param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined2 uVar7;
  char **ppcVar8;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  char *local_48;
  longlong local_40;
  
  local_48 = param_2;
  local_40 = param_3;
  uVar5 = FUN_1801f1060();
  lVar3 = local_40;
  pcVar2 = local_48;
  if (((uVar5 & 1) == 0) || (local_40 == 0)) {
LAB_1801f0d3f:
    bVar6 = false;
    uVar5 = 0;
    local_48 = param_2;
    local_40 = param_3;
  }
  else {
    local_40 = local_40 + -1;
    if (*local_48 != ':') goto LAB_1801f0d3f;
    local_68 = 0;
    local_58 = CONCAT35(local_58._5_3_,0x10000000a);
    ppcVar8 = &local_48;
    local_48 = local_48 + 1;
    uVar4 = FUN_1801f0df0();
    if ((uVar4 != 1) && (local_48 = pcVar2, local_40 = lVar3, (uVar4 & 1) == 0)) goto LAB_1801f0d3f;
    uVar5 = ((uVar5 & 0xffffffff00) >> 8) << 0x10 | (longlong)ppcVar8 << 0x30;
    bVar6 = true;
  }
  if (bVar6) {
    if (local_40 == 0) {
      uVar5 = uVar5 >> 0x10;
      uVar7 = 0;
LAB_1801f0dad:
      *(ulonglong *)(param_1 + 0xc) = local_58;
      *(ulonglong *)(param_1 + 4) = local_68;
      *(ulonglong *)(param_1 + 8) = uStack_60;
      *param_1 = uVar7;
      *(int *)(param_1 + 1) = (int)uVar5;
      param_1[3] = (short)(uVar5 >> 0x20);
      return param_1;
    }
  }
  else {
    FUN_1801f1800(&local_68,&local_48);
    uVar1 = local_58;
    if (((int)local_68 == 1) && (local_40 == 0)) {
      uVar5 = (local_68 >> 0x20) << 0x10;
      local_58 = local_50;
      local_68 = uStack_60;
      uStack_60 = uVar1;
      uVar7 = 1;
      goto LAB_1801f0dad;
    }
  }
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 2;
  return param_1;
}


