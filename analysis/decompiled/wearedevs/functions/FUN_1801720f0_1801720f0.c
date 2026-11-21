/* FUN_1801720f0 @ 1801720f0 */

void FUN_1801720f0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong *local_70;
  undefined1 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar7 = param_4;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    LOCK();
    bVar10 = *(char *)(param_2 + 0x20) == '\0';
    if (bVar10) {
      *(char *)(param_2 + 0x20) = '\x01';
    }
    UNLOCK();
    if (!bVar10) {
      FUN_180200390(param_2 + 0x20);
    }
    puVar4 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
    }
    else {
      uVar6 = FUN_180200a50(param_2 + 0x18);
      local_48 = (undefined8 *)(CONCAT44(local_48._4_4_,uVar6) ^ 1);
    }
    local_50 = param_2;
    FUN_18017e660(param_2 + 0x18,param_2 + 0x28);
    lVar3 = local_50;
    if ((((char)local_48 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
      *(undefined1 *)(lVar3 + 0x21) = 1;
    }
    uVar7 = param_4 & 0xffffffff;
    LOCK();
    cVar5 = *(char *)(lVar3 + 0x20);
    *(char *)(lVar3 + 0x20) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar3 + 0x20);
      uVar7 = param_4 & 0xffffffff;
    }
  }
  local_60 = FUN_18018ca20(param_1 + 0x28,param_1,param_3,uVar7);
  if (local_60 != 0) {
    cVar5 = FUN_180171240(local_60);
    if (cVar5 != '#') {
      local_70 = &local_60;
      local_68 = &LAB_1801e3610;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180262588,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_1802625c0);
    }
    if (((uint)local_60 & 3) == 1) {
      local_58 = local_60 + -1;
      local_50 = *(longlong *)(local_60 + -1);
      local_48 = *(undefined8 **)(local_60 + 7);
      if ((code *)*local_48 != (code *)0x0) {
        (*(code *)*local_48)(local_50);
      }
      if (local_48[1] != 0) {
        thunk_FUN_1801d3330(local_50,local_48[1],local_48[2]);
      }
      thunk_FUN_1801d3330(local_58,0x18,8);
      uVar7 = *(ulonglong *)(param_1 + 0x10);
      goto joined_r0x0001801722de;
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0x10);
joined_r0x0001801722de:
  if (uVar7 != 0) {
    uVar9 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar9 * 0x10);
      if (lVar3 == 1) {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      else if (lVar3 != 0) {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + uVar9 * 0x10 + 8);
        uVar8 = (ulonglong)((uVar2 & 0x199) != 0);
        uVar7 = uVar8 + 2;
        if ((uVar2 & 0x114) == 0) {
          uVar7 = uVar8;
        }
        uVar8 = uVar7 + 4;
        if ((uVar2 & 0x118) == 0) {
          uVar8 = uVar7;
        }
        uVar7 = uVar8 + 8;
        if ((uVar2 & 0x110) == 0) {
          uVar7 = uVar8;
        }
        uVar8 = *(ulonglong *)(lVar3 + 0x10);
        do {
          LOCK();
          uVar1 = *(ulonglong *)(lVar3 + 0x10);
          bVar10 = uVar8 == uVar1;
          if (bVar10) {
            *(ulonglong *)(lVar3 + 0x10) =
                 (ulonglong)((uint)uVar8 + 0x10000 & 0x7fff0000) |
                 (ulonglong)((uint)uVar8 & 0x2f) | uVar2 >> 3 & 0x20 | uVar7;
          }
          else {
            uVar8 = uVar1;
          }
          UNLOCK();
        } while (!bVar10);
        FUN_180180a10();
        uVar7 = *(ulonglong *)(param_1 + 0x10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  return;
}


