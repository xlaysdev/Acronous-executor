/* FUN_1800901f0 @ 1800901f0 */

undefined8
FUN_1800901f0(char *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,ulonglong param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  cVar1 = *param_1;
  uVar3 = (param_3 / 3) * 4;
  if (param_3 % 3 == 0) {
    if (param_5 < uVar3) {
      return 1;
    }
    uVar2 = FUN_180111970(param_1,param_2,param_3,param_4,uVar3);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (cVar1 == '\0') {
      uVar3 = (ulonglong)(param_3 % 3 == 1) ^ 3 | uVar3;
      if (param_5 < uVar3) {
        return 1;
      }
      FUN_180111970(param_1,param_2,param_3,param_4,uVar3);
      return 0;
    }
    uVar3 = uVar3 + 4;
    if (param_5 < uVar3) {
      return 1;
    }
    uVar2 = FUN_180111970(param_1,param_2,param_3,param_4,uVar3);
  }
  if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar2,uVar3,uVar3,&DAT_18020ea70);
  }
  uVar3 = FUN_180111ef0(uVar2,param_4 + uVar2,uVar3 - uVar2);
  if (CARRY8(uVar3,uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("usize overflow when calculating b64 lengthC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\base64-0.22.1\\src\\encode.rs"
                  ,0x2a,&DAT_18020ea58);
  }
  return 0;
}


