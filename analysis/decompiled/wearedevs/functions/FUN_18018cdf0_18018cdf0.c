/* FUN_18018cdf0 @ 18018cdf0 */

void FUN_18018cdf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_40;
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(*param_1 + 0x10);
  lVar2 = *(longlong *)(*param_1 + 0x18);
  FUN_1801ef8f0(local_38);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 3;
    do {
      local_40 = lVar1;
      FUN_1801ef790(local_38,&local_40,&DAT_180266300);
      lVar2 = lVar2 + -8;
      lVar1 = lVar1 + 8;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_38);
  return;
}


