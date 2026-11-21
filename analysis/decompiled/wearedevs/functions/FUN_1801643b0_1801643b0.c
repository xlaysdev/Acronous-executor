/* FUN_1801643b0 @ 1801643b0 */

undefined8 FUN_1801643b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *local_8;
  
  uVar5 = param_2[3];
  if (uVar5 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("Timer already fired",0x13,&PTR_s_C__Users_burne__cargo_registry_s_180260960);
  }
  param_2[2] = uVar5;
  if (uVar5 <= (ulonglong)param_1[1]) {
    return 1;
  }
  uVar5 = param_1[1] ^ uVar5 | 0x3f;
  if (0xffffffffd < uVar5) {
    uVar5 = 0xffffffffe;
  }
  uVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar5 = (ulonglong)((uint)((int)(uVar3 ^ 1) * 0x2b) >> 8);
  if ((uVar3 ^ 1) < 0x24) {
    lVar6 = uVar5 * 0x410 + *param_1;
    uVar4 = (uint)((ulonglong)param_2[2] >>
                  ((char)*(undefined4 *)(*param_1 + 0x400 + uVar5 * 0x410) * '\x06' & 0x3fU)) & 0x3f
    ;
    uVar5 = (ulonglong)(uVar4 << 4);
    puVar1 = (undefined8 *)(lVar6 + uVar5);
    puVar2 = *(undefined8 **)(uVar5 + lVar6);
    if (puVar2 != param_2) {
      param_2[1] = puVar2;
      *param_2 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = param_2;
      }
      *puVar1 = param_2;
      if (puVar1[1] == 0) {
        puVar1[1] = param_2;
      }
      *(ulonglong *)(lVar6 + 0x408) = *(ulonglong *)(lVar6 + 0x408) | 1L << (sbyte)uVar4;
      return 0;
    }
    local_8 = param_2;
    uVar5 = FUN_1801fafda(CONCAT71((int7)((ulonglong)puVar2 >> 8),1),puVar1,&local_8,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201d02(uVar5,6,&PTR_s_C__Users_burne__cargo_registry_s_1802601f0);
}


