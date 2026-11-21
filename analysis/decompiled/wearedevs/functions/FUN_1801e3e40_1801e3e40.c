/* FUN_1801e3e40 @ 1801e3e40 */

longlong * FUN_1801e3e40(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  char *pcVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char local_68 [8];
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  FUN_1801f1b40(&local_50);
  if ((short)local_50 != 2) {
    FUN_180027490();
    plVar5 = (longlong *)thunk_FUN_1801d32d0(0x20,4);
    if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(4,0x20);
    }
    plVar5[2] = local_40;
    plVar5[3] = lStack_38;
    *plVar5 = local_50;
    plVar5[1] = lStack_48;
    *param_1 = (longlong)plVar5;
    param_1[1] = (longlong)plVar5;
    param_1[2] = 1;
    param_1[3] = (longlong)(plVar5 + 4);
    return param_1;
  }
  local_40 = 0;
  local_28 = 1;
  local_30 = 0x3a0000003a;
  local_50 = param_2;
  lStack_48 = param_3;
  lStack_38 = param_3;
  FUN_1801e5880(local_68,&local_50);
  if (local_68[0] == '\0') {
    ppuVar6 = &PTR_s_invalid_socket_address_180290e18;
    goto LAB_1801e3fa7;
  }
  uVar10 = param_3 - local_58;
  if (uVar10 != 0) {
    pcVar7 = (char *)(local_58 + param_2);
    if (uVar10 == 1) {
      cVar1 = *pcVar7;
      if ((cVar1 == '+') || (cVar1 == '-')) goto LAB_1801e3fa0;
    }
    else {
      cVar1 = *pcVar7;
    }
    uVar9 = (ulonglong)(cVar1 == '+');
    uVar11 = uVar10 - uVar9;
    if (uVar11 < 5) {
      if (uVar10 == uVar9) {
        uVar4 = 0;
      }
      else {
        uVar10 = 0;
        uVar4 = 0;
        do {
          if (9 < (byte)pcVar7[uVar10 + uVar9] - 0x30) goto LAB_1801e3fa0;
          uVar4 = uVar4 * 10 + ((byte)pcVar7[uVar10 + uVar9] - 0x30);
          uVar10 = uVar10 + 1;
        } while (uVar11 != uVar10);
      }
LAB_1801e3fc0:
      FUN_1801d8180(param_1,param_2,local_60,uVar4);
      return param_1;
    }
    uVar10 = 0;
    uVar4 = 0;
    do {
      if (uVar11 == uVar10) goto LAB_1801e3fc0;
      uVar3 = (ushort)(uVar4 * 10);
      if (((short)(uVar4 * 10 >> 0x10) != 0) ||
         (lVar2 = uVar10 + uVar9, 9 < (byte)pcVar7[lVar2] - 0x30)) break;
      uVar10 = uVar10 + 1;
      uVar8 = (ushort)((byte)pcVar7[lVar2] - 0x30);
      uVar4 = (uint)(ushort)(uVar3 + uVar8);
    } while (!CARRY2(uVar3,uVar8));
  }
LAB_1801e3fa0:
  ppuVar6 = &PTR_s_invalid_port_value_180290de8;
LAB_1801e3fa7:
  param_1[1] = (longlong)ppuVar6;
  *param_1 = 0;
  return param_1;
}


