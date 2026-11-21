/* FUN_1800ad150 @ 1800ad150 */

undefined8 FUN_1800ad150(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 auStack_470 [2];
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined8 uStack_458;
  undefined4 auStack_450 [2];
  undefined8 uStack_448;
  undefined4 auStack_440 [2];
  ulonglong local_438 [128];
  
  uVar1 = param_3[1];
  uVar2 = param_3[4];
  uVar7 = uVar1 - uVar2;
  if (uVar1 < uVar2 || uVar7 == 0) {
    return 0;
  }
  uVar3 = *param_1;
  lVar4 = param_1[1];
  puStack_460 = (undefined *)0x1800ad191;
  cVar5 = (**(code **)(lVar4 + 0x38))(uVar3,0);
  if (cVar5 == '\0') {
    puStack_460 = (undefined *)0x1800ad244;
    uVar7 = (**(code **)(lVar4 + 0x20))(uVar3,param_2,*param_3 + uVar2,uVar7);
    if (uVar7 == 2) {
      return 2;
    }
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  else {
    lVar6 = 0x38;
    do {
      *(undefined4 *)((longlong)auStack_470 + lVar6) = 0;
      *(undefined8 *)((longlong)auStack_470 + lVar6 + 8) = 1;
      *(undefined4 *)((longlong)auStack_450 + lVar6 + -0x10) = 0;
      *(undefined8 *)((longlong)auStack_450 + lVar6 + -8) = 1;
      *(undefined4 *)((longlong)auStack_450 + lVar6) = 0;
      *(undefined8 *)((longlong)auStack_450 + lVar6 + 8) = 1;
      *(undefined4 *)((longlong)auStack_440 + lVar6) = 0;
      *(undefined8 *)((longlong)local_438 + lVar6) = 1;
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != 0x438);
    if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
      puStack_460 = (undefined *)0x1800ad2a0;
      FUN_180201ec0("assertion failed: buf.len() <= u32::MAX as usizeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\io\\io_slice\\windows.rs"
                    ,0x30,&DAT_18020a4a8);
    }
    local_438[1] = *param_3 + uVar2;
    local_438[0] = CONCAT44(local_438[0]._4_4_,(int)uVar7);
    puStack_460 = (undefined *)0x1800ad220;
    uVar7 = (**(code **)(lVar4 + 0x40))(uVar3,param_2,local_438,1);
    if (uVar7 == 2) {
      return 2;
    }
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  local_438[1] = 0;
  if (uVar2 <= uVar1) {
    local_438[1] = uVar1 - uVar2;
  }
  if (local_438[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    puStack_460 = &UNK_1800ad2b4;
    local_438[0] = param_2;
    FUN_1801fc980(local_438);
  }
  param_3[4] = uVar2 + param_2;
  return 0;
}


