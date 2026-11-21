/* FUN_1801097e0 @ 1801097e0 */

undefined8
FUN_1801097e0(char *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,ulonglong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = (param_3 / 3) * 4;
  if (param_3 % 3 != 0) {
    if (*param_1 == '\0') {
      uVar3 = uVar3 | (ulonglong)(param_3 % 3 == 1) ^ 3;
    }
    else {
      uVar3 = uVar3 + 4;
    }
  }
  uVar2 = 1;
  if (uVar3 <= param_5) {
    uVar1 = FUN_180111970(param_1,param_2,param_3,param_4,uVar3);
    if (*param_1 == '\x01') {
      if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar1,uVar3,uVar3,&DAT_18023cf60);
      }
      uVar3 = FUN_180111ef0(uVar1,param_4 + uVar1,uVar3 - uVar1);
      if (CARRY8(uVar3,uVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("usize overflow when calculating b64 lengthC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\base64-0.22.1\\src\\encode.rs"
                      ,0x2a,&DAT_18023cf48);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


