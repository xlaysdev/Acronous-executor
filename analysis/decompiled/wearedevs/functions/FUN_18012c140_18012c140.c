/* FUN_18012c140 @ 18012c140 */

void FUN_18012c140(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_40;
  undefined1 local_38 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_1801ef8f0(local_38);
  if (lVar2 != 0) {
    do {
      local_40 = lVar1;
      FUN_1801ef790(local_38,&local_40,&DAT_180243410);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_38);
  return;
}


