/* FUN_180194060 @ 180194060 */

byte * FUN_180194060(ulonglong *param_1,char param_2,byte *param_3,ulonglong param_4,byte *param_5,
                    byte *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  void *_Src;
  bool bVar5;
  byte *pbVar6;
  ulonglong uVar7;
  void *_Dst;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  size_t _Size;
  ulonglong uVar17;
  ulonglong local_60;
  
  bVar1 = *param_3;
  uVar16 = param_4 + 1;
LAB_1801940d9:
  local_60 = param_1[2];
  if (param_5 == param_6) {
    lVar13 = 0;
    pbVar6 = param_5;
  }
  else {
    lVar13 = (longlong)param_6 - (longlong)param_5;
    pbVar9 = param_5;
    do {
      bVar2 = *pbVar9;
      if ((char)bVar2 < '\0') {
        uVar15 = bVar2 & 0x1f;
        if (bVar2 < 0xe0) {
          pbVar6 = pbVar9 + 2;
          uVar11 = uVar15 << 6 | pbVar9[1] & 0x3f;
        }
        else {
          uVar11 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar6 = pbVar9 + 3;
            uVar11 = uVar11 | uVar15 << 0xc;
          }
          else {
            pbVar6 = pbVar9 + 4;
            uVar11 = pbVar9[3] & 0x3f | uVar11 << 6 | (bVar2 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar6 = pbVar9 + 1;
        uVar11 = (uint)bVar2;
      }
      if (uVar11 - 9 < 0x37) {
                    /* WARNING: Could not recover jumptable at 0x0001801941be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar6 = (byte *)(*(code *)(&DAT_180267974 +
                                   *(int *)(&DAT_180267974 + (ulonglong)(uVar11 - 9) * 4)))();
        return pbVar6;
      }
      if (uVar11 == 0x5c) {
        if ((char)param_1[8] != '\x02' && param_2 != '\x02') {
          FUN_180193e10(param_1,param_5,lVar13,(longlong)param_6 - (longlong)pbVar9,(char)param_1[8]
                        ,param_2);
          if (param_1[6] != 0) {
            (**(code **)(param_1[7] + 0x28))(param_1[6],0);
          }
          uVar17 = param_1[2];
          uVar14 = uVar17;
          if (*param_1 == uVar17) {
            FUN_1801f6a80(param_1,uVar17,1,1,1);
            uVar14 = param_1[2];
          }
          *(undefined1 *)(param_1[1] + uVar14) = 0x2f;
          uVar14 = uVar17 + 1;
          param_1[2] = uVar14;
          uVar8 = param_1[1];
          if (local_60 <= uVar17) {
            if (local_60 == 0) {
              if (uVar17 == 0) {
                bVar5 = true;
                uVar14 = 1;
                local_60 = 0;
                uVar17 = 0;
                goto LAB_180194587;
              }
            }
            else if (*(char *)(uVar8 + local_60) < -0x40) goto LAB_180195013;
            bVar5 = true;
            if (-0x41 < *(char *)(uVar8 + uVar17)) goto LAB_180194587;
          }
LAB_180195013:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(uVar8,uVar14,local_60,uVar17,
                        &PTR_s_C__Users_burne__cargo_registry_s_180266ff8);
        }
      }
      else if (uVar11 == 0x110000) {
        break;
      }
      if (param_1[6] != 0) {
        FUN_180191cf0(param_1[6],*(undefined8 *)(param_1[7] + 0x28),uVar11,pbVar6,param_6);
      }
      if ((param_2 == '\0') && (uVar17 = param_1[2], param_4 < uVar17)) {
        uVar14 = param_1[1];
        if ((uVar16 < uVar17) && (*(char *)(uVar14 + uVar16) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0();
        }
        if (((uVar17 - uVar16 == 2) && ((byte)((*(byte *)(uVar14 + uVar16) & 0xdf) + 0xbf) < 0x1a))
           && (*(char *)(uVar14 + 1 + uVar16) == ':')) {
          FUN_180193e10(param_1,param_5,lVar13,(longlong)param_6 - (longlong)pbVar9,(char)param_1[8]
                        ,0);
          uVar17 = param_1[2];
          uVar14 = uVar17;
          if (*param_1 == uVar17) {
            FUN_1801f6a80(param_1,uVar17,1,1,1);
            uVar14 = param_1[2];
          }
          *(undefined1 *)(param_1[1] + uVar14) = 0x2f;
          param_1[2] = uVar17 + 1;
          local_60 = local_60 + 1;
          param_5 = pbVar9;
          lVar13 = (longlong)param_6 - (longlong)pbVar9;
        }
      }
      pbVar9 = pbVar6;
    } while (pbVar6 != param_6);
  }
  FUN_180193e10(param_1,param_5,lVar13,0,(char)param_1[8],param_2);
  uVar8 = param_1[1];
  uVar17 = param_1[2];
  if ((uVar17 < local_60) ||
     ((local_60 < uVar17 && local_60 != 0 && (*(char *)(uVar8 + local_60) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(uVar8,uVar17,local_60,uVar17,&PTR_s_C__Users_burne__cargo_registry_s_180266fe0);
  }
  bVar5 = false;
  uVar14 = uVar17;
LAB_180194587:
  param_5 = pbVar6;
  switch(~local_60 + uVar17) {
  case 0:
    if (*(char *)(uVar8 + local_60) == '.') {
LAB_1801945eb:
      if (local_60 <= uVar14) {
        if ((local_60 < uVar14 && local_60 != 0) && (*(char *)(uVar8 + local_60) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180267028);
        }
        param_1[2] = local_60;
        uVar14 = local_60;
      }
      if ((uVar14 == 0) || (*(char *)((uVar8 - 1) + uVar14) != '/')) {
        uVar17 = uVar14;
        if (*param_1 == uVar14) {
          FUN_1801f6a80(param_1,uVar14,1,1,1);
          uVar8 = param_1[1];
          uVar17 = param_1[2];
        }
        *(undefined1 *)(uVar8 + uVar17) = 0x2f;
        param_1[2] = uVar14 + 1;
      }
    }
    break;
  case 1:
    if (*(short *)(uVar8 + local_60) == 0x2e2e) {
LAB_180194720:
      if (local_60 <= uVar14) {
        if ((local_60 < uVar14 && local_60 != 0) && (*(char *)(uVar8 + local_60) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180267010);
        }
        param_1[2] = local_60;
        uVar14 = local_60;
      }
      if ((uVar14 != 0) && (*(char *)((uVar8 - 1) + uVar14) == '/')) {
        uVar17 = uVar14 - 1;
        if ((uVar17 != 0) && (*(char *)(uVar8 + uVar17) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(uVar8,uVar14,0,uVar17,&PTR_s_C__Users_burne__cargo_registry_s_180267360);
        }
        uVar7 = uVar17;
        while( true ) {
          uVar12 = uVar8;
          uVar7 = FUN_1801f3060(0x2f,uVar8,uVar7);
          if ((uVar7 & 1) == 0) break;
          if ((uVar12 < uVar17) && (*(char *)(uVar8 + uVar12) == '/')) {
            if (uVar12 < param_4) break;
            lVar13 = uVar14 - uVar12;
            if (uVar14 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(uVar8,uVar14,uVar12,uVar14,
                            &PTR_s_C__Users_burne__cargo_registry_s_180267378);
            }
            if ((lVar13 != 0) && (lVar13 != 1)) {
              bVar2 = *(byte *)(uVar8 + 1 + uVar12);
              if ((char)bVar2 < -0x40) {
                    /* WARNING: Subroutine does not return */
                FUN_1802018d0(uVar8 + uVar12,lVar13,1,lVar13,
                              &PTR_s_C__Users_burne__cargo_registry_s_180266ee0);
              }
              if ((((1 < lVar13 - 1U) && ((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a)) &&
                  ((cVar3 = *(char *)(uVar8 + 2 + uVar12), cVar3 == '|' || (cVar3 == ':')))) &&
                 ((lVar13 - 1U == 2 ||
                  ((uVar15 = *(byte *)(uVar8 + 3 + uVar12) - 0x23, uVar15 < 0x3a &&
                   ((0x200000010001001U >> ((ulonglong)uVar15 & 0x3f) & 1) != 0)))))) break;
            }
            uVar17 = param_1[2];
            if (uVar17 != 0) {
              uVar14 = param_1[1];
              uVar8 = 0xffffffffffffffff;
              if (*(char *)((uVar14 - 1) + uVar17) < '\0') {
                bVar2 = *(byte *)((uVar14 - 2) + uVar17);
                if ((char)bVar2 < -0x40) {
                  bVar4 = *(byte *)((uVar14 - 3) + uVar17);
                  if ((char)bVar4 < -0x40) {
                    uVar15 = bVar4 & 0x3f | (*(byte *)((uVar14 - 4) + uVar17) & 7) << 6;
                  }
                  else {
                    uVar15 = bVar4 & 0xf;
                  }
                  uVar15 = bVar2 & 0x3f | uVar15 << 6;
                }
                else {
                  uVar15 = bVar2 & 0x1f;
                }
                if ((1 < uVar15) && (uVar8 = 0xfffffffffffffffe, 0x1f < uVar15)) {
                  uVar8 = (ulonglong)(uVar15 < 0x400) | 0xfffffffffffffffc;
                }
              }
              param_1[2] = uVar8 + uVar17;
            }
            break;
          }
          uVar7 = uVar12;
          if (uVar17 < uVar12) break;
        }
      }
      uVar17 = param_1[2];
      if (uVar17 != param_4) {
        if (param_2 == '\0') {
          uVar14 = param_1[1];
          if ((param_4 != 0) && ((uVar17 <= param_4 || (*(char *)(uVar14 + param_4) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0();
          }
          if (((uVar17 - param_4 == 2) &&
              ((byte)((*(byte *)(uVar14 + param_4) & 0xdf) + 0xbf) < 0x1a)) &&
             (*(char *)(uVar14 + 1 + param_4) == ':')) goto LAB_180194b6e;
        }
        FUN_180198be0(param_1,param_2);
      }
LAB_180194b6e:
      if (!bVar5) goto LAB_180194ce3;
      uVar17 = param_1[1];
      uVar14 = param_1[2];
      if ((uVar14 == 0) || (*(char *)((uVar17 - 1) + uVar14) != '/')) {
        uVar8 = uVar14;
        if (*param_1 == uVar14) {
          FUN_1801f6a80(param_1,uVar14,1,1,1);
          uVar17 = param_1[1];
          uVar8 = param_1[2];
        }
        *(undefined1 *)(uVar17 + uVar8) = 0x2f;
        param_1[2] = uVar14 + 1;
      }
      goto LAB_1801940d9;
    }
    if (((param_2 != '\0') || (local_60 != uVar16)) ||
       ((bVar2 = *(byte *)(uVar8 + local_60), 0x19 < (byte)((bVar2 & 0xdf) + 0xbf) ||
        ((bVar4 = *(byte *)(uVar8 + 1 + local_60), bVar4 != 0x7c && (bVar4 != 0x3a)))))) break;
    uVar15 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar15 = (bVar2 & 0x1f) << 6 | bVar4 & 0x3f;
    }
    if (uVar16 <= uVar14) {
      if ((uVar16 < uVar14 && uVar16 != 0) && (*(char *)(uVar8 + uVar16) < -0x40))
      goto LAB_180194fca;
      param_1[2] = uVar16;
      uVar14 = uVar16;
    }
    uVar7 = 2 - (ulonglong)(uVar15 < 0x80);
    uVar17 = uVar14;
    if (*param_1 - uVar14 < uVar7) {
      FUN_1801f6a80(param_1,uVar14,uVar7,1,1);
      uVar8 = param_1[1];
      uVar17 = param_1[2];
    }
    if (0x7f < uVar15) {
      *(byte *)(uVar8 + 1 + uVar17) = (byte)uVar15 & 0x3f | 0x80;
      uVar15 = (uint)(byte)((byte)(uVar15 >> 6) | 0xc0);
    }
    *(char *)(uVar8 + uVar17) = (char)uVar15;
    uVar14 = uVar14 + uVar7;
    param_1[2] = uVar14;
    uVar17 = uVar14;
    if (*param_1 == uVar14) {
      FUN_1801f6a80(param_1,uVar14,1,1,1);
      uVar17 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + uVar17) = 0x3a;
    uVar17 = uVar14 + 1;
    param_1[2] = uVar17;
    if (bVar5) {
      if (*param_1 == uVar17) {
        FUN_1801f6a80(param_1,uVar17,1,1,1);
        bVar5 = true;
        uVar17 = param_1[2];
      }
      *(undefined1 *)(param_1[1] + uVar17) = 0x2f;
      param_1[2] = uVar14 + 2;
    }
    if ((bVar1 & 1) == 0) break;
    if (param_1[6] != 0) {
      (**(code **)(param_1[7] + 0x28))(param_1[6],CONCAT71((int7)(uVar17 >> 8),5));
    }
    *param_3 = 0;
    bVar1 = 0;
    if (bVar5) goto LAB_1801940d9;
LAB_180194ced:
    _Src = (void *)param_1[1];
    uVar16 = param_1[2];
    if (param_4 == 0) {
      if (uVar16 == 0) {
        _Dst = (void *)0x1;
      }
      else {
        FUN_180027490();
        _Dst = (void *)thunk_FUN_1801d32d0(uVar16,1);
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(1,uVar16);
        }
      }
      param_1[2] = 0;
      memcpy(_Dst,_Src,uVar16);
      uVar17 = param_1[2];
      uVar14 = uVar17;
      if (*param_1 != uVar17) goto LAB_180194dd9;
    }
    else {
      if (param_4 < uVar16) {
        if (*(char *)((longlong)_Src + param_4) < -0x40) goto LAB_180194d09;
      }
      else if (uVar16 != param_4) {
LAB_180194d09:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_1802674c4,0x2b,&PTR_s_C__Users_burne__cargo_registry_s_180267058);
      }
      _Size = uVar16 - param_4;
      if (uVar16 < param_4) {
        FUN_1802016c6(param_4,uVar16,&PTR_s_C__Users_burne__cargo_registry_s_180267058);
LAB_180194fca:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180267040);
      }
      if (_Size == 0) {
        _Dst = (void *)0x1;
      }
      else {
        FUN_180027490();
        _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(1,_Size);
        }
      }
      param_1[2] = param_4;
      memcpy(_Dst,(void *)((longlong)_Src + param_4),_Size);
      uVar17 = param_1[2];
      uVar14 = uVar17;
      uVar16 = _Size;
      if (*param_1 != uVar17) goto LAB_180194dd9;
    }
    FUN_1801f6a80(param_1,uVar14,1,1,1);
    uVar17 = param_1[2];
LAB_180194dd9:
    *(undefined1 *)(param_1[1] + uVar17) = 0x2f;
    uVar14 = uVar14 + 1;
    param_1[2] = uVar14;
    uVar17 = 0;
    do {
      uVar8 = uVar17;
      if (uVar8 == uVar16) {
        uVar8 = uVar16;
        break;
      }
      pbVar9 = (byte *)(uVar8 + (longlong)_Dst);
      bVar1 = *pbVar9;
      uVar15 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pbVar10 = pbVar9 + 2;
          uVar15 = (uVar15 & 0x1f) << 6 | pbVar9[1] & 0x3f;
        }
        else {
          uVar11 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar10 = pbVar9 + 3;
            uVar15 = uVar11 | (uVar15 & 0x1f) << 0xc;
          }
          else {
            pbVar10 = pbVar9 + 4;
            uVar15 = pbVar9[3] & 0x3f | uVar11 << 6 | (uVar15 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar10 = pbVar9 + 1;
      }
      uVar17 = (longlong)pbVar10 - (longlong)_Dst;
    } while (uVar15 == 0x2f);
    uVar17 = uVar16 - uVar8;
    if (*param_1 - uVar14 < uVar17) {
      FUN_1801f6a80(param_1,uVar14,uVar17,1,1);
      uVar14 = param_1[2];
    }
    memcpy((void *)(param_1[1] + uVar14),(void *)(uVar8 + (longlong)_Dst),uVar17);
    param_1[2] = uVar14 + uVar17;
    if (uVar16 != 0) {
      thunk_FUN_1801d3330(_Dst,uVar16,1);
    }
    return pbVar6;
  case 2:
    if ((*(char *)(uVar8 + 2 + local_60) == 'e' && *(short *)(uVar8 + local_60) == 0x3225) ||
       (*(char *)(uVar8 + 2 + local_60) == 'E' && *(short *)(uVar8 + local_60) == 0x3225))
    goto LAB_1801945eb;
    break;
  case 3:
    if ((((*(int *)(uVar8 + local_60) == 0x2e653225) || (*(int *)(uVar8 + local_60) == 0x2e453225))
        || (*(int *)(uVar8 + local_60) == 0x6532252e)) || (*(int *)(uVar8 + local_60) == 0x4532252e)
       ) goto LAB_180194720;
    break;
  case 5:
    if (((*(short *)(uVar8 + 4 + local_60) == 0x6532 && *(int *)(uVar8 + local_60) == 0x25653225) ||
        (*(short *)(uVar8 + 4 + local_60) == 0x4532 && *(int *)(uVar8 + local_60) == 0x25653225)) ||
       ((*(short *)(uVar8 + 4 + local_60) == 0x6532 && *(int *)(uVar8 + local_60) == 0x25453225 ||
        (*(short *)(uVar8 + 4 + local_60) == 0x4532 && *(int *)(uVar8 + local_60) == 0x25453225))))
    goto LAB_180194720;
  }
  if (!bVar5) {
LAB_180194ce3:
    if (param_2 != '\0') {
      return pbVar6;
    }
    goto LAB_180194ced;
  }
  goto LAB_1801940d9;
}


