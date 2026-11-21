/* FUN_18013acc0 @ 18013acc0 */

char * FUN_18013acc0(char *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_50;
  byte local_4f;
  uint local_4c;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar3 = *param_2;
  uVar4 = 0;
  puVar1 = (ulonglong *)(lVar3 + 0x10);
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    *puVar1 = 1;
  }
  else {
    uVar4 = uVar2;
  }
  UNLOCK();
  bVar7 = 9;
  if (uVar4 == 4) {
    pcVar5 = &local_50;
    uVar4 = FUN_18014f8d0(pcVar5,0xb00000003);
    if (local_50 != '\x03') {
      if (local_50 == '\x04') goto LAB_18013ad18;
      pcVar6 = (char *)(ulonglong)local_4f;
      pcVar5 = (char *)(ulonglong)local_4c;
      bVar7 = local_4f;
      if (local_50 == '\0') {
        uVar4 = local_48 & 0xffffffff;
        local_50 = '\0';
      }
      else if (local_50 == '\x01') {
        local_58 = local_30;
        local_68 = CONCAT44(uStack_3c,local_40);
        uStack_60 = CONCAT44(uStack_34,uStack_38);
        local_50 = '\x01';
        uVar4 = local_48;
      }
      else {
        if (SBORROW8(0,local_48)) {
          uVar4 = (longlong)pcVar6 << 0x20 | 3;
          pcVar6 = (char *)-local_48;
        }
        else {
          local_28 = local_48;
          local_20 = local_40;
          uStack_1c = uStack_3c;
          uStack_18 = uStack_38;
          uStack_14 = uStack_34;
          uVar4 = FUN_18018c8e0(pcVar6,&local_28);
        }
        local_50 = '\x04';
        pcVar5 = pcVar6;
      }
    }
  }
  else {
    if (uVar4 == 0) {
      FUN_180162080(lVar3 + 0x18);
LAB_18013ad18:
      *param_1 = '\x05';
      return param_1;
    }
    local_50 = '\x03';
    pcVar5 = param_1;
  }
  *param_1 = local_50;
  param_1[1] = bVar7;
  *(int *)(param_1 + 4) = (int)pcVar5;
  *(ulonglong *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = local_68;
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = local_58;
  return param_1;
}


