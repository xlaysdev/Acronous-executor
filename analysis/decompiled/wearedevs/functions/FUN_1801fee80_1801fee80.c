/* FUN_1801fee80 @ 1801fee80 */

undefined8 FUN_1801fee80(longlong *param_1,byte param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  char local_78;
  char local_77;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1801cb8a0(&local_68,param_1);
  uVar9 = (uint)local_68;
  if ((char)local_68 == '\x01') {
    return local_60;
  }
  uVar11 = (uint)local_68._2_2_;
  uVar13 = (uint)local_68._2_2_;
  if ((param_2 & (uVar13 & 0xfc00) == 0xdc00) != 0) {
    local_68 = 0x14;
    uVar8 = param_1[2];
    if ((ulonglong)param_1[1] < uVar8) {
      local_4a = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar8,param_1[1],&PTR_s_C__Users_burne__cargo_registry_s_180289040);
    }
    lVar6 = *param_1;
    local_4a = 1;
    lVar12 = lVar6;
    uVar5 = (**(code **)PTR_PTR_1802fd598)(10,lVar6,lVar6 + uVar8);
    if ((uVar5 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (lVar12 - lVar6) + 1;
    }
    local_4a = 1;
    lVar6 = (**(code **)PTR_PTR_1802fd590)(10,lVar6,lVar6 + lVar12);
    local_4a = 0;
    uVar7 = FUN_1801ff730(&local_68,lVar6 + 1,uVar8 - lVar12);
    return uVar7;
  }
  if (0xfbff < (ushort)(local_68._2_2_ + 0x2400)) {
    if (param_2 != 0) {
      uVar8 = param_1[1];
      uVar5 = param_1[2];
      if (uVar8 <= uVar5) {
        local_68 = 4;
        if (uVar8 < uVar5) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar5,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
        }
        lVar6 = *param_1;
        local_49 = 1;
        lVar12 = lVar6;
        uVar8 = (**(code **)PTR_PTR_1802fd598)(10,lVar6,lVar6 + uVar5);
        if ((uVar8 & 1) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (lVar12 - lVar6) + 1;
        }
        local_49 = 1;
        lVar6 = (**(code **)PTR_PTR_1802fd590)(10,lVar6,lVar6 + lVar12);
        local_49 = 0;
        uVar7 = FUN_1801ff730(&local_68,lVar6 + 1,uVar5 - lVar12);
        return uVar7;
      }
      cVar2 = *(char *)(*param_1 + uVar5);
      param_1[2] = uVar5 + 1;
      if (cVar2 == '\\') {
        local_68._0_4_ = uVar9;
        FUN_1801cad50(&local_78,param_1);
        if (local_78 != '\0') {
          return local_70;
        }
        param_1[2] = uVar5 + 2;
        if (local_77 == 'u') {
          FUN_1801cb8a0(&local_68,param_1);
          if ((char)local_68 != '\0') {
            return local_60;
          }
          uVar13 = (uint)local_68 >> 0x10;
          if ((uVar13 + 0x2000 & 0xffff) < 0xfc00) {
            local_68 = 0x14;
            uVar8 = param_1[2];
            if ((ulonglong)param_1[1] < uVar8) {
              local_4c = 1;
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,uVar8,param_1[1],&PTR_s_C__Users_burne__cargo_registry_s_180289040);
            }
            lVar6 = *param_1;
            local_4c = 1;
            lVar12 = lVar6;
            uVar5 = (**(code **)PTR_PTR_1802fd598)(10,lVar6,lVar6 + uVar8);
            if ((uVar5 & 1) == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = (lVar12 - lVar6) + 1;
            }
            local_4c = 1;
            lVar6 = (**(code **)PTR_PTR_1802fd590)(10,lVar6,lVar6 + lVar12);
            local_4c = 0;
            uVar7 = FUN_1801ff730(&local_68,lVar6 + 1,uVar8 - lVar12);
            return uVar7;
          }
LAB_1801ff289:
          iVar4 = (uVar11 + 0x2800 & 0xffff) * 0x400;
          uVar9 = uVar13 + 0x2400 & 0xffff;
          uVar11 = iVar4 + uVar9 + 0x10000;
          lVar6 = param_3[2];
          if ((ulonglong)(*param_3 - lVar6) < 4) {
            FUN_1801f6a80(param_3,lVar6,4,1,1);
            lVar6 = param_3[2];
          }
          lVar12 = param_3[1];
          *(byte *)(lVar12 + lVar6) = (byte)(uVar11 >> 0x12) | 0xf0;
          *(byte *)(lVar12 + 1 + lVar6) = (byte)(uVar11 >> 0xc) & 0x3f | 0x80;
          *(byte *)(lVar12 + 2 + lVar6) = (byte)(iVar4 + uVar9 >> 6) & 0x3f | 0x80;
          *(byte *)(lVar12 + 3 + lVar6) = (byte)uVar13 & 0x3f | 0x80;
          param_3[2] = param_3[2] + 4;
          return 0;
        }
      }
      local_68 = 0x17;
      uVar7 = FUN_1801cb230(param_1,&local_68);
      return uVar7;
    }
    do {
      uVar8 = param_1[1];
      uVar5 = param_1[2];
      if (uVar8 <= uVar5) {
        local_68 = 4;
        if (uVar8 < uVar5) {
          local_4b = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar5,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
        }
        lVar6 = *param_1;
        local_4b = 1;
        lVar12 = lVar6;
        uVar8 = (**(code **)PTR_PTR_1802fd598)(10,lVar6,lVar6 + uVar5);
        if ((uVar8 & 1) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (lVar12 - lVar6) + 1;
        }
        local_4b = 1;
        lVar6 = (**(code **)PTR_PTR_1802fd590)(10,lVar6,lVar6 + lVar12);
        local_4b = 0;
        uVar7 = FUN_1801ff730(&local_68,lVar6 + 1,uVar5 - lVar12);
        return uVar7;
      }
      lVar6 = *param_1;
      if (*(char *)(lVar6 + uVar5) != '\\') {
        FUN_1801cb150(uVar11,param_3);
        return 0;
      }
      uVar1 = uVar5 + 1;
      param_1[2] = uVar1;
      if (uVar8 <= uVar1) {
        local_68 = 4;
        local_4d = 1;
        lVar12 = lVar6;
        uVar8 = (**(code **)PTR_PTR_1802fd598)(10,lVar6,lVar6 + uVar1);
        if ((uVar8 & 1) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = (lVar12 - lVar6) + 1;
        }
        local_4d = 1;
        lVar6 = (**(code **)PTR_PTR_1802fd590)(10,lVar6,lVar6 + lVar12);
        local_4d = 0;
        uVar7 = FUN_1801ff730(&local_68,lVar6 + 1,uVar1 - lVar12);
        return uVar7;
      }
      if (*(char *)(lVar6 + uVar1) != 'u') {
        FUN_1801cb150(uVar11,param_3);
        uVar7 = FUN_1801cae50(param_1,0,param_3);
        return uVar7;
      }
      param_1[2] = uVar5 + 2;
      FUN_1801cb8a0(&local_68,param_1);
      if ((char)local_68 != '\0') {
        return local_60;
      }
      uVar13 = (uint)local_68._2_2_;
      if (0xfbff < (uVar13 + 0x2000 & 0xffff)) goto LAB_1801ff289;
      lVar6 = param_3[2];
      if ((ulonglong)(*param_3 - lVar6) < 4) {
        FUN_1801f6a80(param_3,lVar6,4,1,1);
        lVar6 = param_3[2];
      }
      lVar12 = param_3[1];
      *(undefined1 *)(lVar12 + lVar6) = 0xed;
      *(byte *)(lVar12 + 1 + lVar6) = (byte)(uVar11 >> 6) & 0x2f | 0x80;
      *(byte *)(lVar12 + 2 + lVar6) = (byte)uVar11 & 0x3f | 0x80;
      param_3[2] = param_3[2] + 3;
      uVar11 = uVar13;
    } while (0xfbff < (uVar13 + 0x2400 & 0xffff));
  }
  if (uVar13 < 0x80) {
    lVar6 = param_3[2];
    if (lVar6 == *param_3) {
      FUN_180201770(param_3);
    }
    *(byte *)(param_3[1] + lVar6) = (byte)uVar13;
    param_3[2] = lVar6 + 1;
    return 0;
  }
  lVar6 = param_3[2];
  if ((ulonglong)(*param_3 - lVar6) < 4) {
    FUN_1801f6a80(param_3,lVar6,4,1,1);
    pbVar10 = (byte *)(param_3[2] + param_3[1]);
  }
  else {
    pbVar10 = (byte *)(lVar6 + param_3[1]);
  }
  if (uVar13 < 0x800) {
    bVar3 = (byte)(uVar13 >> 6) | 0xc0;
    lVar6 = 2;
  }
  else {
    bVar3 = (byte)(uVar13 >> 0xc) | 0xe0;
    pbVar10[1] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
    lVar6 = 3;
  }
  *pbVar10 = bVar3;
  pbVar10[lVar6 + -1] = (byte)uVar13 & 0x3f | 0x80;
  param_3[2] = param_3[2] + lVar6;
  return 0;
}


