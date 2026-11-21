/* FUN_1801dcac0 @ 1801dcac0 */

undefined8 FUN_1801dcac0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  HANDLE pvVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  LOCK();
  lVar8 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar8,1) != *plVar1 < 0) goto LAB_1801dcb78;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar8 + 0x130) != 0) {
LAB_1801dcb32:
    local_48 = 0;
    local_44 = 0;
    local_88 = plVar1;
    local_40 = param_1;
    local_38 = plVar1;
    local_70 = FUN_1801d6150(&local_48,
                             "fatal runtime error: current thread handle already set during thread spawn, aborting\n"
                             ,0x55);
    if (local_70 != 0) {
      FUN_1801e2450(&local_70);
    }
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(7);
LAB_1801dcb78:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0x128);
  lVar4 = plVar1[2];
  if (lVar3 == 0) {
    *(longlong *)(lVar2 + 0x128) = lVar4;
  }
  else if (lVar3 != lVar4) goto LAB_1801dcb32;
  *(longlong **)(lVar8 + 0x130) = plVar1 + 2;
  pcVar7 = (char *)plVar1[3];
  if (pcVar7 == (char *)0x0) {
    if (DAT_1802fd820 != lVar4) goto LAB_1801dcc9f;
    pcVar7 = "main";
    lVar8 = 5;
  }
  else {
    lVar8 = plVar1[4];
  }
  local_40 = param_1;
  FUN_1801ee010(&local_88,pcVar7,lVar8);
  if ((char)local_88 == '\0') {
    FUN_1801db5d0(&local_70,local_80,local_78);
    lVar8 = local_70;
    if (SBORROW8(0,local_70)) {
      if (((uint)local_68 & 3) == 1) {
        local_58 = local_68 + -1;
        local_38 = *(longlong **)(local_68 + -1);
        local_50 = *(undefined8 **)(local_68 + 7);
        if ((code *)*local_50 != (code *)0x0) {
          (*(code *)*local_50)(local_38);
        }
        if (local_50[1] != 0) {
          thunk_FUN_1801d3330(local_38,local_50[1],local_50[2]);
        }
        lVar8 = 0x18;
        uVar9 = 8;
        local_68 = local_58;
LAB_1801dcc96:
        thunk_FUN_1801d3330(local_68,lVar8,uVar9);
      }
    }
    else {
      pvVar6 = GetCurrentThread();
      (*(code *)PTR_FUN_1802fd5e0)(pvVar6,local_68);
      if (lVar8 != 0) {
        lVar8 = lVar8 * 2;
        uVar9 = 2;
        goto LAB_1801dcc96;
      }
    }
  }
  param_1 = local_40;
LAB_1801dcc9f:
  uVar9 = param_1[1];
  lVar8 = param_1[2];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3970(param_1);
  }
  thunk_FUN_1801d3330(param_1,0x18,8);
  local_70 = CONCAT44(local_70._4_4_,0x5000);
  SetThreadStackGuarantee((PULONG)&local_70);
  local_40 = (undefined8 *)lVar8;
  local_38 = (longlong *)uVar9;
  (**(code **)(lVar8 + 0x18))(uVar9);
  if (*(longlong *)((longlong)local_40 + 8) != 0) {
    thunk_FUN_1801d3330(local_38,*(longlong *)((longlong)local_40 + 8),
                        *(undefined8 *)((longlong)local_40 + 0x10));
  }
  return 0;
}


