/* FUN_18015e970 @ 18015e970 */

undefined8 * FUN_18015e970(undefined8 *param_1,byte *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ushort uVar8;
  byte *pbVar9;
  undefined1 local_4e;
  undefined1 local_4d;
  uint local_4c;
  undefined8 *local_48;
  
  if ((ulonglong)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8)) <
      (ulonglong)(param_3 * 2)) {
    FUN_1801b2210(param_4,param_3 * 2,1);
  }
  if (param_3 != 0) {
    pbVar9 = param_2 + param_3;
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0;
    local_48 = param_1;
    do {
      bVar4 = *param_2;
      param_2 = param_2 + 1;
      local_4c = (uint)bVar4;
      uVar7 = uVar7 << 8 | local_4c;
      uVar5 = uVar6 | 8;
      do {
        while( true ) {
          uVar6 = uVar5 - 8;
          uVar2 = uVar3 << 8 | (ulonglong)(uVar7 >> ((byte)uVar6 & 0x1f) & 0xff);
          if (0xe < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar2,0xf00,&PTR_s_C__Users_burne__cargo_registry_s_18025dfc8);
          }
          uVar8 = *(ushort *)(&DAT_18025c160 + uVar2 * 2);
          if (-1 < (short)uVar8) break;
          uVar8 = uVar8 >> 8 & 0x7f;
          if (uVar8 == 0) {
            param_1 = local_48;
            goto LAB_18015ea5e;
          }
          uVar3 = (ulonglong)uVar8;
          uVar5 = uVar6;
          if (uVar6 < 8) goto LAB_18015e9d0;
        }
        local_4d = (undefined1)uVar8;
        FUN_1801b2af0(param_4,&local_4d,1);
        uVar5 = uVar5 - (uVar8 >> 8);
        uVar3 = 0;
        uVar6 = uVar5;
      } while (7 < uVar5);
LAB_18015e9d0:
      param_1 = local_48;
      uVar1 = local_4c;
    } while (param_2 != pbVar9);
    if (uVar6 == 0) {
      if (uVar3 != 0) goto LAB_18015ea5e;
    }
    else {
      bVar4 = (byte)uVar6;
      if (uVar3 == 0) {
        if ((-1 << (bVar4 & 0x1f) | uVar7) == 0xffffffff) goto LAB_18015eb7f;
        uVar5 = (ulonglong)(local_4c << (8 - bVar4 & 0x1f) & 0xfe);
      }
      else {
        uVar5 = (ulonglong)((int)uVar3 << 8 | local_4c << (8 - bVar4 & 0x1f) & 0xfe);
        if (0xe < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar5,0xf00,&PTR_s_C__Users_burne__cargo_registry_s_18025dfe0);
        }
      }
      uVar8 = *(ushort *)(&DAT_18025c160 + uVar5 * 2);
      if (((short)uVar8 < 0) || (uVar6 < uVar8 >> 8)) {
LAB_18015ea5e:
        *(undefined1 *)(param_1 + 1) = 6;
        *param_1 = 0;
        return param_1;
      }
      local_4e = (undefined1)uVar8;
      FUN_1801b2af0(param_4,&local_4e,1);
      uVar6 = uVar6 - (uVar8 >> 8);
      if (uVar6 != 0) {
        do {
          if ((-1 << ((byte)uVar6 & 0x1f) | uVar7) == 0xffffffff) break;
          uVar8 = *(ushort *)
                   (&DAT_18025c160 + (ulonglong)(uVar1 << (8 - (byte)uVar6 & 0x1f) & 0xff) * 2);
          if (((short)uVar8 < 0) || (uVar6 < uVar8 >> 8)) goto LAB_18015ea5e;
          local_4e = (undefined1)uVar8;
          FUN_1801b2af0(param_4,&local_4e,1);
          uVar6 = uVar6 - (uVar8 >> 8);
        } while (uVar6 != 0);
      }
    }
  }
LAB_18015eb7f:
  FUN_1801b2610(param_1,param_4);
  return param_1;
}


