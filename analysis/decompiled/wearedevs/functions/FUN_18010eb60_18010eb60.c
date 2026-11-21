/* FUN_18010eb60 @ 18010eb60 */

undefined8 *
FUN_18010eb60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  char local_4b [17];
  undefined2 uStack_3a;
  undefined6 local_38;
  undefined2 uStack_32;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  
  uVar1 = FUN_1801f1a70(param_2,param_3);
  if ((uVar1 & 1) == 0) {
    FUN_180027490();
    puVar2 = (undefined2 *)thunk_FUN_1801d32d0(0x20,4);
    if (puVar2 == (undefined2 *)0x0) goto LAB_18010ec4b;
    *puVar2 = 0;
    *(int *)(puVar2 + 1) = (int)(uVar1 >> 8);
    puVar2[3] = param_4;
  }
  else {
    FUN_1801f1ae0(local_4b,param_2,param_3);
    if (local_4b[0] != '\0') {
      *param_1 = 0;
      return param_1;
    }
    FUN_180027490();
    puVar2 = (undefined2 *)thunk_FUN_1801d32d0(0x20,4);
    if (puVar2 == (undefined2 *)0x0) {
LAB_18010ec4b:
                    /* WARNING: Subroutine does not return */
      FUN_180201705(4,0x20);
    }
    local_38 = local_4b._1_6_;
    uStack_32 = local_4b._7_2_;
    uStack_30 = local_4b._9_6_;
    uStack_2a = local_4b._15_2_;
    *puVar2 = 1;
    *(ulonglong *)(puVar2 + 1) = CONCAT62(local_38,uStack_3a);
    *(ulonglong *)(puVar2 + 5) = CONCAT62(uStack_30,uStack_32);
    puVar2[9] = uStack_2a;
    *(undefined8 *)(puVar2 + 10) = 0;
    puVar2[0xe] = param_4;
  }
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = 1;
  param_1[3] = puVar2 + 0x10;
  return param_1;
}


