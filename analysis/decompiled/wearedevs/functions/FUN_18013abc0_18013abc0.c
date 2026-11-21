/* FUN_18013abc0 @ 18013abc0 */

undefined1 * FUN_18013abc0(undefined1 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38;
  byte local_37;
  int local_34;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar2 = *param_2;
  FUN_1801620d0(lVar2 + 0x30,*param_3);
  lVar3 = 3;
  plVar1 = (longlong *)(lVar2 + 0x10);
  LOCK();
  lVar2 = *plVar1;
  if (lVar2 == 3) {
    *plVar1 = 0;
  }
  else {
    lVar3 = lVar2;
  }
  UNLOCK();
  if (lVar3 == 3) {
LAB_18013ac1c:
    *param_1 = 5;
  }
  else {
    if (lVar3 == 4) {
      FUN_18014f8d0(&local_38,0xb00000003);
      if (local_38 == '\x03') goto LAB_18013ac1c;
      if (local_38 != '\x04') {
        uVar4 = (ulonglong)local_37;
        if (local_38 == '\0') {
          local_30 = local_30 & 0xffffffff;
          uVar5 = 0;
        }
        else if (local_38 == '\x01') {
          local_48 = local_18;
          local_58 = CONCAT44(uStack_24,local_28);
          uStack_50 = CONCAT44(uStack_1c,uStack_20);
          uVar5 = 1;
        }
        else {
          local_34 = -(int)local_30;
          if (SBORROW8(0,local_30)) {
            local_30 = uVar4 << 0x20 | 3;
          }
          else {
            local_58 = local_30;
            uStack_50 = CONCAT44(uStack_24,local_28);
            local_48 = CONCAT44(uStack_1c,uStack_20);
            local_34 = (int)&local_58;
            local_30 = FUN_18018c8e0();
            local_37 = (byte)uVar4;
          }
          uVar5 = 4;
        }
        *param_1 = uVar5;
        param_1[1] = local_37;
        *(int *)(param_1 + 4) = local_34;
        *(ulonglong *)(param_1 + 8) = local_30;
        *(ulonglong *)(param_1 + 0x10) = local_58;
        *(undefined8 *)(param_1 + 0x18) = uStack_50;
        *(undefined8 *)(param_1 + 0x20) = local_48;
        return param_1;
      }
    }
    *param_1 = 6;
  }
  return param_1;
}


