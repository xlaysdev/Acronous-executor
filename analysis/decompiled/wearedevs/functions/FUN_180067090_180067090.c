/* FUN_180067090 @ 180067090 */

ulonglong FUN_180067090(undefined8 *param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    uVar4 = 0;
    bVar5 = true;
  }
  else {
    uVar4 = param_1[1];
    if (uVar4 == 0) {
      uVar4 = 0;
      uVar2 = param_1[4];
      puVar3 = param_2;
joined_r0x00018006714a:
      if (uVar2 != 0) {
        if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                        ,0x30,&DAT_18020e800);
        }
        uVar1 = param_1[3];
        *puVar3 = (int)uVar2;
        *(undefined8 *)(puVar3 + 2) = uVar1;
        uVar4 = uVar4 + 1;
      }
    }
    else {
      if (uVar4 >> 0x20 != 0) goto LAB_180067173;
      uVar1 = *param_1;
      *param_2 = (int)uVar4;
      *(undefined8 *)(param_2 + 2) = uVar1;
      uVar4 = 1;
      if (param_3 != 1) {
        puVar3 = param_2 + 4;
        uVar2 = param_1[4];
        goto joined_r0x00018006714a;
      }
    }
    bVar5 = uVar4 == param_3;
    if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar4,param_3,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18020a8c0);
    }
  }
  if ((bVar5) || (uVar2 = param_1[7], uVar2 == 0)) {
    return uVar4;
  }
  if (uVar2 >> 0x20 == 0) {
    param_2 = (undefined4 *)((longlong)param_2 + (ulonglong)(uint)((int)uVar4 << 4));
    uVar1 = param_1[6];
    *param_2 = (int)uVar2;
    *(undefined8 *)(param_2 + 2) = uVar1;
    return uVar4 + 1;
  }
LAB_180067173:
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                ,0x30,&DAT_18020a4a8);
}


