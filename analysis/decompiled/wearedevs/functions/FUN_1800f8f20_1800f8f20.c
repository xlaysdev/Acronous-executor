/* FUN_1800f8f20 @ 1800f8f20 */

void FUN_1800f8f20(ulonglong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,char param_7)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  byte local_8a;
  byte local_89;
  longlong local_78;
  
  local_78 = *param_2;
  lVar8 = param_2[1];
  local_89 = *(byte *)((longlong)param_2 + 0x14);
  local_8a = *(byte *)((longlong)param_2 + 0x15);
  uVar4 = *(uint *)(param_2 + 2);
  uVar7 = 0;
  uVar3 = 0;
  do {
    do {
      uVar6 = uVar4;
LAB_1800f8f83:
      if (lVar8 == 0) {
        uVar9 = param_4 - uVar3;
        if (param_4 < uVar3) {
LAB_1800f9385:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18021a248);
        }
        uVar10 = param_6 - uVar7;
        if (param_6 < uVar7) {
LAB_1800f9359:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar7,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18021a230);
        }
        uVar2 = uVar9;
        if (uVar10 < uVar9) {
          uVar2 = uVar10;
        }
        uVar2 = FUN_1800f93d0((void *)(param_3 + uVar3),uVar2);
        if (uVar10 < uVar2) {
LAB_1800f9345:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar2,uVar10,&PTR_s_C__Users_burne__cargo_registry_s_18021a218);
        }
        if (uVar9 < uVar2) {
LAB_1800f936e:
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar2,uVar9,&PTR_s_C__Users_burne__cargo_registry_s_18021a200);
        }
        memcpy((void *)(param_5 + uVar7),(void *)(param_3 + uVar3),uVar2);
        uVar3 = uVar3 + uVar2;
        uVar7 = uVar7 + uVar2;
      }
      if (param_4 <= uVar3) {
        bVar11 = lVar8 != 0;
joined_r0x0001800f9315:
        if ((param_7 == '\0') || (!bVar11)) {
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800f931b;
        }
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *(undefined1 *)(param_1 + 1) = 2;
        *(char *)((longlong)param_1 + 9) = (char)local_78 + '\x01';
        goto LAB_1800f92e8;
      }
      if (param_6 <= uVar7 + 3) {
LAB_1800f92f1:
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_1800f931b;
      }
      uVar9 = uVar3 + 1;
      bVar1 = *(byte *)(param_3 + uVar3);
      if (lVar8 == 0) {
        while (uVar3 = uVar9, -1 < (char)bVar1) {
          *(byte *)(param_5 + uVar7) = bVar1;
          uVar9 = param_4 - uVar3;
          if (param_4 < uVar3) goto LAB_1800f9385;
          uVar7 = uVar7 + 1;
          uVar10 = param_6 - uVar7;
          if (param_6 < uVar7) goto LAB_1800f9359;
          uVar2 = uVar9;
          if (uVar10 < uVar9) {
            uVar2 = uVar10;
          }
          uVar2 = FUN_1800f93d0((void *)(param_3 + uVar3),uVar2);
          if (uVar10 < uVar2) goto LAB_1800f9345;
          if (uVar9 < uVar2) goto LAB_1800f936e;
          memcpy((void *)(param_5 + uVar7),(void *)(param_3 + uVar3),uVar2);
          uVar3 = uVar3 + uVar2;
          uVar7 = uVar7 + uVar2;
          if (param_4 <= uVar3) {
            bVar11 = false;
            goto joined_r0x0001800f9315;
          }
          if (param_6 <= uVar7 + 3) goto LAB_1800f92f1;
          uVar9 = uVar3 + 1;
          bVar1 = *(byte *)(param_3 + uVar3);
        }
        if (bVar1 < 0xc2) {
LAB_1800f9338:
          *(undefined2 *)(param_1 + 1) = 0x102;
          goto LAB_1800f92e8;
        }
        if (bVar1 < 0xe0) {
          param_2[1] = 1;
          uVar6 = (uint)(bVar1 & 0x1f);
          *(uint *)(param_2 + 2) = (uint)(bVar1 & 0x1f);
          lVar8 = 1;
        }
        else {
          if (bVar1 < 0xf0) {
            if (bVar1 == 0xe0) {
              *(undefined1 *)((longlong)param_2 + 0x14) = 0xa0;
              local_89 = 0xa0;
            }
            else if (bVar1 == 0xed) {
              *(undefined1 *)((longlong)param_2 + 0x15) = 0x9f;
              local_8a = 0x9f;
            }
            param_2[1] = 2;
            bVar1 = bVar1 & 0xf;
            lVar8 = 2;
          }
          else {
            if (0xf4 < bVar1) goto LAB_1800f9338;
            if (bVar1 == 0xf4) {
              *(undefined1 *)((longlong)param_2 + 0x15) = 0x8f;
              local_8a = 0x8f;
            }
            else if (bVar1 == 0xf0) {
              *(undefined1 *)((longlong)param_2 + 0x14) = 0x90;
              local_89 = 0x90;
            }
            param_2[1] = 3;
            bVar1 = bVar1 & 7;
            lVar8 = 3;
          }
          uVar6 = (uint)bVar1;
          *(uint *)(param_2 + 2) = (uint)bVar1;
        }
        goto LAB_1800f8f83;
      }
      if ((bVar1 < local_89) || (local_8a < bVar1)) {
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *(undefined2 *)((longlong)param_2 + 0x14) = 0xbf80;
        *(undefined1 *)(param_1 + 1) = 2;
        *(char *)((longlong)param_1 + 9) = (char)local_78 + '\x01';
LAB_1800f92e8:
        *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_1800f931b:
        *param_1 = uVar3;
        param_1[2] = uVar7;
        return;
      }
      *(undefined2 *)((longlong)param_2 + 0x14) = 0xbf80;
      uVar4 = uVar6 * 0x40 + (bVar1 & 0x3f);
      *(uint *)(param_2 + 2) = uVar4;
      local_78 = local_78 + 1;
      *param_2 = local_78;
      local_89 = 0x80;
      local_8a = 0xbf;
      uVar3 = uVar9;
    } while (local_78 != lVar8);
    bVar5 = (byte)uVar6;
    bVar1 = (byte)(bVar1 & 0x3f);
    if (lVar8 == 3) {
      *(byte *)(param_5 + uVar7) = (byte)((uVar6 & 0x3ffffff) >> 0xc) | 0xf0;
      *(byte *)(param_5 + 1 + uVar7) = (byte)((uVar6 & 0x3ffffff) >> 6) & 0x3f | 0x80;
      *(byte *)(param_5 + 2 + uVar7) = bVar5 & 0x3f | 0x80;
      *(byte *)(param_5 + 3 + uVar7) = bVar1 | 0x80;
      uVar7 = uVar7 + 4;
LAB_1800f9264:
    }
    else {
      if ((uVar4 & 0xffff) < 0x800) {
        *(byte *)(param_5 + uVar7) = bVar5 | 0xc0;
        *(byte *)(param_5 + 1 + uVar7) = bVar1 | 0x80;
        uVar7 = uVar7 + 2;
        goto LAB_1800f9264;
      }
      *(byte *)(param_5 + uVar7) = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
      *(byte *)(param_5 + 1 + uVar7) = bVar5 & 0x3f | 0x80;
      *(byte *)(param_5 + 2 + uVar7) = bVar1 | 0x80;
      uVar7 = uVar7 + 3;
    }
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    uVar4 = 0;
    local_78 = 0;
    lVar8 = 0;
  } while( true );
}


