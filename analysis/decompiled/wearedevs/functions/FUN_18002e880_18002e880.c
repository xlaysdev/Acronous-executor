/* FUN_18002e880 @ 18002e880 */

void FUN_18002e880(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  size_t local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a0;
  ulonglong local_98;
  void *pvStack_90;
  ulonglong local_88;
  longlong lStack_80;
  ulonglong *local_78;
  ulonglong local_70;
  size_t local_68;
  void *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = param_2[3];
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar6 = param_2[2];
    uVar9 = *param_2;
    uVar1 = 0;
    uVar5 = uVar9;
    if (uVar6 < uVar9) {
      uVar5 = 0;
    }
    lVar10 = uVar6 - uVar5;
    uVar11 = uVar9 - lVar10;
    uVar8 = (uVar3 - uVar11) * 0x20;
    if (uVar3 <= uVar11) {
      uVar8 = 0;
    }
    uVar7 = param_2[1];
    uVar4 = lVar10 + uVar3;
    if (uVar11 < uVar3) {
      uVar4 = uVar9;
    }
    uVar4 = uVar4 - lVar10;
    if (uVar4 != 0) {
      if (uVar4 < 4) {
        uVar9 = 0;
        uVar1 = 0;
      }
      else {
        plVar12 = (longlong *)(uVar6 * 0x20 + uVar5 * -0x20 + uVar7 + 0x70);
        uVar9 = 0;
        uVar1 = 0;
        do {
          uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
          uVar9 = uVar9 + 4;
          plVar12 = plVar12 + 0x10;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar9);
      }
      if ((uVar4 & 3) != 0) {
        uVar11 = 0;
        do {
          uVar1 = uVar1 + *(longlong *)
                           (uVar6 * 0x20 + uVar9 * 0x20 + uVar5 * -0x20 + uVar7 + 0x10 + uVar11);
          uVar11 = uVar11 + 0x20;
        } while (((uint)uVar4 & 3) << 5 != uVar11);
      }
    }
    if (uVar8 != 0) {
      uVar6 = uVar8 >> 5;
      if (uVar8 < 0x80) {
        uVar9 = 0;
      }
      else {
        plVar12 = (longlong *)(uVar7 + 0x70);
        uVar9 = 0;
        do {
          uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
          uVar9 = uVar9 + 4;
          plVar12 = plVar12 + 0x10;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar9);
      }
      if ((uVar6 & 3) != 0) {
        uVar5 = 0;
        do {
          uVar1 = uVar1 + *(longlong *)(uVar7 + uVar9 * 0x20 + 0x10 + uVar5);
          uVar5 = uVar5 + 0x20;
        } while (((uint)uVar6 & 3) << 5 != uVar5);
      }
    }
  }
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    local_78 = param_2;
    local_70 = param_3;
    if (param_1[2] == 0) {
      if (uVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar6 = param_2[2];
        uVar9 = *param_2;
        uVar1 = 0;
        uVar5 = uVar9;
        if (uVar6 < uVar9) {
          uVar5 = 0;
        }
        lVar10 = uVar6 - uVar5;
        uVar11 = uVar9 - lVar10;
        uVar8 = (uVar3 - uVar11) * 0x20;
        if (uVar3 <= uVar11) {
          uVar8 = 0;
        }
        uVar7 = param_2[1];
        uVar4 = lVar10 + uVar3;
        if (uVar11 < uVar3) {
          uVar4 = uVar9;
        }
        uVar4 = uVar4 - lVar10;
        if (uVar4 != 0) {
          if (uVar4 < 4) {
            uVar3 = 0;
            uVar1 = 0;
          }
          else {
            plVar12 = (longlong *)(uVar6 * 0x20 + uVar5 * -0x20 + uVar7 + 0x70);
            uVar3 = 0;
            uVar1 = 0;
            do {
              uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
              uVar3 = uVar3 + 4;
              plVar12 = plVar12 + 0x10;
            } while ((uVar4 & 0xfffffffffffffffc) != uVar3);
          }
          if ((uVar4 & 3) != 0) {
            uVar9 = 0;
            do {
              uVar1 = uVar1 + *(longlong *)
                               (uVar6 * 0x20 + uVar3 * 0x20 + uVar5 * -0x20 + uVar7 + 0x10 + uVar9);
              uVar9 = uVar9 + 0x20;
            } while (((uint)uVar4 & 3) << 5 != uVar9);
          }
        }
        if (uVar8 != 0) {
          uVar3 = uVar8 >> 5;
          if (uVar8 < 0x80) {
            uVar6 = 0;
          }
          else {
            plVar12 = (longlong *)(uVar7 + 0x70);
            uVar6 = 0;
            do {
              uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
              uVar6 = uVar6 + 4;
              plVar12 = plVar12 + 0x10;
            } while ((uVar3 & 0xfffffffffffffffc) != uVar6);
          }
          if ((uVar3 & 3) != 0) {
            uVar9 = 0;
            do {
              uVar1 = uVar1 + *(longlong *)(uVar7 + uVar6 * 0x20 + 0x10 + uVar9);
              uVar9 = uVar9 + 0x20;
            } while (((uint)uVar3 & 3) << 5 != uVar9);
          }
        }
      }
      if (param_3 < uVar1) {
        uVar1 = param_3;
      }
      FUN_180036b50(local_e8,&local_78,uVar1);
      local_b8 = local_d8;
      uStack_b4 = uStack_d4;
      uStack_b0 = uStack_d0;
      uStack_ac = uStack_cc;
      FUN_1801b39f0(&local_a0,&local_c8);
      if ((char)local_a0 == '\0') {
        local_50 = param_1;
        FUN_1801b2a70(param_1);
        local_50[2] = local_88;
        local_50[3] = lStack_80;
        *local_50 = local_98;
        local_50[1] = (longlong)pvStack_90;
      }
      else {
        lVar10 = param_1[1];
        local_c8 = local_88;
        if ((ulonglong)(param_1[2] - lVar10) < local_88) {
          local_58 = lStack_80;
          local_60 = pvStack_90;
          local_50 = (longlong *)local_98;
          local_68 = local_88;
          FUN_1801b2210(param_1,local_88,1);
          lVar10 = param_1[1];
          pvStack_90 = local_60;
          local_98 = (ulonglong)local_50;
          local_c8 = local_68;
          lStack_80 = local_58;
        }
        memcpy((void *)(lVar10 + *param_1),pvStack_90,local_c8);
        uStack_c0 = param_1[2] - param_1[1];
        if (uStack_c0 < local_c8) {
          local_68 = local_c8;
          local_60 = pvStack_90;
          local_58 = lStack_80;
          local_50 = (longlong *)local_98;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_c8);
        }
        param_1[1] = param_1[1] + local_c8;
        (**(code **)(local_98 + 0x20))(lStack_80,pvStack_90,local_c8);
      }
    }
    else {
      if (uVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar6 = param_2[2];
        uVar9 = *param_2;
        uVar1 = 0;
        uVar5 = uVar9;
        if (uVar6 < uVar9) {
          uVar5 = 0;
        }
        lVar10 = uVar6 - uVar5;
        uVar11 = uVar9 - lVar10;
        uVar8 = (uVar3 - uVar11) * 0x20;
        if (uVar3 <= uVar11) {
          uVar8 = 0;
        }
        uVar7 = param_2[1];
        uVar4 = lVar10 + uVar3;
        if (uVar11 < uVar3) {
          uVar4 = uVar9;
        }
        uVar4 = uVar4 - lVar10;
        if (uVar4 != 0) {
          if (uVar4 < 4) {
            uVar9 = 0;
            uVar1 = 0;
          }
          else {
            plVar12 = (longlong *)(uVar6 * 0x20 + uVar5 * -0x20 + uVar7 + 0x70);
            uVar9 = 0;
            uVar1 = 0;
            do {
              uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
              uVar9 = uVar9 + 4;
              plVar12 = plVar12 + 0x10;
            } while ((uVar4 & 0xfffffffffffffffc) != uVar9);
          }
          if ((uVar4 & 3) != 0) {
            uVar11 = 0;
            do {
              uVar1 = uVar1 + *(longlong *)
                               (uVar6 * 0x20 + uVar9 * 0x20 + uVar5 * -0x20 + uVar7 + 0x10 + uVar11)
              ;
              uVar11 = uVar11 + 0x20;
            } while (((uint)uVar4 & 3) << 5 != uVar11);
          }
        }
        if (uVar8 != 0) {
          uVar6 = uVar8 >> 5;
          if (uVar8 < 0x80) {
            uVar9 = 0;
          }
          else {
            plVar12 = (longlong *)(uVar7 + 0x70);
            uVar9 = 0;
            do {
              uVar1 = uVar1 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
              uVar9 = uVar9 + 4;
              plVar12 = plVar12 + 0x10;
            } while ((uVar6 & 0xfffffffffffffffc) != uVar9);
          }
          if ((uVar6 & 3) != 0) {
            uVar5 = 0;
            do {
              uVar1 = uVar1 + *(longlong *)(uVar7 + uVar9 * 0x20 + 0x10 + uVar5);
              uVar5 = uVar5 + 0x20;
            } while (((uint)uVar6 & 3) << 5 != uVar5);
          }
        }
      }
      if (param_3 < uVar1) {
        uVar1 = param_3;
      }
      if ((ulonglong)(param_1[2] - param_1[1]) < uVar1) {
        FUN_1801b2210(param_1,uVar1,1);
        uVar3 = param_2[3];
      }
      if (uVar3 != 0) {
        do {
          uVar1 = param_2[2];
          uVar6 = *param_2;
          uVar9 = param_2[1];
          uVar5 = uVar6;
          if (uVar1 < uVar6) {
            uVar5 = 0;
          }
          lVar10 = uVar1 - uVar5;
          uVar8 = uVar6 - lVar10;
          uVar11 = (uVar3 - uVar8) * 0x20;
          if (uVar3 <= uVar8) {
            uVar11 = 0;
          }
          uVar7 = lVar10 + uVar3;
          if (uVar8 < uVar3) {
            uVar7 = uVar6;
          }
          lVar2 = lVar10 * 0x20;
          uVar3 = 0;
          uVar7 = uVar7 - lVar10;
          if (uVar7 != 0) {
            if (uVar7 < 4) {
              uVar6 = 0;
              uVar3 = 0;
            }
            else {
              plVar12 = (longlong *)(uVar9 + lVar2 + 0x70);
              uVar6 = 0;
              uVar3 = 0;
              do {
                uVar3 = uVar3 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
                uVar6 = uVar6 + 4;
                plVar12 = plVar12 + 0x10;
              } while ((uVar7 & 0xfffffffffffffffc) != uVar6);
            }
            if ((uVar7 & 3) != 0) {
              uVar8 = 0;
              do {
                uVar3 = uVar3 + *(longlong *)
                                 (uVar1 * 0x20 + uVar6 * 0x20 + uVar5 * -0x20 + uVar9 + 0x10 + uVar8
                                 );
                uVar8 = uVar8 + 0x20;
              } while (((uint)uVar7 & 3) << 5 != uVar8);
            }
          }
          if (uVar11 != 0) {
            uVar1 = uVar11 >> 5;
            if (uVar11 < 0x80) {
              uVar6 = 0;
            }
            else {
              plVar12 = (longlong *)(uVar9 + 0x70);
              uVar6 = 0;
              do {
                uVar3 = uVar3 + plVar12[-0xc] + plVar12[-8] + plVar12[-4] + *plVar12;
                uVar6 = uVar6 + 4;
                plVar12 = plVar12 + 0x10;
              } while ((uVar1 & 0xfffffffffffffffc) != uVar6);
            }
            if ((uVar1 & 3) != 0) {
              uVar5 = 0;
              do {
                uVar3 = uVar3 + *(longlong *)(uVar6 * 0x20 + uVar9 + 0x10 + uVar5);
                uVar5 = uVar5 + 0x20;
              } while (((uint)uVar1 & 3) << 5 != uVar5);
            }
          }
          if (local_70 < uVar3) {
            uVar3 = local_70;
          }
          if (uVar3 == 0) {
            return;
          }
          _Src = *(void **)(uVar9 + 8 + lVar2);
          uVar3 = *(ulonglong *)(uVar9 + 0x10 + lVar2);
          if (local_70 < uVar3) {
            uVar3 = local_70;
          }
          lVar10 = param_1[1];
          if ((ulonglong)(param_1[2] - lVar10) < uVar3) {
            FUN_1801b2210(param_1,uVar3,1);
            lVar10 = param_1[1];
          }
          memcpy((void *)(lVar10 + *param_1),_Src,uVar3);
          local_98 = param_1[2] - param_1[1];
          if (local_98 < uVar3) {
            local_a0 = uVar3;
                    /* WARNING: Subroutine does not return */
            FUN_1801fc980(&local_a0);
          }
          param_1[1] = param_1[1] + uVar3;
          FUN_1800371e0(&local_78,uVar3);
          uVar3 = local_78[3];
          param_2 = local_78;
        } while (uVar3 != 0);
      }
    }
  }
  return;
}


