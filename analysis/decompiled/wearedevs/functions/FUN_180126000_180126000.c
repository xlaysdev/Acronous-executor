/* FUN_180126000 @ 180126000 */

/* WARNING: Type propagation algorithm not settling */

void * FUN_180126000(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_a8 [16];
  undefined4 local_98;
  int local_94;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  int local_54;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_30;
  int local_2c;
  
  FUN_18014ad00(local_a8);
  local_80 = *(undefined8 *)(param_2 + 0x1e);
  local_3c = param_2[0x23];
  local_40 = 1;
  local_94 = param_2[0x22];
  local_98 = 1;
  local_2c = param_2[0x24];
  local_30 = 1;
  piVar4 = (int *)FUN_18014acc0(local_a8,*(undefined8 *)(param_2 + 0x20));
  iVar1 = param_2[9];
  iVar2 = param_2[10];
  iVar3 = param_2[0xb];
  *piVar4 = param_2[8];
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  piVar4[0x16] = 1;
  piVar4[0x17] = 0;
  if (param_2[0xc] == 1) {
    FUN_18014ac80(local_a8,param_2[0xd]);
    iVar1 = *param_2;
  }
  else {
    iVar1 = *param_2;
  }
  if (iVar1 == 1) {
    local_70 = *(undefined8 *)(param_2 + 2);
    iVar1 = param_2[4];
  }
  else {
    iVar1 = param_2[4];
  }
  if (iVar1 == 1) {
    local_68 = *(undefined8 *)(param_2 + 6);
    iVar1 = param_2[0xe];
  }
  else {
    iVar1 = param_2[0xe];
  }
  if (iVar1 == 1) {
    local_54 = param_2[0xf];
    local_58 = 1;
    iVar1 = param_2[0x10];
  }
  else {
    iVar1 = param_2[0x10];
  }
  if (iVar1 == 1) {
    local_44 = param_2[0x11];
    local_48 = 1;
    iVar1 = param_2[0x1c];
  }
  else {
    iVar1 = param_2[0x1c];
  }
  if (iVar1 != 1000000000) {
    local_90 = *(undefined8 *)(param_2 + 0x1a);
    local_88 = iVar1;
  }
  memcpy(param_1,local_a8,0x90);
  return param_1;
}


