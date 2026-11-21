/* FUN_1801e71c0 @ 1801e71c0 */

undefined8 * FUN_1801e71c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  lVar2 = param_2[2];
  FUN_1801e6e06(&local_38);
  if (local_38 == '\x01') {
    *(undefined1 *)(param_1 + 1) = local_37;
  }
  else if (local_30 < lVar2 - 1U) {
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 + 1U < 0x1f5) {
      uVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar3;
      param_1[2] = local_30;
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      return param_1;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = 0;
  return param_1;
}


