/* FUN_18008e250 @ 18008e250 */

undefined8 FUN_18008e250(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined2 local_140;
  undefined8 local_13e;
  
  if (*(byte *)((longlong)param_1 + 0x11) == 2) {
    if (*param_1 != 0) {
      if (*(longlong *)(*param_1 + 0x10) == 1) {
        if ((*(int *)(param_3 + 0x128) != 4) ||
           ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
            *(ulonglong *)(param_3 + 0x1a0))) {
          uVar2 = FUN_18005ccd0(param_3 + 0x48);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          if (param_2 != (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(param_3 + 0x128) != 4) {
            return 1;
          }
          if ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
              *(ulonglong *)(param_3 + 0x1a0)) {
            return 1;
          }
        }
        local_13e = 0xb416870b7adb7c3b;
        local_140 = 5;
        cVar1 = FUN_18005b0b0(param_3 + 0x48,&local_140);
        if (cVar1 != '\r') {
          local_140 = CONCAT11(local_140._1_1_,cVar1);
          ppuVar3 = &PTR_s_C__Users_burne__cargo_registry_s_18020e5b8;
          goto LAB_18008e41a;
        }
        *(undefined8 *)(*param_1 + 0x10) = 2;
      }
      else {
        FUN_1801620d0(*param_1 + 0x18,*param_2);
      }
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x11) & 1) != 0) {
      return 0;
    }
    if ((*(int *)(param_3 + 0x128) != 4) ||
       ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
        *(ulonglong *)(param_3 + 0x1a0))) {
      uVar2 = FUN_18005ccd0(param_3 + 0x48);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      if (param_2 != (undefined8 *)0x0) {
        return 0;
      }
      if (*(int *)(param_3 + 0x128) != 4) {
        return 1;
      }
      if ((ulonglong)(*(longlong *)(param_3 + 0x180) - *(longlong *)(param_3 + 0x178)) <
          *(ulonglong *)(param_3 + 0x1a0)) {
        return 1;
      }
    }
    local_13e = *(undefined8 *)((longlong)param_1 + 0x12);
    local_140 = 5;
    cVar1 = FUN_18005b0b0(param_3 + 0x48,&local_140);
    if (cVar1 != '\r') {
      local_140 = CONCAT11(local_140._1_1_,cVar1);
      ppuVar3 = &PTR_s_C__Users_burne__cargo_registry_s_18020e5a0;
LAB_18008e41a:
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("invalid ping frame",0x12,&local_140,&DAT_18020e6a0,ppuVar3);
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  }
  return 0;
}


