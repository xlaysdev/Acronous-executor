/* FUN_1800671b0 @ 1800671b0 */

ulonglong FUN_1800671b0(longlong param_1,int *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (param_3 == 0) {
    lVar8 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x32);
    bVar2 = *(byte *)(param_1 + 0x33);
    if (bVar2 == bVar1) {
      lVar8 = 0;
      uVar9 = *(ulonglong *)(param_1 + 0x10);
      piVar5 = param_2;
    }
    else {
      if ((bVar2 < bVar1) || (0x12 < bVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30((ulonglong)bVar1,bVar2,0x12,&PTR_s_C__Users_burne__cargo_registry_s_180214b08)
        ;
      }
      *param_2 = (uint)bVar2 - (uint)bVar1;
      *(ulonglong *)(param_2 + 2) = param_1 + 0x20 + (ulonglong)bVar1;
      lVar8 = 1;
      if (param_3 == 1) goto LAB_180067239;
      uVar9 = *(ulonglong *)(param_1 + 0x10);
      piVar5 = param_2 + 4;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                      ,0x30,&DAT_18020e800);
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      *piVar5 = (int)uVar9;
      *(undefined8 *)(piVar5 + 2) = uVar4;
      lVar6 = 1;
      goto LAB_18006723b;
    }
  }
LAB_180067239:
  lVar6 = 0;
LAB_18006723b:
  uVar9 = lVar8 + lVar6;
  if (param_3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar9,param_3,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18020a8c0);
  }
  if ((uVar9 == param_3) || (uVar3 = *(ulonglong *)(param_1 + 0x40), uVar3 == 0)) {
    return uVar9;
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                  ,0x30,&DAT_18020a4a8);
  }
  puVar7 = (undefined4 *)((longlong)param_2 + (ulonglong)(uint)((int)uVar9 << 4));
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *puVar7 = (int)uVar3;
  *(undefined8 *)(puVar7 + 2) = uVar4;
  return uVar9 + 1;
}


