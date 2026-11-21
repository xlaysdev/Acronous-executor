/* FUN_180066f70 @ 180066f70 */

longlong FUN_180066f70(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
LAB_180066fb9:
    lVar5 = 0;
    plVar1 = (longlong *)param_1[1];
    uVar2 = plVar1[5];
  }
  else {
    plVar1 = (longlong *)*param_1;
    uVar2 = plVar1[4];
    uVar4 = plVar1[1] - uVar2;
    if ((ulonglong)plVar1[1] < uVar2 || uVar4 == 0) goto LAB_180066fb9;
    if (uVar4 >> 0x20 != 0) goto LAB_18006705d;
    lVar5 = *plVar1;
    *param_2 = (int)uVar4;
    *(ulonglong *)(param_2 + 2) = uVar2 + lVar5;
    lVar5 = 1;
    plVar1 = (longlong *)param_1[1];
    uVar2 = plVar1[5];
  }
  if (uVar2 != 0) {
    if (*plVar1 == 0) {
      if ((param_3 != lVar5) && (uVar4 = plVar1[3], uVar4 != 0)) {
        if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                        ,0x30,&DAT_18020e800);
        }
        lVar6 = plVar1[2];
LAB_180067012:
        if (param_3 == lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,1,0,&DAT_18020a758);
        }
        param_2 = (undefined4 *)((longlong)param_2 + (ulonglong)(uint)((int)lVar5 << 4));
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
        *param_2 = (int)uVar4;
        *(longlong *)(param_2 + 2) = lVar6;
        return lVar5 + 1;
      }
    }
    else if (((int)*plVar1 == 1) && (param_3 != lVar5)) {
      uVar3 = plVar1[3];
      uVar4 = plVar1[2] - uVar3;
      if (uVar3 <= (ulonglong)plVar1[2] && uVar4 != 0) {
        if (uVar4 >> 0x20 != 0) {
LAB_18006705d:
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                        ,0x30,&DAT_18020a4a8);
        }
        lVar6 = uVar3 + plVar1[1];
        goto LAB_180067012;
      }
    }
  }
  return lVar5;
}


