/* FUN_180193680 @ 180193680 */

/* WARNING: Removing unreachable block (ram,0x000180193847) */
/* WARNING: Removing unreachable block (ram,0x000180193b2a) */
/* WARNING: Removing unreachable block (ram,0x000180193b43) */
/* WARNING: Removing unreachable block (ram,0x000180193868) */
/* WARNING: Removing unreachable block (ram,0x0001801938a7) */
/* WARNING: Removing unreachable block (ram,0x000180193ae3) */

size_t * FUN_180193680(size_t *param_1,byte *param_2,byte *param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  size_t *psVar3;
  longlong *_Src;
  longlong *plVar4;
  longlong lVar5;
  size_t _Size;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  size_t sVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte *local_c8;
  ulonglong local_b0;
  byte *local_a8;
  ulonglong local_a0;
  size_t local_90;
  size_t sStack_88;
  ulonglong local_80;
  byte local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  int7 iStack_6f;
  size_t *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (param_4 != '\0') {
    uVar7 = (longlong)param_3 - (longlong)param_2;
    local_c8 = param_2;
    if (uVar7 == 0) {
      local_a0 = 0;
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
      pbVar12 = param_2;
      do {
        bVar2 = *pbVar12;
        if ((char)bVar2 < '\0') {
          uVar10 = bVar2 & 0x1f;
          pbVar1 = pbVar12 + 1;
          if (bVar2 < 0xe0) {
            pbVar12 = pbVar12 + 2;
            uVar8 = uVar10 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar8 = pbVar12[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              pbVar12 = pbVar12 + 3;
              uVar8 = uVar8 | uVar10 << 0xc;
            }
            else {
              pbVar1 = pbVar12 + 3;
              pbVar12 = pbVar12 + 4;
              uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar2 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar12 = pbVar12 + 1;
          uVar8 = (uint)bVar2;
        }
        local_68 = param_1;
        if (uVar8 - 9 < 0x55) {
                    /* WARNING: Could not recover jumptable at 0x0001801937d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          psVar3 = (size_t *)
                   (*(code *)(&DAT_180267820 + *(int *)(&DAT_180267820 + (ulonglong)(uVar8 - 9) * 4)
                             ))();
          return psVar3;
        }
        lVar9 = 1;
        lVar5 = lVar5 + 1;
        if ((0x7f < uVar8) && (lVar9 = 2, 0x7ff < uVar8)) {
          lVar9 = 4 - (ulonglong)(uVar8 < 0x10000);
        }
        uVar6 = uVar6 + lVar9;
      } while (pbVar12 != param_3);
      if (lVar5 != 0) {
        do {
          if (local_c8 == param_3) break;
          bVar2 = *local_c8;
          uVar10 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            pbVar12 = local_c8 + 1;
            if (bVar2 < 0xe0) {
              local_c8 = local_c8 + 2;
              uVar10 = (uVar10 & 0x1f) << 6 | *pbVar12 & 0x3f;
            }
            else {
              uVar8 = local_c8[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                local_c8 = local_c8 + 3;
                uVar10 = uVar8 | (uVar10 & 0x1f) << 0xc;
              }
              else {
                pbVar12 = local_c8 + 3;
                local_c8 = local_c8 + 4;
                uVar10 = *pbVar12 & 0x3f | uVar8 << 6 | (uVar10 & 7) << 0x12;
                if (uVar10 == 0x110000) break;
              }
            }
          }
          else {
            local_c8 = local_c8 + 1;
          }
        } while ((((uVar10 < 0xe) && ((0x2600U >> (uVar10 & 0x1f) & 1) != 0)) ||
                 (uVar10 == 0x110000)) || (lVar5 = lVar5 + -1, lVar5 != 0));
      }
      if (uVar6 == 0) {
        local_a0 = 0;
      }
      else if (uVar6 < uVar7) {
        local_a0 = uVar6;
        if ((char)param_2[uVar6] < -0x40) goto LAB_180193d3f;
      }
      else {
        local_a0 = uVar7;
        if (uVar6 != uVar7) {
LAB_180193d3f:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(param_2,uVar7,0,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180266f68);
        }
      }
    }
    local_a8 = param_2;
    if (param_4 == '\x01') {
      if (local_a0 == 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0x8000000000000003;
        return param_1;
      }
      local_b0 = 0x8000000000000000;
      FUN_18019c3e0(&local_80,&local_b0);
    }
    else {
      local_b0 = 0x8000000000000000;
      FUN_18019c090(&local_80,&local_b0);
    }
    if (local_80 == 0x8000000000000003) {
      *(byte *)(param_1 + 1) = local_78;
      *param_1 = 0x8000000000000003;
    }
    else {
      param_1[2] = CONCAT71(iStack_6f,uStack_70);
      *(ulonglong *)((longlong)param_1 + 9) = CONCAT17(uStack_70,uStack_77);
      *param_1 = local_80;
      *(byte *)(param_1 + 1) = local_78;
      param_1[3] = (size_t)local_c8;
      param_1[4] = (size_t)param_3;
    }
    return param_1;
  }
  FUN_180198d10(&local_b0);
  if (local_b0 == 0x8000000000000001) {
    *(undefined1 *)(param_1 + 1) = local_a8._0_1_;
    *param_1 = 0x8000000000000003;
    return param_1;
  }
  local_68 = (size_t *)local_b0;
  uVar7 = ((ulonglong)local_a8 >> 8 & 0xffffffff) << 8 | (ulonglong)local_a8 & 0xffffff0000000000 |
          (ulonglong)local_a8 & 0xff;
  local_b0 = 0x8000000000000000;
  local_a8 = (byte *)uVar7;
  FUN_18019c3e0(&local_80,&local_b0);
  if (local_80 == 0x8000000000000003) {
    _Src = (longlong *)(ulonglong)local_78;
LAB_180193a74:
    *(char *)(param_1 + 1) = (char)_Src;
    *param_1 = 0x8000000000000003;
    goto joined_r0x000180193c77;
  }
  uVar6 = 0;
  if (0x8000000000000000 < local_80) {
    uVar6 = local_80;
  }
  _Src = (longlong *)CONCAT71(uStack_77,local_78);
  _Size = CONCAT71(iStack_6f,uStack_70);
  if ((uVar6 & 0x7fffffffffffffff) == 0) {
    if (SBORROW8(0,local_80)) {
      if (iStack_6f < 0) {
        uVar13 = 0;
LAB_180193bde:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar13,_Size);
      }
      if (_Size == 0) {
        plVar4 = (longlong *)0x1;
      }
      else {
        FUN_180027490(_Src,local_80,-local_80);
        uVar13 = 1;
        plVar4 = (longlong *)thunk_FUN_1801d32d0(_Size,1);
        if (plVar4 == (longlong *)0x0) goto LAB_180193bde;
      }
      memcpy(plVar4,_Src,_Size);
      local_80 = _Size;
      goto LAB_180193bee;
    }
    if (local_80 == 0x8000000000000002) goto LAB_180193a74;
  }
  else {
    if ((uVar6 & 0x7fffffffffffffff) == 1) {
      plVar4 = (longlong *)((ulonglong)_Src & 0xffffffff);
      local_80 = 0x8000000000000000;
    }
    else {
      plVar4 = _Src;
      local_80 = 0x8000000000000001;
    }
LAB_180193bee:
    _Src = plVar4;
  }
  sVar11 = 0x8000000000000001;
  uVar6 = (longlong)local_80 >> 0x3f & local_80 + 0x8000000000000001;
  if (uVar6 == 0) {
    if (_Size == 9) {
      if ((char)_Src[1] == 't' && *_Src == 0x736f686c61636f6c) {
        sVar11 = 0x8000000000000000;
        plVar4 = (longlong *)0x1;
        _Size = 0;
        goto joined_r0x000180193cb3;
      }
      _Size = 9;
    }
  }
  else {
    if (uVar6 == 1) {
      plVar4 = (longlong *)((ulonglong)_Src & 0xffffffff);
    }
    else {
      sVar11 = 0x8000000000000002;
      plVar4 = _Src;
    }
joined_r0x000180193cb3:
    if (0 < (longlong)local_80) {
      thunk_FUN_1801d3330(_Src,local_80,1);
    }
    local_80 = sVar11;
    _Src = plVar4;
  }
  *param_1 = local_80;
  param_1[1] = (size_t)_Src;
  param_1[2] = _Size;
  param_1[3] = local_90;
  param_1[4] = sStack_88;
joined_r0x000180193c77:
  if (((ulonglong)local_68 & 0x7fffffffffffffff) == 0) {
    return param_1;
  }
  thunk_FUN_1801d3330(uVar7,local_68,1);
  return param_1;
}


