/* FUN_1801985c0 @ 1801985c0 */

/* WARNING: Removing unreachable block (ram,0x0001801986c9) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801985c0(undefined4 *param_1,ulonglong *param_2,ulonglong param_3,undefined4 param_4,
                  byte *param_5,byte *param_6)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte *_Size;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong local_90;
  longlong local_78;
  byte *local_70;
  undefined *local_68;
  byte *local_60;
  byte *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  do {
    if (param_5 == param_6) {
LAB_1801988c0:
      *param_1 = 0;
      goto LAB_1801988c8;
    }
    bVar1 = *param_5;
    uVar9 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      pbVar5 = param_5 + 1;
      if (bVar1 < 0xe0) {
        param_5 = param_5 + 2;
        uVar9 = (uVar9 & 0x1f) << 6 | *pbVar5 & 0x3f;
      }
      else {
        uVar6 = param_5[2] & 0x3f | (*pbVar5 & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          param_5 = param_5 + 3;
          uVar9 = uVar6 | (uVar9 & 0x1f) << 0xc;
        }
        else {
          uVar9 = param_5[3] & 0x3f | uVar6 << 6 | (uVar9 & 7) << 0x12;
          if (uVar9 == 0x110000) goto LAB_1801988c0;
          param_5 = param_5 + 4;
        }
      }
    }
    else {
      param_5 = param_5 + 1;
    }
  } while (((uVar9 < 0xe) && ((0x2600U >> (uVar9 & 0x1f) & 1) != 0)) || (uVar9 == 0x110000));
  if (uVar9 == 0x23) {
    uVar8 = 0;
    local_90 = 0x2600;
    uVar3 = param_2[2];
    pbVar5 = param_6;
  }
  else {
    if (uVar9 != 0x3f) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("Programming error. parse_query_and_fragment() called without ? or #",0x43,
                    &PTR_s_C__Users_burne__cargo_registry_s_180267348);
    }
    local_90 = param_2[2];
    if (local_90 >> 0x20 != 0) goto LAB_18019875a;
    uVar3 = local_90;
    if (*param_2 == local_90) {
      FUN_1801f6a80(param_2,local_90,1,1,1);
      param_3 = param_3 & 0xffffffff;
      uVar3 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + uVar3) = 0x3f;
    param_2[2] = local_90 + 1;
    pbVar5 = (byte *)(param_3 & 0xffffffff);
    param_5 = (byte *)FUN_180195110(param_2,pbVar5,param_4,param_5,param_6);
    if (param_5 == (byte *)0x0) {
      *param_1 = 1;
      param_1[1] = (int)local_90;
LAB_1801988c8:
      param_1[2] = 0;
      return;
    }
    uVar8 = 1;
    uVar3 = param_2[2];
  }
  if (uVar3 >> 0x20 == 0) {
    uVar4 = uVar3;
    if (*param_2 == uVar3) {
      FUN_1801f6a80(param_2,uVar3,1,1,1);
      uVar4 = param_2[2];
    }
    uVar7 = param_2[1];
    *(undefined1 *)(uVar7 + uVar4) = 0x23;
    pbVar10 = (byte *)(uVar3 + 1);
    param_2[2] = (ulonglong)pbVar10;
    local_50 = (undefined4)param_2[6];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_48 = (undefined4)param_2[7];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x3c);
    local_60 = param_5;
    local_58 = pbVar5;
    local_78 = FUN_180191ad0(&local_60);
    if (local_78 != 0) {
      do {
        local_68 = &DAT_1802670c0;
        local_70 = pbVar5;
        pbVar2 = (byte *)FUN_1801aac60(&local_78);
        if (pbVar2 != (byte *)0x0) {
          _Size = pbVar5;
          do {
            pbVar5 = pbVar2;
            if ((byte *)(*param_2 - (longlong)pbVar10) < _Size) {
              FUN_1801f6a80(param_2,pbVar10,_Size,1,1);
              uVar7 = param_2[1];
              pbVar10 = (byte *)param_2[2];
            }
            memcpy(pbVar10 + uVar7,pbVar5,(size_t)_Size);
            pbVar10 = pbVar10 + (longlong)_Size;
            param_2[2] = (ulonglong)pbVar10;
            pbVar2 = (byte *)FUN_1801aac60(&local_78);
            _Size = pbVar5;
          } while (pbVar2 != (byte *)0x0);
        }
        local_78 = FUN_180191ad0(&local_60);
      } while (local_78 != 0);
    }
    *param_1 = uVar8;
    param_1[1] = (int)local_90;
    param_1[2] = 1;
    param_1[3] = (int)uVar3;
    return;
  }
LAB_18019875a:
  *(undefined1 *)(param_1 + 1) = 9;
  *param_1 = 2;
  return;
}


