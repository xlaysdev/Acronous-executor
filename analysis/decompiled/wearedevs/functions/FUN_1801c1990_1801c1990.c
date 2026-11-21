/* FUN_1801c1990 @ 1801c1990 */

char * FUN_1801c1990(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  char *local_68;
  char *local_60;
  char *local_58;
  longlong local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(char **)(param_1 + 0x10) != (char *)0x0) {
    return *(char **)(param_1 + 0x10);
  }
  FUN_1801d7a30(&local_68,"RAYON_NUM_THREADS",0x11);
  if (!SBORROW8(0,(longlong)local_68)) {
    if (local_68 == (char *)0x8000000000000001) {
      if (!SBORROW8(0,(longlong)local_60)) {
        if (local_50 != 0) {
          if (local_50 == 1) {
            cVar3 = *local_58;
            if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_1801c1afa;
          }
          else {
            cVar3 = *local_58;
          }
          uVar5 = (ulonglong)(cVar3 == '+');
          pcVar7 = (char *)(local_50 - uVar5);
          if (pcVar7 <= &DAT_00000010) {
            if (pcVar7 == (char *)0x0) {
              if (local_60 != (char *)0x0) {
                thunk_FUN_1801d3330(local_58,local_60,1);
                pcVar7 = local_60;
              }
            }
            else {
              lVar4 = 0;
              pcVar8 = (char *)0x0;
              do {
                if (9 < (byte)local_58[lVar4 + uVar5] - 0x30) goto LAB_1801c1afa;
                pcVar8 = (char *)((ulonglong)((byte)local_58[lVar4 + uVar5] - 0x30) +
                                 (longlong)pcVar8 * 10);
                lVar4 = lVar4 + 1;
                pcVar7 = (char *)0x0;
              } while (lVar4 != local_50 + -uVar5);
LAB_1801c1a95:
              if (local_60 != (char *)0x0) {
                thunk_FUN_1801d3330(local_58,local_60,1);
                pcVar7 = local_60;
              }
              if (pcVar8 != (char *)0x0) {
                return pcVar8;
              }
            }
            uVar5 = FUN_1801e04f0();
            if ((uVar5 & 1) == 0) {
              return pcVar7;
            }
            if (((uint)pcVar7 & 3) != 1) {
              return (char *)0x1;
            }
            local_48 = pcVar7 + -1;
            local_40 = *(undefined8 *)(pcVar7 + -1);
            local_38 = *(undefined8 **)(pcVar7 + 7);
            if ((code *)*local_38 != (code *)0x0) {
              (*(code *)*local_38)(local_40);
            }
            goto LAB_1801c1c9e;
          }
          lVar4 = 0;
          pcVar8 = (char *)0x0;
          while( true ) {
            if (lVar4 == local_50 + -uVar5) goto LAB_1801c1a95;
            uVar6 = (byte)local_58[lVar4 + uVar5] - 0x30;
            if (9 < uVar6) break;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = pcVar8;
            auVar1 = auVar1 * ZEXT816(10);
            bVar9 = auVar1._8_8_ != 0;
            pcVar7 = (char *)CONCAT71(auVar1._9_7_,bVar9);
            pcVar8 = (char *)((ulonglong)uVar6 + auVar1._0_8_);
            if ((bVar9) || (lVar4 = lVar4 + 1, CARRY8((ulonglong)uVar6,auVar1._0_8_))) break;
          }
        }
LAB_1801c1afa:
        if (local_60 != (char *)0x0) {
          pcVar7 = local_58;
          pcVar8 = local_60;
          goto LAB_1801c1b08;
        }
      }
    }
    else if (local_68 != (char *)0x0) {
      pcVar7 = local_60;
      pcVar8 = local_68;
LAB_1801c1b08:
      thunk_FUN_1801d3330(pcVar7,pcVar8,1);
    }
  }
  FUN_1801d7a30(&local_68,"RAYON_RS_NUM_CPUS",0x11);
  if (!SBORROW8(0,(longlong)local_68)) {
    if (local_68 == (char *)0x8000000000000001) {
      if (!SBORROW8(0,(longlong)local_60)) {
        if (local_50 != 0) {
          if (local_50 == 1) {
            cVar3 = *local_58;
            if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_1801c1c43;
          }
          else {
            cVar3 = *local_58;
          }
          uVar5 = (ulonglong)(cVar3 == '+');
          local_68 = (char *)(local_50 - uVar5);
          if (&DAT_00000010 < local_68) {
            lVar4 = 0;
            pcVar7 = (char *)0x0;
            while( true ) {
              if (lVar4 == local_50 + -uVar5) goto LAB_1801c1be4;
              uVar6 = (byte)local_58[lVar4 + uVar5] - 0x30;
              if (9 < uVar6) break;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = pcVar7;
              auVar2 = auVar2 * ZEXT816(10);
              bVar9 = auVar2._8_8_ != 0;
              local_68 = (char *)CONCAT71(auVar2._9_7_,bVar9);
              pcVar7 = (char *)((ulonglong)uVar6 + auVar2._0_8_);
              if ((bVar9) || (lVar4 = lVar4 + 1, CARRY8((ulonglong)uVar6,auVar2._0_8_))) break;
            }
          }
          else if (local_68 != (char *)0x0) {
            lVar4 = 0;
            pcVar7 = (char *)0x0;
            do {
              uVar6 = (byte)local_58[lVar4 + uVar5] - 0x30;
              local_68 = (char *)(ulonglong)uVar6;
              if (9 < uVar6) goto LAB_1801c1c43;
              pcVar7 = (char *)((ulonglong)uVar6 + (longlong)pcVar7 * 10);
              lVar4 = lVar4 + 1;
              local_68 = (char *)0x0;
            } while (lVar4 != local_50 + -uVar5);
LAB_1801c1be4:
            if (local_60 != (char *)0x0) {
              thunk_FUN_1801d3330(local_58,local_60,1);
              local_68 = local_60;
            }
            if (pcVar7 != (char *)0x0) {
              return pcVar7;
            }
            goto LAB_1801c1c56;
          }
        }
LAB_1801c1c43:
        if (local_60 != (char *)0x0) {
          pcVar7 = local_60;
          goto LAB_1801c1c51;
        }
      }
    }
    else if (local_68 != (char *)0x0) {
      local_58 = local_60;
      pcVar7 = local_68;
LAB_1801c1c51:
      thunk_FUN_1801d3330(local_58,pcVar7,1);
      local_68 = pcVar7;
    }
  }
LAB_1801c1c56:
  uVar5 = FUN_1801e04f0();
  if ((uVar5 & 1) == 0) {
    return local_68;
  }
  if (((uint)local_68 & 3) != 1) {
    return (char *)0x1;
  }
  local_48 = local_68 + -1;
  local_40 = *(undefined8 *)(local_68 + -1);
  local_38 = *(undefined8 **)(local_68 + 7);
  if ((code *)*local_38 != (code *)0x0) {
    (*(code *)*local_38)(local_40);
  }
LAB_1801c1c9e:
  if (local_38[1] != 0) {
    thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
  }
  thunk_FUN_1801d3330(local_48,0x18,8);
  return (char *)0x1;
}


