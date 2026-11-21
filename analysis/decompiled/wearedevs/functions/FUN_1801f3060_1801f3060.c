/* FUN_1801f3060 @ 1801f3060 */

undefined8 FUN_1801f3060(byte param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar5 = (int)param_3;
  uVar7 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  uVar2 = param_3;
  uVar6 = param_3;
  if (uVar7 <= param_3) {
    uVar6 = (ulonglong)(iVar5 - (int)uVar7 & 0xf);
    uVar2 = param_3 - uVar6;
    if (param_3 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar2,param_3,iVar5,&PTR_s_library_core_src_slice_memchr_rs_180293c38);
    }
    uVar6 = uVar7;
  }
  uVar7 = param_3;
  while (uVar7 != uVar2) {
    pbVar1 = (byte *)(param_2 + -1 + uVar7);
    uVar7 = uVar7 - 1;
    if (*pbVar1 == param_1) {
      return 1;
    }
  }
  do {
    uVar7 = uVar2;
    if (uVar7 <= uVar6) break;
    uVar3 = *(ulonglong *)(param_2 + -0x10 + uVar7) ^ (ulonglong)param_1 * 0x101010101010101;
    uVar4 = *(ulonglong *)(param_2 + -8 + uVar7) ^ (ulonglong)param_1 * 0x101010101010101;
    uVar2 = uVar7 - 0x10;
  } while ((~((0x101010101010100 - uVar4 | uVar4) & (0x101010101010100 - uVar3 | uVar3)) &
           0x8080808080808080) == 0);
  if (param_3 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar7,iVar5,&PTR_s_library_core_src_slice_memchr_rs_180293c20);
  }
  do {
    if (uVar7 == 0) {
      return 0;
    }
    pbVar1 = (byte *)(param_2 + -1 + uVar7);
    uVar7 = uVar7 - 1;
  } while (*pbVar1 != param_1);
  return 1;
}


