/* FUN_180066d90 @ 180066d90 */

undefined8 FUN_180066d90(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if (((uVar1 == 0) || (param_3 == 0)) || (uVar3 = *(ulonglong *)(param_1 + 0x10), uVar3 == 0)) {
    return 0;
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                  ,0x30,&DAT_18020e800);
  }
  if (uVar1 < uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *param_2 = (int)uVar3;
  *(undefined8 *)(param_2 + 2) = uVar2;
  return 1;
}


