/* FUN_180163f50 @ 180163f50 */

void FUN_180163f50(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2[2] == 0) {
    if (param_2[3] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: self.tail.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\util\\linked_list.rs"
                    ,0x25,&DAT_1802601a8);
    }
    lVar1 = *param_2;
    lVar2 = param_2[1];
    FUN_18016be60(param_1,lVar1,lVar2);
    if (*param_1 != '\0') {
      return;
    }
    FUN_18016be60(param_1,lVar1 + 0x410,lVar2);
    if (*param_1 != '\0') {
      return;
    }
    FUN_18016be60(param_1,lVar1 + 0x820,lVar2);
    if (*param_1 != '\0') {
      return;
    }
    FUN_18016be60(param_1,lVar1 + 0xc30,lVar2);
    if (*param_1 != '\0') {
      return;
    }
    FUN_18016be60(param_1,lVar1 + 0x1040,lVar2);
    if (*param_1 != '\0') {
      return;
    }
    FUN_18016be60(param_1,lVar1 + 0x1450,lVar2);
    uVar3 = *(undefined8 *)param_1;
  }
  else {
    lVar1 = param_2[1];
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    *(longlong *)(param_1 + 0x18) = lVar1;
    uVar3 = 1;
  }
  *(undefined8 *)param_1 = uVar3;
  return;
}


