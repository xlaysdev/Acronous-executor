/* FUN_180198980 @ 180198980 */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_180198980(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *_Size;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *local_58;
  byte *local_50;
  undefined *local_48;
  
  if (param_2 != param_3) {
    pbVar2 = param_2;
    do {
      pbVar4 = pbVar2;
      while( true ) {
        bVar1 = *pbVar4;
        uVar3 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          if (bVar1 < 0xe0) {
            param_2 = pbVar4 + 2;
            uVar3 = (uVar3 & 0x1f) << 6 | pbVar4[1] & 0x3f;
          }
          else {
            uVar5 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (bVar1 < 0xf0) {
              param_2 = pbVar4 + 3;
              uVar3 = uVar5 | (uVar3 & 0x1f) << 0xc;
            }
            else {
              param_2 = pbVar4 + 4;
              uVar3 = pbVar4[3] & 0x3f | uVar5 << 6 | (uVar3 & 7) << 0x12;
            }
          }
        }
        else {
          param_2 = pbVar4 + 1;
        }
        if ((0xd < uVar3) || ((0x2600U >> (uVar3 & 0x1f) & 1) == 0)) break;
        pbVar4 = param_2;
        if (param_2 == param_3) {
          return param_2;
        }
      }
      pbVar6 = (byte *)0x1;
      if ((0x7f < uVar3) && (pbVar6 = (byte *)0x2, 0x7ff < uVar3)) {
        pbVar6 = (byte *)(4 - (ulonglong)(uVar3 < 0x10000));
      }
      _Size = param_3 + -(longlong)pbVar4;
      if (pbVar6 < _Size) {
        if ((char)pbVar4[(longlong)pbVar6] < -0x40) goto LAB_180198bbb;
      }
      else if (pbVar6 != _Size) {
LAB_180198bbb:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(pbVar4,_Size,0,pbVar6,&PTR_s_C__Users_burne__cargo_registry_s_180266ef8);
      }
      if (((uVar3 == 0x23) || (uVar3 == 0x3f)) && ((char)param_1[8] == '\0')) {
        return pbVar2;
      }
      if (param_1[6] != 0) {
        _Size = *(byte **)(param_1[7] + 0x28);
        FUN_180191cf0(param_1[6],_Size,uVar3,param_2,param_3);
      }
      local_48 = &DAT_180267390;
      local_58 = pbVar4;
      local_50 = pbVar6;
      pbVar2 = (byte *)FUN_1801aac60(&local_58);
      if (pbVar2 != (byte *)0x0) {
        lVar7 = param_1[2];
        do {
          if ((byte *)(*param_1 - lVar7) < _Size) {
            FUN_1801f6a80(param_1,lVar7,_Size,1,1);
            lVar7 = param_1[2];
          }
          memcpy((void *)(lVar7 + param_1[1]),pbVar2,(size_t)_Size);
          lVar7 = lVar7 + (longlong)_Size;
          param_1[2] = lVar7;
          _Size = pbVar2;
          pbVar2 = (byte *)FUN_1801aac60(&local_58);
        } while (pbVar2 != (byte *)0x0);
      }
      pbVar2 = param_2;
    } while (param_2 != param_3);
  }
  return param_2;
}


