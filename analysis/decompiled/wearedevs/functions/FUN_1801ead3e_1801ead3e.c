/* FUN_1801ead3e @ 1801ead3e */

void FUN_1801ead3e(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined1 uStack_8;
  char cStack_7;
  char cStack_6;
  char cStack_5;
  char cStack_4;
  char cStack_3;
  undefined2 local_2;
  
  uVar1 = 0x1f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar1 = (uVar1 ^ 0x1c) >> 2;
  uStack_8 = 0;
  local_a = 0;
  cStack_7 = "0123456789abcdef"[param_2 >> 0x14];
  cStack_6 = "0123456789abcdef"[param_2 >> 0x10 & 0xf];
  cStack_5 = "0123456789abcdef"[param_2 >> 0xc & 0xf];
  cStack_4 = "0123456789abcdef"[param_2 >> 8 & 0xf];
  cStack_3 = "0123456789abcdef"[param_2 >> 4 & 0xf];
  local_2 = CONCAT11(0x7d,"0123456789abcdef"[param_2 & 0xf]);
  *(undefined2 *)((longlong)&uStack_c + (ulonglong)uVar1) = 0x755c;
  *(undefined1 *)((longlong)&local_a + (ulonglong)uVar1) = 0x7b;
  *(undefined2 *)(param_1 + 1) = local_2;
  *param_1 = CONCAT17(cStack_3,CONCAT16(cStack_4,CONCAT15(cStack_5,CONCAT14(cStack_6,CONCAT13(
                                                  cStack_7,CONCAT12(uStack_8,local_a))))));
  *(char *)((longlong)param_1 + 10) = (char)uVar1 + -2;
  *(undefined1 *)((longlong)param_1 + 0xb) = 10;
  return;
}


