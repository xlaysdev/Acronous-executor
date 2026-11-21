/* FUN_1801e9382 @ 1801e9382 */

ulonglong FUN_1801e9382(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined2 local_58;
  byte local_56;
  byte local_55;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar5 = FUN_1801edcb0("?",1);
      return uVar5;
    }
  }
  else {
    FUN_1801e6eaa(&local_88,param_1);
    uVar8 = (undefined7)((ulonglong)&local_88 >> 8);
    if (local_88 == 0) {
      if (param_1[4] != 0) {
        pcVar6 = "{invalid syntax}";
        if ((char)local_80 != '\0') {
          pcVar6 = "{recursion limit reached}";
        }
        cVar2 = FUN_1801edcb0(pcVar6,(local_80 & 0xff) * 9 + 0x10);
        uVar5 = CONCAT71(uVar8,1);
        if (cVar2 != '\0') goto LAB_1801e951a;
      }
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)local_80;
    }
    else {
      if ((local_80 & 1) == 0) {
        uVar10 = local_80 & 0x7ffffffffffffffe;
        local_70 = 0;
        local_68 = 2;
        local_80 = uVar10;
        local_78 = local_88 + uVar10;
        do {
          uVar4 = FUN_1801e6984(&local_88);
        } while (uVar4 < 0x110000);
        if (uVar4 == 0x110001) {
          lVar1 = param_1[4];
          if (lVar1 != 0) {
            cVar2 = FUN_1801f3d30(lVar1,0x22);
            uVar5 = CONCAT71(uVar8,1);
            if (cVar2 == '\0') {
              local_70 = 0;
              local_68 = 2;
              local_80 = uVar10;
              local_78 = local_88 + uVar10;
              uVar10 = FUN_1801e6984();
              if ((int)uVar10 != 0x110001) {
                do {
                  uVar11 = uVar10 & 0xffffffff;
                  uVar4 = (uint)uVar10;
                  if (uVar4 == 0x110000) {
                    /* WARNING: Subroutine does not return */
                    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,
                                  &DAT_1802927b0,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180292660);
                  }
                  if (uVar4 == 0x27) {
                    cVar2 = FUN_1801f3d30(lVar1,0x27);
                    if (cVar2 != '\0') goto LAB_1801e951a;
                  }
                  else {
                    if ((int)uVar4 < 0xd) {
                      if (uVar4 == 0) {
                        local_50 = 0x305c;
                        goto LAB_1801e95e8;
                      }
                      if (uVar4 == 9) {
                        local_50 = 0x745c;
                        goto LAB_1801e95e8;
                      }
                      if (uVar4 == 10) {
                        local_50 = 0x6e5c;
                        goto LAB_1801e95e8;
                      }
LAB_1801e95a6:
                      if (((uVar4 < 0x300) || (cVar2 = FUN_1801f3180(uVar11), cVar2 == '\0')) &&
                         (cVar2 = FUN_1801f3290(uVar11), cVar2 != '\0')) {
                        local_50 = (undefined2)uVar10;
                        uStack_4e = (undefined2)(uVar10 >> 0x10);
                        uVar10 = 0x81;
                        bVar3 = 0x80;
                        goto LAB_1801e95f5;
                      }
                      FUN_1801ead3e(&local_60,uVar11);
                      uStack_48 = local_58;
                      local_50 = (undefined2)local_60;
                      uStack_4e = (undefined2)(local_60 >> 0x10);
                      uStack_4c = (undefined4)(local_60 >> 0x20);
                      uVar10 = (ulonglong)local_55;
                      bVar3 = local_56;
                      if (local_55 <= local_56) goto LAB_1801e9638;
                    }
                    else {
                      if (uVar4 == 0xd) {
                        local_50 = 0x725c;
                      }
                      else if (uVar4 == 0x22) {
                        local_50 = 0x225c;
                      }
                      else {
                        if (uVar4 != 0x5c) goto LAB_1801e95a6;
                        local_50 = 0x5c5c;
                      }
LAB_1801e95e8:
                      uStack_4e = 0;
                      uStack_4c = 0;
                      uStack_48 = 0;
                      uVar10 = 2;
                      bVar3 = 0;
LAB_1801e95f5:
                      local_58 = uStack_48;
                      local_60 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
                    }
                    uVar11 = local_60;
                    uVar9 = (ulonglong)bVar3;
                    local_58 = uStack_48;
                    do {
                      uVar7 = uVar11 & 0xffffffff;
                      if ((byte)uVar10 < 0x81) {
                        uVar7 = (ulonglong)*(byte *)((longlong)&local_60 + uVar9);
                      }
                      cVar2 = FUN_1801f3d30(lVar1,uVar7);
                      if (cVar2 != '\0') goto LAB_1801e951a;
                      uVar9 = uVar9 + 1;
                    } while (uVar9 < uVar10);
                  }
LAB_1801e9638:
                  uVar10 = FUN_1801e6984(&local_88);
                } while ((int)uVar10 != 0x110001);
              }
              uVar4 = FUN_1801f3d30(lVar1,0x22);
              uVar5 = (ulonglong)uVar4;
            }
            goto LAB_1801e951a;
          }
          goto LAB_1801e9518;
        }
      }
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
        uVar5 = CONCAT71(uVar8,1);
        if (cVar2 != '\0') goto LAB_1801e951a;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
LAB_1801e9518:
  uVar5 = 0;
LAB_1801e951a:
  return uVar5 & 0xffffffff;
}


